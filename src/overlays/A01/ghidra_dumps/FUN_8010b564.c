// FUN_8010b564

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_8010b564(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  bool bVar4;
  undefined1 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  ushort in_v1;
  ushort extraout_v1;
  uint uVar11;
  int unaff_s3;
  
  iVar7 = _DAT_800e7e90;
  bVar1 = *(byte *)(param_1 + 5);
  uVar11 = (uint)bVar1;
  if (uVar11 == 1) {
    if ((short)_DAT_800e7eb6 < *(short *)(param_1 + 0x36)) {
      _DAT_1f800190 = 0x80;
      return (undefined1 *)(uint)*(ushort *)(param_1 + 0x36);
    }
    _DAT_1f800190 = 0;
    _DAT_800e7eb6 = *(ushort *)(param_1 + 0x36);
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    _DAT_800e8076 = 0x60;
    _DAT_800e8078 = 0x400;
    _DAT_800e8074 = 0x6d6;
    DAT_800e806c = bVar1;
    func_0x8006cba8(param_1 + 0x2c);
    *(ushort *)(param_1 + 0x42) = (ushort)bVar1;
    in_v1 = extraout_v1;
    goto LAB_80114724;
  }
  if (1 < uVar11) {
    if (uVar11 == 2) {
      iVar7 = (uint)*(ushort *)(param_1 + 0x36) - (*(ushort *)(param_1 + 0x60) - 200);
      sVar6 = (short)iVar7 * 8;
      *(short *)(param_1 + 0x44) = sVar6;
      if (*(short *)(param_1 + 0x36) < 21000) {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (iVar7 * 0x80000 >> 8);
      }
      iVar10 = 1;
      iVar8 = param_1;
      if (1 < *(byte *)(param_1 + 8)) {
        do {
          *(short *)(*(int *)(iVar8 + 0xc4) + 0xc) =
               *(short *)(*(int *)(iVar8 + 0xc4) + 0xc) - (*(short *)(param_1 + 0x44) >> 3);
          iVar10 = iVar10 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar10 < (int)(uint)*(byte *)(param_1 + 8));
      }
      sVar2 = *(short *)(param_1 + 0x42);
      *(short *)(param_1 + 0x42) = sVar2 + -1;
      if (sVar2 == 1) {
        func_0x80074590(0x8d,0,0);
        iVar7 = iVar7 * 0x80000;
        if (0x2000 < sVar6) {
          iVar7 = 0x20000000;
        }
        *(short *)(param_1 + 0x42) = (short)((uint)(0x3000 - (iVar7 >> 0x10)) >> 8);
      }
      _DAT_800e7eb6 = *(undefined2 *)(param_1 + 0x36);
      puVar9 = (undefined1 *)func_0x8006cba8(param_1 + 0x2c);
      return puVar9;
    }
    goto LAB_80114724;
  }
  if (uVar11 != 0) goto LAB_80114724;
  if ((short)_DAT_800e7eb6 < 0x4149) {
LAB_8010b608:
    bVar4 = false;
  }
  else {
    _DAT_800e7eb6 = 0x4149;
    bVar4 = true;
    in_v1 = 1;
    if (DAT_1f800137 != '\x01') {
      in_v1 = (ushort)DAT_800bf909;
      if (in_v1 == 0xff) {
        DAT_1f800137 = '\x02';
        unaff_s3 = (int)((((uint)*(ushort *)(_DAT_800e7f4c + 0x2c) + (uint)_DAT_800e7ee0) -
                         (uint)*(ushort *)(_DAT_800e7e90 + 0x2e)) * 0x10000) >> 0x10;
        iVar10 = (int)((((uint)*(ushort *)(_DAT_800e7f4c + 0x30) + (uint)_DAT_800e7ee2) -
                       (uint)*(ushort *)(_DAT_800e7e90 + 0x32)) * 0x10000) >> 0x10;
        uVar11 = (int)((((uint)*(ushort *)(_DAT_800e7f4c + 0x34) + (uint)_DAT_800e7ee4) -
                       (uint)*(ushort *)(_DAT_800e7e90 + 0x36)) * 0x10000) >> 0x10;
        sVar6 = func_0x80084080(unaff_s3 * unaff_s3 + iVar10 * iVar10 + uVar11 * uVar11);
        iVar8 = (int)sVar6;
        if (iVar8 < 0x33) {
          return (undefined1 *)0x1;
        }
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && (unaff_s3 << 3 == -0x80000000)) {
          trap(0x1800);
        }
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && (iVar10 << 3 == -0x80000000)) {
          trap(0x1800);
        }
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && (uVar11 << 3 == -0x80000000)) {
          trap(0x1800);
        }
        *(short *)(iVar7 + 0x2e) = *(short *)(iVar7 + 0x2e) + (short)((unaff_s3 << 3) / iVar8);
        *(short *)(iVar7 + 0x32) = *(short *)(iVar7 + 0x32) + (short)((iVar10 << 3) / iVar8);
        *(short *)(iVar7 + 0x36) = *(short *)(iVar7 + 0x36) + (short)((int)(uVar11 << 3) / iVar8);
        in_v1 = *(ushort *)(_DAT_800e7f4c + 0xc);
        param_1 = iVar7;
        goto LAB_80114724;
      }
      goto LAB_8010b608;
    }
  }
  if (!bVar4) {
    return (undefined1 *)0x0;
  }
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
LAB_80114724:
  *(ushort *)(param_1 + 0x58) = in_v1;
  if ((*(byte *)(param_1 + 3) & 0x80) == 0) {
    func_0x800518fc(param_1);
    uVar3 = *(ushort *)(param_1 + 0xb8);
    if (0xa00 < uVar3) {
      *(ushort *)(param_1 + 0xb8) = uVar3 - 0x80;
      if ((ushort)(uVar3 - 0x80) < 0xa00) {
        *(undefined2 *)(param_1 + 0xb8) = 0xa00;
      }
      *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xb8);
      *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0xb8);
    }
    return (undefined1 *)0x0;
  }
  uVar5 = func_0x800517f8();
  *(undefined1 *)(unaff_s3 + 2) = uVar5;
  uVar5 = *(undefined1 *)(uVar11 + 3);
  *(char *)(unaff_s3 + 0x47) = (char)param_1;
  *(undefined1 *)(unaff_s3 + 3) = uVar5;
  *(undefined1 *)(unaff_s3 + 0x2a) = *(undefined1 *)(uVar11 + 0x2a);
  iVar7 = func_0x8007a980();
  puVar9 = (undefined1 *)0x0;
  if (iVar7 != 0) {
    *(undefined4 *)(iVar7 + 0x1c) = 0x8012a454;
    *(undefined1 *)(iVar7 + 2) = 0x17;
    uVar5 = *(undefined1 *)(uVar11 + 3);
    *(undefined1 *)(iVar7 + 0x47) = 0;
    *(undefined1 *)(iVar7 + 3) = uVar5;
    *(undefined1 *)(iVar7 + 0x2a) = *(undefined1 *)(uVar11 + 0x2a);
    iVar8 = func_0x8007a980(1,4,0);
    puVar9 = (undefined1 *)0x0;
    if (iVar8 != 0) {
      *(undefined4 *)(iVar8 + 0x1c) = 0x8012a454;
      *(undefined1 *)(iVar8 + 2) = 0x17;
      uVar5 = *(undefined1 *)(uVar11 + 3);
      *(char *)(iVar8 + 0x47) = (char)param_1;
      *(undefined1 *)(iVar8 + 3) = uVar5;
      *(undefined1 *)(iVar8 + 0x2a) = *(undefined1 *)(uVar11 + 0x2a);
      if ((*(char *)(uVar11 + 3) == '\0') || (*(char *)(uVar11 + 3) == '\x04')) {
        puVar9 = (undefined1 *)FUN_8012674c(1,4,0);
        return puVar9;
      }
      iVar10 = func_0x8007a980(1,3,1);
      puVar9 = &DAT_80130000;
      if (iVar10 != 0) {
        *(undefined4 *)(iVar10 + 0x1c) = 0x8012a454;
        *(undefined1 *)(iVar10 + 2) = 0x17;
        uVar5 = *(undefined1 *)(uVar11 + 3);
        *(undefined1 *)(iVar10 + 0x47) = 2;
        *(undefined1 *)(iVar10 + 3) = uVar5;
        puVar9 = (undefined1 *)(uint)*(byte *)(uVar11 + 0x2a);
        *(byte *)(iVar10 + 0x2a) = *(byte *)(uVar11 + 0x2a);
        *(int *)(uVar11 + 0x10) = unaff_s3;
        *(uint *)(unaff_s3 + 0x10) = uVar11;
        *(int *)(uVar11 + 0x14) = iVar7;
        *(int *)(unaff_s3 + 0x14) = iVar8;
        *(uint *)(iVar7 + 0x10) = uVar11;
        *(int *)(iVar8 + 0x10) = unaff_s3;
        *(int *)(iVar10 + 0x10) = iVar8;
        *(int *)(iVar10 + 0x14) = iVar7;
        *(int *)(iVar10 + 0x3c) = unaff_s3;
        *(int *)(iVar7 + 0x14) = iVar8;
        *(int *)(iVar7 + 0x3c) = iVar10;
        *(int *)(iVar8 + 0x14) = iVar7;
        *(int *)(iVar8 + 0x3c) = iVar10;
      }
    }
  }
  return puVar9;
}

