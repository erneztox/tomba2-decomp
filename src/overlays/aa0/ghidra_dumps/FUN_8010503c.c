// FUN_8010503c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8010503c(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar2 = func_0x80083f50((int)*(short *)(param_2 + 0x56));
  sVar1 = *(short *)(param_2 + 0x7c);
  iVar3 = func_0x80083e80((int)*(short *)(param_2 + 0x56));
  iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x2e) -
                ((iVar2 * sVar1 >> 0xc) + (uint)*(ushort *)(param_2 + 0x2e))) * 0x10000) >> 0x10;
  iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x36) -
                ((uint)*(ushort *)(param_2 + 0x36) - (iVar3 * *(short *)(param_2 + 0x7c) >> 0xc))) *
               0x10000) >> 0x10;
  uVar4 = func_0x80084080(iVar6 * iVar6 + iVar2 * iVar2);
  uVar5 = 0xffffffff;
  if ((int)(uVar4 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar3 = (uint)*(ushort *)(param_1 + 0x32) -
            ((uint)*(ushort *)(param_2 + 0x32) + (uint)*(ushort *)(param_2 + 0x7e));
    if ((int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
        (int)(iVar3 + (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x84) & 0xffff
             )) {
      uVar5 = FUN_8010e228();
      return uVar5;
    }
    _DAT_1f80009c = func_0x80085690(-iVar2,iVar6);
    if (iVar3 * 0x10000 < 0) {
      uVar5 = FUN_8010e150();
      return uVar5;
    }
    iVar2 = (uint)*(ushort *)(param_1 + 0x84) << 0x10;
    if ((int)(short)iVar3 < -((iVar2 >> 0x10) - (iVar2 >> 0x1f) >> 1)) {
      uVar5 = FUN_8010e228();
      return uVar5;
    }
    uVar5 = 2;
    if (((((int)(((((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84)) +
                  ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84))) - iVar3)
                * 0x10000) <=
           (int)((((uint)*(ushort *)(param_1 + 0x80) + (uint)*(ushort *)(param_2 + 0x80)) - uVar4) *
                0x10000)) && (uVar5 = 3, (*(ushort *)(param_1 + 0x17e) & 0x200) == 0)) &&
        (uVar5 = 3, _DAT_1f800098 == 0)) && (param_3 == 0)) {
      DAT_1f800253 = 4;
      *(ushort *)(param_1 + 0x32) =
           *(short *)(param_2 + 0x32) + (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84)) +
           (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84));
      uVar5 = 3;
      if ((*(char *)(param_1 + 0x145) == '\x01') && (uVar5 = 3, *(short *)(param_1 + 0x4a) < 0)) {
        *(undefined2 *)(param_1 + 0x4a) = 0;
      }
    }
  }
  return uVar5;
}

