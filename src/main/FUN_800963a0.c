
int FUN_800963a0(char param_1)

{
  int iVar1;
  
  if ((byte)(param_1 - 1U) < 0x18) {
    iVar1 = (int)param_1;
    DAT_80105cec = param_1;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

