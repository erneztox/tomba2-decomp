
void FUN_80054e24(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 1) {
    if (1 < param_2) {
      iVar1 = param_3 + 0x6c;
      goto LAB_80054e68;
    }
    iVar1 = param_3 + 0x6c;
    if ((param_2 != 0) || (*(byte *)(param_1 + 0x147) != (*(byte *)(param_1 + 0x16a) & 1)))
    goto LAB_80054e68;
  }
  iVar1 = param_3 + 0x6a;
LAB_80054e68:
  FUN_80054d14(param_1,iVar1,0);
  return;
}

