#ifndef GUARD_USER_PROTECTION
#define GUARD_USER_PROTECTION

#define SHOULD_RUN_ROM_CHECK TRUE

extern bool8 gPatchSuccess;
extern u32 gRomHashResults;
void VerifyRomPatch(void);
void VerifySavestate(void);

void UserProtectionWindow(void);
void CB2_RomHashFail(void);
void CB2_SaveStateFailure(void);

void SetRamVersionCheck(void);
void CheckRamVersion(void);

#endif
