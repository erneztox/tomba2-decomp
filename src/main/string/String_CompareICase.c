/**
 * @brief String compare ignore case: compares strings case-insensitively
 * @note Original: func_8009A640 at 0x8009A640
 */
// String_CompareICase



int FUN_8009a640(char *param_1,char *param_2,int param_3)

{
  s8 cVar1;
  int iVar2;
  char *pcVar3;
  
  if ((param_1 == (s8*)0x0) || (param_2 == (s8*)0x0)) {
    iVar2 = 0;
    if ((param_1 != param_2) && (iVar2 = -1, param_1 != (s8*)0x0)) {
      iVar2 = 1;
    }
  }
  else {
    param_3 = param_3 + -1;
    iVar2 = 0;
    if (-1 < param_3) {
      do {
        pcVar3 = param_2;
        cVar1 = *param_1;
        if (cVar1 != *pcVar3) break;
        param_1 = param_1 + 1;
        if (cVar1 == '\0') goto LAB_8009a6b4;
        param_3 = param_3 + -1;
        param_2 = pcVar3 + 1;
      } while (-1 < param_3);
      if (param_3 < 0) {
LAB_8009a6b4:
        iVar2 = 0;
      }
      else {
        iVar2 = (int)*param_1 - (int)*pcVar3;
      }
    }
  }
  return iVar2;
}
