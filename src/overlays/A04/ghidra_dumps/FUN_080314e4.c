// FUN_080314e4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_080314e4(int param_1)

{
  byte bVar1;
  short sVar2;
  
  if (*(char *)(param_1 + 0x29) == '\0') {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
    bVar1 = func_0x001322a8(param_1,0,
                            (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                  (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
    *(byte *)(param_1 + 0x29) = bVar1;
    if (bVar1 != 0) {
      *(byte *)(param_1 + 0x29) = bVar1 & 1;
      if ((((int)(short)_DAT_1f8001a6 & 0x8000U) != 0) && ((_DAT_1f8001a6 & 0xf00) == 0x700)) {
        *(undefined1 *)(param_1 + 0x5f) = 0xff;
      }
      if (*(byte *)(param_1 + 0x29) == 0) goto LAB_080315a4;
      *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x80;
      func_0x00049674(param_1);
      *(undefined2 *)(param_1 + 0x62) = _DAT_1f8001a2;
    }
    if (*(char *)(param_1 + 0x29) == '\0') {
LAB_080315a4:
      sVar2 = *(short *)(param_1 + 0x68) + 0x300;
      *(short *)(param_1 + 0x68) = sVar2;
      if (0x3000 < sVar2) {
        *(undefined2 *)(param_1 + 0x68) = 0x3000;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x68) * 0x100;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(undefined2 *)(param_1 + 0x68) = 0;
  return *(undefined1 *)(param_1 + 0x29);
}

