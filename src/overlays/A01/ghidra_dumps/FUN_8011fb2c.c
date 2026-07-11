// FUN_8011fb2c

undefined4 FUN_8011fb2c(int param_1)

{
  undefined4 uVar1;
  short in_t4;
  
  if (*(byte *)(param_1 + 3) == 4) {
    uVar1 = 0x5c;
    if (-0x1997 < in_t4) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xfffffff6;
    if (*(byte *)(param_1 + 3) < 0xb) {
      return 0;
    }
  }
  return uVar1;
}

