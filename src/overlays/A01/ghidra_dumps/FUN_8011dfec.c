// FUN_8011dfec

void FUN_8011dfec(int param_1,int param_2)

{
  undefined2 uVar1;
  int in_v1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(in_v1 * 6 + param_2 + 2);
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(in_v1 * 6 + param_2 + 4);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(iVar2 + 0x54);
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar2 + 0x56);
  uVar1 = *(undefined2 *)(iVar2 + 0x58);
  *(undefined2 *)(param_1 + 0x80) = 0x32;
  *(undefined2 *)(param_1 + 0x82) = 100;
  *(undefined2 *)(param_1 + 0x58) = uVar1;
  *(short *)(param_1 + 0x84) = *(short *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7fec89b4) + 0x5a;
  *(short *)(param_1 + 0x86) = *(short *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7fec89b4) + 0xdc;
  return;
}

