// FUN_8011d044

void FUN_8011d044(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc4) + 8);
  if (0x800 < (short)uVar1) {
    uVar1 = uVar1 | 0xf000;
  }
  *(short *)(param_1 + 0x54) = (short)uVar1 >> 1;
  if (*(char *)(param_1 + 0x2b) != '\0') {
    FUN_80125c4c();
  }
  return;
}

