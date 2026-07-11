// FUN_8011fb10

undefined4 FUN_8011fb10(int param_1,undefined4 param_2,int param_3)

{
  undefined1 in_v0;
  undefined4 uVar1;
  short in_t4;
  
  *(undefined1 *)(param_3 + 0x12) = in_v0;
  *(undefined1 *)(param_3 + 0x1c) = in_v0;
  *(undefined1 *)(param_3 + 0x1d) = in_v0;
  *(undefined1 *)(param_3 + 0x1e) = in_v0;
  *(undefined1 *)(param_3 + 0x28) = in_v0;
  *(undefined1 *)(param_3 + 0x29) = in_v0;
  *(undefined1 *)(param_3 + 0x2a) = in_v0;
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

