// FUN_08025cbc

undefined1 FUN_08025cbc(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x29) & 0x80) == 0) {
    if (param_2 != 0) {
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
    }
    func_0x0004766c(param_1);
    iVar1 = func_0x00049250(param_1,0,
                            (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                  (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
    if (iVar1 != 1) {
      return 0;
    }
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x40;
  }
  return *(undefined1 *)(param_1 + 0x29);
}

