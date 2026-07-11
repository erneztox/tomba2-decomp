// FUN_0801979c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801979c(byte *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((DAT_800bf816 != '\0') && (DAT_800bf817 == '\a')) && ((_DAT_800bfe56 & 4) == 0)) {
    iVar3 = -0x7fed7818;
    iVar2 = 0;
    do {
      iVar1 = func_0x0010fab0(param_1,iVar3);
      if (((iVar1 != 0) && ((*param_1 & 4) == 0)) && (param_1[5] < 2)) {
        *param_1 = 7;
        param_1[0x2b] = ((char)iVar1 + -1) * '@';
        param_1[5] = 7;
        param_1[6] = 0;
        param_1[7] = 0;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < 2);
  }
  return;
}

