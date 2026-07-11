// FUN_08029dc8

void FUN_08029dc8(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = func_0x00051b70(param_1,0xc,0x2b);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x80) = 0xe0;
    *(undefined2 *)(param_1 + 0x82) = 0x1c0;
    *(undefined2 *)(param_1 + 0x84) = 0x10;
    *(undefined2 *)(param_1 + 0x86) = 0x40;
    *(undefined2 *)(param_1 + 0x56) = 0x800;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    param_1[4] = param_1[4] + '\x01';
    if ((DAT_800bfa1d & 4) != 0) {
      param_1[5] = 1;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x40;
    }
  }
  return;
}

