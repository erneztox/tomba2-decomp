// FUN_8011dfc4

void FUN_8011dfc4(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 3);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(uVar2 * 6 + -0x7fec89ec);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(uVar2 * 6 + -0x7fec89ea);
  iVar3 = *(int *)(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(uVar2 * 6 + -0x7fec89e8);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(iVar3 + 0x54);
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar3 + 0x56);
  uVar1 = *(undefined2 *)(iVar3 + 0x58);
  *(undefined2 *)(param_1 + 0x80) = 0x32;
  *(undefined2 *)(param_1 + 0x82) = 100;
  *(undefined2 *)(param_1 + 0x58) = uVar1;
  *(short *)(param_1 + 0x84) = *(short *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7fec89b4) + 0x5a;
  *(short *)(param_1 + 0x86) = *(short *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7fec89b4) + 0xdc;
  return;
}

