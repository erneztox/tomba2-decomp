/**
 * @brief CD init with 4 retries: sets callbacks at 0x800ABF24 on success, prints error on fail
 * @note Original: func_800898A0 at 0x800898A0
 */
// CD_InitWithRetry



undefined4 FUN_800898a0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 4;
  do {
    iVar1 = FUN_80089930();
    if (iVar1 == 1) {
      DAT_800abf24 = FUN_800899bc;
      DAT_800abf28 = 0;
      DAT_800abfbc = FUN_8008996c;
      DAT_800abfc0 = FUN_80089994;
      return 1;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  FUN_8009a730(s_CdInit__Init_failed_8001c0f0);
  return 0;
}
