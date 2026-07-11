// FUN_8011c854

void FUN_8011c854(undefined1 param_1,int param_2)

{
  undefined2 in_v0;
  uint uVar1;
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 5) = 0;
  *(undefined2 *)(param_2 + 0x48) = 0;
  *(undefined2 *)(param_2 + 0x4a) = 0;
  *(undefined2 *)(param_2 + 0x4c) = 0;
  *(undefined1 *)(param_2 + 0x29) = 0;
  *(undefined2 *)(param_2 + 0x32) = in_v0;
  *(undefined1 *)(param_2 + 4) = param_1;
  if (0x80807f < (*(uint *)(param_2 + 0x54) & 0xffffff)) {
    *(undefined1 *)(param_2 + 4) = 2;
    FUN_8012e858();
    return;
  }
  *(undefined1 *)(param_2 + 1) = 1;
  uVar1 = *(uint *)(param_2 + 0x54) + *(int *)(param_2 + 0x58) & 0xffffff;
  *(uint *)(param_2 + 0x54) = uVar1;
  *(uint *)(param_2 + 0x54) = uVar1 | *(int *)(param_2 + 0x5c) << 0x18;
  *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + -0x10101;
  *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + -5;
  FUN_8012e858();
  return;
}

