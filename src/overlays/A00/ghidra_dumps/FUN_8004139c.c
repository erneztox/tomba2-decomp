// FUN_8004139c

undefined4 FUN_8004139c(short *param_1,short param_2,short param_3)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)param_2 - (int)*param_1;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar2 <= param_3) {
    *param_1 = param_2;
    return 1;
  }
  sVar1 = param_3;
  if (0x7ff < (param_2 - *param_1 & 0xfffU)) {
    sVar1 = -param_3;
  }
  *param_1 = *param_1 + sVar1;
  if ((int)((int)param_2 - (int)*param_1 & 0xfffU) <= (int)param_3) {
    *param_1 = param_2;
    return 1;
  }
  return 0;
}

