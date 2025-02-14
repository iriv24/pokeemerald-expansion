#ifndef GUARD_USER_PROTECTION
#define GUARD_USER_PROTECTION

#define SLOW_HASH 1
#define FAST_HASH 4

#define SHOULD_RUN_ROM_CHECK TRUE       //  Verify that the patching was successful
#define SHOULD_RUN_RAM_CHECK TRUE       //  Verify that no savestate has been carried over
#define ROM_HASH_SPEED       FAST_HASH

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
