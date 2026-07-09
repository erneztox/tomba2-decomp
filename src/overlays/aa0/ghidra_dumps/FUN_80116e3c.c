// FUN_80116e3c

undefined4 FUN_80116e3c(void)

{
  int in_v0;
  undefined4 uVar1;
  int in_v1;
  uint uVar2;
  int in_a3;
  
  if (in_v0 != 0) {
    uVar1 = FUN_8011fe24();
    return uVar1;
  }
  uVar2 = in_v1 + 0x400U & 0xfff;
  if (*(short *)(in_a3 + 0x6c) < 0xd) {
    uVar1 = 0x200;
    if (0x7ff < uVar2) {
      uVar1 = FUN_8011ff68();
      return uVar1;
    }
  }
  else {
    uVar1 = 0xfffffe00;
    if (0x7ff < uVar2) {
      uVar1 = FUN_8011ff68();
      return uVar1;
    }
  }
  return uVar1;
}

