// FUN_80031780

void FUN_80031780(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 != 0) {
    do {
      puVar1 = (uint *)(iVar2 + 4);
      iVar2 = iVar2 + 8;
    } while ((*puVar1 & 0xc0000000) == 0);
    if ((*puVar1 & 0x40000000) != 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      return;
    }
    *(int *)(param_1 + 0x38) = iVar2;
  }
  return;
}

