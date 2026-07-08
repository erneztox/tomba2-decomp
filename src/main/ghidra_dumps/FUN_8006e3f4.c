
void FUN_8006e3f4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_8006d960();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 1;
  }
  iVar1 = FUN_8006da54(param_1,param_2);
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 2;
  }
  FUN_8006d02c(param_1);
  return;
}

