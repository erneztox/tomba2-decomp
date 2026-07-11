// FUN_8011b454

void FUN_8011b454(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int in_v0;
  int in_v1;
  
  *(int *)(param_3 + 0x2c) = in_v1 + in_v0 * 0x100;
  sVar1 = *(short *)(param_3 + 0x56) + 0x80;
  *(short *)(param_3 + 0x56) = sVar1;
  *(short *)(param_3 + 0x48) = *(short *)(param_3 + 0x48) + *(short *)(param_3 + 0x4e);
  if (sVar1 == 0x800) {
    *(undefined2 *)(param_3 + 0x40) = 0x5a;
    *(undefined2 *)(param_3 + 0x48) = 0xf000;
    *(undefined2 *)(param_3 + 0x4e) = 0x200;
    FUN_801243dc();
    return;
  }
  return;
}

