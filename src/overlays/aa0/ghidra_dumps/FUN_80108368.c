// FUN_80108368

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80108368(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = func_0x8002300c(param_1,param_2,(int)*(short *)(param_2 + 0x80) << 2);
  if (iVar5 != 0) {
    *(undefined1 *)(param_2 + 0x2b) = 1;
    if (DAT_1f800137 == '\0') {
      uVar4 = *(ushort *)(param_1 + 0x140);
      iVar6 = func_0x80085690(-((int)(((uint)*(ushort *)(param_2 + 0x36) -
                                      (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10),
                              (int)(((uint)*(ushort *)(param_2 + 0x2e) -
                                    (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10);
      iVar5 = (int)((iVar6 * 0x10 + (uVar4 - 0x400) * -0x10) * 0x10000) >> 0x10;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 < 0x1000) {
        _DAT_1f80018e = 0x4100;
        DAT_800bf840 = 0x42;
        _DAT_1f80018c = *(short *)(param_1 + 0x140) + -0x400;
        FUN_80111428();
        return;
      }
      iVar7 = *(ushort *)(param_1 + 0x140) + 0x400;
      iVar5 = (iVar6 * 0x10 + iVar7 * -0x10) * 0x10000 >> 0x10;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 < 0x1000) {
        _DAT_1f80018c = (short)iVar7;
        _DAT_1f80018e = 0x4200;
        DAT_800bf840 = 0x43;
      }
    }
    if (((int)(uint)_DAT_1f80008c <=
         (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) + 0x3c) &&
       (*(undefined1 *)(param_2 + 0x2b) = 2,
       (int)(uint)_DAT_1f80008c <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)
       )) {
      iVar5 = func_0x80083f50(_DAT_1f80009c + 0x800);
      sVar1 = *(short *)(param_1 + 0x80);
      sVar2 = *(short *)(param_2 + 0x80);
      iVar6 = func_0x80083e80(_DAT_1f80009c + 0x800);
      sVar3 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_2 + 0x2e) + (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(param_2 + 0x36) -
           (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
    }
  }
  return;
}

