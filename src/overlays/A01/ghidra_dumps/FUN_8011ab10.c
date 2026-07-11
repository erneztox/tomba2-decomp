// FUN_8011ab10

void FUN_8011ab10(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = func_0x8003116c(0x202,0,0);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x10) = param_1;
    *(undefined2 *)(iVar2 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
    *(short *)(iVar2 + 0x2e) = *(short *)(param_1 + 0x32) + -0x30;
    uVar1 = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(iVar2 + 7) = 2;
    *(undefined2 *)(iVar2 + 0x30) = uVar1;
  }
  *(undefined2 *)(param_1 + 0x80) = 200;
  *(undefined2 *)(param_1 + 0x82) = 400;
  *(undefined2 *)(param_1 + 0x84) = 0x2d0;
  *(int *)(param_1 + 0x14) = iVar2;
  *(undefined2 *)(param_1 + 0x86) = 0x310;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  return;
}

