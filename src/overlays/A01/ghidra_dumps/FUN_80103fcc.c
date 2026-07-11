// FUN_80103fcc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80103fcc(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x2e) -
                ((uint)*(ushort *)(param_3 + 0x2c) + (uint)*(ushort *)(param_2 + 0x60))) * 0x10000)
          >> 0x10;
  iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x36) -
                ((uint)*(ushort *)(param_3 + 0x34) + (uint)*(ushort *)(param_2 + 100))) * 0x10000)
          >> 0x10;
  uVar1 = func_0x80084080(iVar5 * iVar5 + iVar4 * iVar4);
  uVar2 = 0xffffffff;
  if ((int)(uVar1 & 0xffff) <= *(short *)(param_1 + 0x80) + 0x5a) {
    iVar3 = (uint)*(ushort *)(param_1 + 0x32) -
            ((uint)*(ushort *)(param_3 + 0x30) + (uint)*(ushort *)(param_2 + 0x62));
    if (*(short *)(param_1 + 0x86) + 0xb4 <
        (int)(iVar3 + *(ushort *)(param_1 + 0x84) + 0x5a & 0xffff)) {
      uVar2 = FUN_8010d158();
      return uVar2;
    }
    _DAT_1f80009c = func_0x80085690(-iVar4,iVar5);
    iVar4 = iVar3 * 0x10000;
    if (iVar4 < 0) {
      if (*(char *)(iVar4 + -0x5c2) == '\x01') {
        *(undefined1 *)(iVar3 + 4) = 3;
        func_0x8004d4f4(0x1c,1);
        func_0x80026100(*(undefined1 *)(iVar4 + -0x781));
        func_0x8004ed94(0x70,0x41);
        func_0x8004b2e8(iVar3);
      }
      *(undefined1 *)(iVar3 + 1) = 1;
      uVar2 = func_0x800517f8(iVar3);
      return uVar2;
    }
    iVar4 = (uint)*(ushort *)(param_1 + 0x84) << 0x10;
    if ((int)(short)iVar3 < -((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1)) {
      uVar2 = FUN_8010d158();
      return uVar2;
    }
    uVar2 = 2;
    if ((((int)(((((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84)) + 0x5a) -
                iVar3) * 0x10000) <=
          (int)(((uint)*(ushort *)(param_1 + 0x80) - (uVar1 - 0x5a)) * 0x10000)) &&
        (uVar2 = 3, _DAT_1f800098 == 0)) && (param_4 == 0)) {
      DAT_1f800253 = 4;
      *(ushort *)(param_1 + 0x32) =
           *(short *)(param_3 + 0x30) +
           (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84)) + 0x5a;
      uVar2 = 3;
      if ((*(char *)(param_1 + 0x145) == '\x01') && (uVar2 = 3, *(short *)(param_1 + 0x4a) < 0)) {
        *(undefined2 *)(param_1 + 0x4a) = 0;
      }
    }
  }
  return uVar2;
}

