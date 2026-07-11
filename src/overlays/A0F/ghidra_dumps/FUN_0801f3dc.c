// FUN_0801f3dc

bool FUN_0801f3dc(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00118534();
  if (iVar1 != 0) {
    DAT_800bf9eb = 0;
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return iVar1 != 0;
}

