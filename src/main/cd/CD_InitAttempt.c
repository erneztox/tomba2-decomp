/**
 * @brief CD init attempt: tries CD_Init3 then CD_InitDrive2, returns success s32
 * @note Original: func_80089930 at 0x80089930
 */
// CD_InitAttempt



s32 CD_InitAttempt(void)

{
  s32 bVar1;
  int iVar2;
  
  iVar2 = CD_Init3();
  if (iVar2 == 0) {
    iVar2 = CD_InitDrive2();
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}
