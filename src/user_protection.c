#include "global.h"
#include "data.h"

static inline void CopyFuncToIwram(void *funcBuffer, const void *funcStartAddress, const void *funcEndAdress)
{
    memcpy(funcBuffer, funcStartAddress, funcEndAdress - funcStartAddress);
}

ARM_FUNC __attribute__((noinline, no_reorder)) __attribute__((optimize("-O3"))) static void TestHashRom(u32 *hashes)
{
    u32 *startAddress = (u32 *)0x08000000;
    for (u32 i = 0; i < (1 << 23) - 4; i+=4)
    {
        hashes[0] ^= startAddress[i];
        hashes[1] ^= startAddress[i+1];
        hashes[2] ^= startAddress[i+2];
        hashes[3] ^= startAddress[i+3];
    }
}

ARM_FUNC __attribute__((no_reorder)) static void SwitchToArmCallTestHashRom(u32 *hashes, void (*hashFunction)(u32 *hashes))
{
    hashFunction(hashes);
}

void HashRomIwram(void)
{
    u32 funcBuffer[350];
    u32 hashes[4] = {0, 0, 0, 0};

    CycleCountStart();
    CopyFuncToIwram(funcBuffer, TestHashRom, SwitchToArmCallTestHashRom);
    SwitchToArmCallTestHashRom(hashes, (void *) funcBuffer);
    u32 timeTaken = CycleCountEnd() >> 24;
    MgbaPrintf(MGBA_LOG_WARN, "Time: %u\n%u\n%u\n%u\n%u", timeTaken, hashes[0], hashes[1], hashes[2], hashes[3]);
}

