// FUN_80105514

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_80105514(byte *param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  
  uVar11 = func_0x8002300c(param_1,param_2,(int)*(short *)(param_2 + 0x80) << 2);
  uVar9 = (uint)((ulonglong)uVar11 >> 0x20);
  uVar6 = 0x1f800000;
  if ((int)uVar11 != 0) {
    uVar8 = (uint)_DAT_1f80009c;
    *(undefined1 *)(param_2 + 0x2b) = 1;
    if (DAT_1f800137 == '\0') {
      uVar5 = *(ushort *)(param_1 + 0x140);
      iVar7 = func_0x80085690(-((int)(((uint)*(ushort *)(param_2 + 0x36) -
                                      (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10),
                              (int)(((uint)*(ushort *)(param_2 + 0x2e) -
                                    (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10);
      iVar10 = (int)((iVar7 * 0x10 + (uVar5 - 0x400) * -0x10) * 0x10000) >> 0x10;
      if (iVar10 < 0) {
        iVar10 = -iVar10;
      }
      if (iVar10 < 0x1000) {
        _DAT_1f80018e = 0x4100;
        DAT_800bf840 = 0x42;
        _DAT_1f80018c = *(short *)(param_1 + 0x140) + -0x400;
        if (*(short *)(param_1 + 0x140) == 0x400) {
          DAT_80130005 = 2;
          DAT_80130070 = 1;
          return 0x100000001;
        }
        uVar6 = func_0x8009a450();
        bVar1 = *(byte *)((uVar6 & 0xf) + 0x80135c28);
        return (ulonglong)CONCAT14(bVar1,(int)(short)(ushort)bVar1);
      }
      iVar10 = (int)((iVar7 * 0x10 + (*(ushort *)(param_1 + 0x140) + 0x400) * -0x10) * 0x10000) >>
               0x10;
      if (iVar10 < 0) {
        iVar10 = -iVar10;
      }
      if (iVar10 < 0x1000) {
        _DAT_1f80018c = (short)(*(ushort *)(param_1 + 0x140) + 0x400);
        _DAT_1f80018e = 0x4200;
        DAT_800bf840 = 0x43;
      }
    }
    uVar9 = (uint)_DAT_1f80008c;
    uVar6 = 2;
    if ((int)uVar9 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) + 0x50) {
      *(undefined1 *)(param_2 + 0x2b) = 2;
      uVar9 = (uint)*(short *)(param_2 + 0x80);
      uVar6 = (uint)((int)((int)*(short *)(param_1 + 0x80) + uVar9) < (int)(uint)_DAT_1f80008c);
      if (uVar6 == 0) {
        uVar6 = *param_1 & 4;
        if ((*param_1 & 4) == 0) {
          iVar7 = (int)((uVar8 + 0x800) * 0x10000) >> 0x10;
          iVar10 = func_0x80083f50(iVar7);
          sVar2 = *(short *)(param_1 + 0x80);
          sVar3 = *(short *)(param_2 + 0x80);
          iVar7 = func_0x80083e80(iVar7);
          sVar4 = *(short *)(param_2 + 0x80);
          *(short *)(param_1 + 0x2e) =
               *(short *)(param_2 + 0x2e) + (short)(iVar10 * ((int)sVar2 + (int)sVar3) >> 0xc);
          uVar9 = iVar7 * ((int)*(short *)(param_1 + 0x80) + (int)sVar4) >> 0xc;
          uVar6 = *(ushort *)(param_2 + 0x36) - uVar9;
          *(short *)(param_1 + 0x36) = (short)uVar6;
        }
      }
    }
  }
  return CONCAT44(uVar9,uVar6);
}

