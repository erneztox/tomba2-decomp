// FUN_0801a244

void FUN_0801a244(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  
  *(undefined1 *)(param_1 + 0xc) = 5;
  *(undefined1 *)(param_1 + 2) = 4;
  param_2 = param_2 * 4;
  *(undefined4 *)(param_1 + 0x1c) = 0x8004c238;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + -0x7fec3aef);
  bVar1 = *(byte *)(param_2 + -0x7fec3af0);
  *(undefined2 *)(param_1 + 0x60) = 1;
  *(byte *)(param_1 + 0x5e) = bVar1 & 0x7f;
  uVar2 = *(undefined2 *)(param_2 + -0x7fec3aee);
  *(undefined2 *)(param_1 + 100) = 2;
  *(undefined2 *)(param_1 + 0x62) = uVar2;
  if ((*(byte *)(param_2 + -0x7fec3af0) & 0x80) != 0) {
    *(undefined2 *)(param_1 + 100) = 6;
  }
  func_0x0004a828(param_1);
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}

