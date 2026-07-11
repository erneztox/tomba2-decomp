/**
 * @brief CD init attempt: tries FUN_8008b2d8 then FUN_8008b19c, returns success s32
 * @note Original: func_80089930 at 0x80089930
 */
// CD_InitAttempt



s32 FUN_80089930(void)

{
  s32 bVar1;
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
