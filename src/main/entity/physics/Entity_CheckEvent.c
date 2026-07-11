/**
 * @brief Entity event check: tests entity[0x72] and global DAT_800e806e for event trigger
 * @note Original: func_800421CC at 0x800421CC
 */
// Entity_CheckEvent



undefined4 FUN_800421cc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x72) == 0) {
    uVar1 = 0;
    if (DAT_800e806e == '\x03') {
      uVar1 = 1;
    }
  }
  else if (*(short *)(param_1 + 0x72) == 1) {
    iVar2 = FUN_8006cdcc(0x800e8008);
    uVar1 = 1;
    if (iVar2 != 1) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
