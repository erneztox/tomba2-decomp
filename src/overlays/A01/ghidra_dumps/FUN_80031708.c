// FUN_80031708

void FUN_80031708(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 3) & 0x80) != 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      return;
    }
    *(int *)(param_1 + 0x40) = iVar1 + 4;
  }
  return;
}

