/**
 * @brief CD command timeout: looks up table at 0x800ACE75, returns timeout or 9999999 (infinite)
 * @note Original: func_8009A6C0 at 0x8009A6C0
 */
// CD_GetCmdTimeout



int FUN_8009a6c0(byte param_1)

{
  char cVar1;
  int iVar2;
  
  if (((&DAT_800ace75)[param_1] & 4) == 0) {
    if (((&DAT_800ace75)[param_1] & 3) == 0) {
      iVar2 = 9999999;
    }
    else {
      cVar1 = FUN_8009a3a4((int)(char)param_1);
      iVar2 = cVar1 + -0x57;
    }
  }
  else {
    iVar2 = (char)param_1 + -0x30;
  }
  return iVar2;
}
