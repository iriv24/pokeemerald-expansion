#ifndef GUARD_USER_PROTECTION
#define GUARD_USER_PROTECTION

extern bool8 gPatchSuccess;
extern u32 gRomHashResults;
void VerifyRomPatch(void);
void VerifySavestate(void);

void UserProtectionWindow(void);
void CB2_RomHashFail(void);

#endif
