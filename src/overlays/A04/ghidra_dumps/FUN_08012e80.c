// FUN_08012e80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08012e80(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x2e) -
                ((uint)*(ushort *)(param_3 + 0x2c) + (uint)*(ushort *)(param_2 + 0x60))) * 0x10000)
          >> 0x10;
  iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x36) -
                ((uint)*(ushort *)(param_3 + 0x34) + (uint)*(ushort *)(param_2 + 100))) * 0x10000)
          >> 0x10;
  uVar1 = func_0x00084080(iVar4 * iVar4 + iVar3 * iVar3);
  if (*(short *)(param_1 + 0x80) + 0x5a < (int)(uVar1 & 0xffff)) {
    return 0xffffffff;
  }
  iVar2 = (uint)*(ushort *)(param_1 + 0x32) -
          ((uint)*(ushort *)(param_3 + 0x30) + (uint)*(ushort *)(param_2 + 0x62));
  if ((int)(iVar2 + *(ushort *)(param_1 + 0x84) + 0x5a & 0xffff) <=
      *(short *)(param_1 + 0x86) + 0xb4) {
    _DAT_1f80009c = func_0x00085690(-iVar3,iVar4);
    if (iVar2 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = (uint)*(ushort *)(param_1 + 0x84) << 0x10;
    if (-((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1) <= (int)(short)iVar2) {
      if ((int)(((uint)*(ushort *)(param_1 + 0x80) - (uVar1 - 0x5a)) * 0x10000) <
          (int)(((((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84)) + 0x5a) -
                iVar2) * 0x10000)) {
        return 2;
      }
      if (_DAT_1f800098 != 0) {
        return 3;
      }
      if (param_4 != 0) {
        return 3;
      }
      DAT_1f800253 = 4;
      *(ushort *)(param_1 + 0x32) =
           *(short *)(param_3 + 0x30) +
           (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84)) + 0x5a;
      if (*(char *)(param_1 + 0x145) != '\x01') {
        return 3;
      }
      if (-1 < *(short *)(param_1 + 0x4a)) {
        return 3;
      }
      *(undefined2 *)(param_1 + 0x4a) = 0;
      return 3;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

