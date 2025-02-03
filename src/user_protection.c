#include "global.h"
#include "data.h"
#include "menu.h"
#include "malloc.h"
#include "user_protection.h"
#include "palette.h"
#include "graphics.h"
#include "gpu_regs.h"
#include "bg.h"
#include "main.h"
#include "text_window.h"
#include "string_util.h"
#include "constants/rgb.h"

enum
{
    TEXT_WIN_ID,
};

static EWRAM_DATA u8 sWindowIds[2] = {0};
EWRAM_DATA bool8 gPatchSuccess = FALSE;
EWRAM_DATA u32 gRomHashResults = 0;

static inline void CopyFuncToIwram(void *funcBuffer, const void *funcStartAddress, const void *funcEndAdress)
{
    memcpy(funcBuffer, funcStartAddress, funcEndAdress - funcStartAddress);
}

__attribute__((target("arm"))) __attribute__((noinline, no_reorder)) __attribute__((optimize("-O3"))) static void TestHashRom(void)
{
    u32 hashes[4] = {0, 0, 0, 0};
    u32 *startAddress = (u32 *)0x08000000;
    u32 *endAddress = (u32 *)(0x0A000000 - 4);
    for (u32 i = 0; i < (1 << 23) - 4; i+=4)
    {
        hashes[0] ^= startAddress[i];
        hashes[1] ^= startAddress[i+1];
        hashes[2] ^= startAddress[i+2];
        hashes[3] ^= startAddress[i+3];
    }
    gRomHashResults = hashes[0] ^ hashes[1] ^ hashes[2] ^ hashes[3];
    if (gRomHashResults == *endAddress)
        gPatchSuccess = TRUE;
}

__attribute__((target("arm"))) __attribute__((no_reorder)) static void SwitchToArmCallTestHashRom(void (*hashFunction)(void))
{
    hashFunction();
}

void VerifyRomPatch(void)
{
    u32 funcBuffer[350];

    CycleCountStart();
    CopyFuncToIwram(funcBuffer, TestHashRom, SwitchToArmCallTestHashRom);
    SwitchToArmCallTestHashRom((void *) funcBuffer);
    //u32 timeTaken = CycleCountEnd();
    u32 timeTaken = CycleCountEnd() >> 24;
    MgbaPrintf(MGBA_LOG_WARN, "Time: %u, %u", timeTaken, gRomHashResults);
}

static const struct BgTemplate sBgTemplates[3] =
{
    {
        .bg = 0,
        .charBaseIndex = 2,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0,
    },
    {
        .bg = 2,
        .charBaseIndex = 0,
        .mapBaseIndex = 14,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0,
    },
    {
        .bg = 3,
        .charBaseIndex = 0,
        .mapBaseIndex = 15,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0,
    },
};

static void RomCheckScreenTextPrint(const u8 *text, u8 x, u8 y)
{
    u8 color[3];

    color[0] = TEXT_COLOR_TRANSPARENT;
    color[1] = TEXT_DYNAMIC_COLOR_6;
    color[2] = TEXT_COLOR_LIGHT_GRAY;
    AddTextPrinterParameterized4(sWindowIds[TEXT_WIN_ID], FONT_NORMAL, x * 8, y * 8 + 1, 0, 0, color, 0, text);
}

void UserProtectionWindow(void)
{
    static const struct WindowTemplate textWin[] =
    {
        {
            .bg = 0,
            .tilemapLeft = 3,
            .tilemapTop = 2,
            .width = 24,
            .height = 16,
            .paletteNum = 15,
            .baseBlock = 1,
        }
    };

    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);
    SetGpuReg(REG_OFFSET_BG0HOFS, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS, 0);
    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill32(3, 0, OAM, OAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBgTemplates, ARRAY_COUNT(sBgTemplates));
    LoadBgTiles(0, gTextWindowFrame1_Gfx, 0x120, 0x214);
    DeactivateAllTextPrinters();
    ResetTasks();
    ResetPaletteFade();
    LoadPalette(gTextWindowFrame1_Pal, 0xE0, 0x20);
    LoadPalette(gStandardMenuPalette, 0xF0, 0x20);
    InitWindows(textWin);
    DrawStdFrameWithCustomTileAndPalette(0, TRUE, 0x214, 0xE);
    static const u8 romCheckMessage[] =_(
        "RUNNING ROM INTEGRITY CHECK\n"
        "\n"
        "This will take around 5 seconds\n"
        "but will only need to be done\n"
        "once per game version.\n");
    RomCheckScreenTextPrint(romCheckMessage, 1, 0);
    TransferPlttBuffer();
    *(u16*)PLTT = RGB(17, 18, 31);
    ShowBg(0);
    VerifyRomPatch();
}

void CB2_RomHashFail(void)
{
    static const struct WindowTemplate textWin[] =
    {
        {
            .bg = 0,
            .tilemapLeft = 3,
            .tilemapTop = 2,
            .width = 24,
            .height = 16,
            .paletteNum = 15,
            .baseBlock = 1,
        }
    };

    if (gMain.state)
        return;

    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);
    SetGpuReg(REG_OFFSET_BG0HOFS, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS, 0);
    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill32(3, 0, OAM, OAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBgTemplates, ARRAY_COUNT(sBgTemplates));
    LoadBgTiles(0, gTextWindowFrame1_Gfx, 0x120, 0x214);
    DeactivateAllTextPrinters();
    ResetTasks();
    ResetPaletteFade();
    LoadPalette(gTextWindowFrame1_Pal, 0xE0, 0x20);
    LoadPalette(gStandardMenuPalette, 0xF0, 0x20);
    InitWindows(textWin);
    DrawStdFrameWithCustomTileAndPalette(0, TRUE, 0x214, 0xE);
    static const u8 romCheckFailMessage[] =_(
        "{COLOR RED}ERROR! {COLOR DARK_GRAY}ROM integrity check failed!\n"
        "\n"
        "Please ensure that the patch was\n"
        "applied to the correct base ROM.\n"
        "The game won't start unless this\n"
        "is done correctly.\n");
    RomCheckScreenTextPrint(romCheckFailMessage, 1, 0);
    u32 *endAddress = (u32 *)(0x0A000000 - 4);
    if ((*endAddress) == 0xFFFFFFFF)
    {
        ConvertIntToDecimalStringN(gStringVar2, gRomHashResults, STR_CONV_MODE_LEFT_ALIGN, 10);
        RomCheckScreenTextPrint(gStringVar2, 1, 12);
    }
    TransferPlttBuffer();
    *(u16*)PLTT = RGB(17, 18, 31);
    ShowBg(0);
    gMain.state++;
}
