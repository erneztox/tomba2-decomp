/**
 * @brief CD init attempt: tries FUN_8008b2d8 then FUN_8008b19c, returns success bool
 * @note Original: func_80089930 at 0x80089930
 */
// CD_InitAttempt



bool FUN_80089930(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_8008b2d8();
  if (iVar2 == 0) {
    iVar2 = FUN_8008b19c();
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}
