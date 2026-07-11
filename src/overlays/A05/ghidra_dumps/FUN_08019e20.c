// FUN_08019e20

void FUN_08019e20(undefined1 *param_1)

{
  if (param_1[5] == '\0') {
    param_1[5] = 1;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x80) = 0x20;
    *(undefined2 *)(param_1 + 0x82) = 0x40;
    *(undefined2 *)(param_1 + 0x84) = 0x40;
    *(undefined2 *)(param_1 + 0x86) = 0x80;
    func_0x00041194(param_1,(int)((0x40 - (uint)*(ushort *)(param_1 + 0x80)) * 0x10000) >> 0x10,0,0)
    ;
    *(undefined2 *)(param_1 + 0x5a) = 0x400;
  }
  return;
}

