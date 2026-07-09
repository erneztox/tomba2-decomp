// FUN_801091ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_801091ec(byte *param_1,int param_2,int param_3)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  undefined1 uVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  byte bVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar16 = 0;
  if (*(char *)(param_2 + 3) == '\x05') {
    iVar16 = -0x46;
  }
  puVar14 = (undefined1 *)
            ((uint)*(ushort *)(param_1 + 0x2e) - ((uint)*(ushort *)(param_3 + 0x2c) + iVar16));
  iVar9 = (int)puVar14 * 0x10000 >> 0x10;
  iVar13 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  iVar10 = iVar13 * 0x10000 >> 0x10;
  uVar6 = func_0x80084080(iVar9 * iVar9 + iVar10 * iVar10);
  local_30 = CONCAT22(local_30._2_2_,uVar6);
  if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) < (int)(uint)uVar6) {
    return 0;
  }
  iVar9 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
  if ((int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
      (int)(iVar9 + (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff))
  {
    uVar4 = 0;
LAB_801125bc:
    puVar14[6] = uVar4;
    *(undefined2 *)(puVar14 + 0x4c) = 0x200;
    iVar16 = -8;
    *(undefined2 *)(puVar14 + 0x52) = 0xfff8;
  }
  else {
    if (iVar9 * 0x10000 < 0) {
      uVar11 = FUN_801122b8();
      return uVar11;
    }
    sVar7 = (*(short *)(param_2 + 0x86) - *(ushort *)(param_2 + 0x84)) +
            (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84));
    _DAT_1f80009c = func_0x80085690(-(int)(short)iVar13,(int)(short)puVar14);
    iVar10 = ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) -
             (int)(short)local_30;
    if (((int)sVar7 - (int)(short)iVar9 <= iVar10) && (2 < iVar10)) {
      if ((param_1[0x145] & 1) != 0) {
        return 0;
      }
      param_1[0x29] = 1;
      *(int *)(param_1 + 0x30) = (*(int *)(param_3 + 0x30) + (int)sVar7) * 0x10000;
      uVar8 = *(undefined2 *)(param_1 + 0x44);
      *(undefined1 *)(param_2 + 0x29) = 1;
      *(undefined2 *)(param_2 + 0x44) = uVar8;
      if ((((*(short *)(param_2 + 0x62) != 0) && ((*param_1 & 4) == 0)) && (param_1[0x145] == 2)) &&
         (param_1[4] < 2)) {
        iVar16 = func_0x80055844();
        if (iVar16 != 0) {
          param_1[0x145] = 0;
          *(undefined1 *)(param_2 + 0x5e) = 2;
          param_1[0x148] = 0;
          param_1[0x50] = 0;
          param_1[0x51] = 0;
          param_1[5] = 0x17;
          uVar11 = FUN_801125a0();
          return uVar11;
        }
        if ((param_1[5] != 0x17) || (0x2c00 < *(short *)(param_1 + 0x4a))) {
          param_1[0x145] = 0;
          *(undefined1 *)(param_2 + 0x5e) = 1;
          param_1[0x148] = 0;
          param_1[0x50] = 0;
          param_1[0x51] = 0;
          param_1[5] = 0x17;
          param_1[6] = 0;
          param_1[7] = 0;
          uVar11 = FUN_801125b8();
          return uVar11;
        }
      }
      func_0x80022c78(param_1);
      *(undefined1 *)(param_2 + 0x5e) = 0;
      return 2;
    }
    iVar9 = func_0x80083f50();
    sVar7 = *(short *)(param_1 + 0x80);
    sVar2 = *(short *)(param_2 + 0x80);
    iVar10 = func_0x80083e80(_DAT_1f80009c);
    sVar3 = *(short *)(param_2 + 0x80);
    puVar14 = (undefined1 *)
              ((iVar9 * ((int)sVar7 + (int)sVar2) >> 0xc) +
              (uint)*(ushort *)(param_3 + 0x2c) + iVar16);
    *(short *)(param_1 + 0x2e) = (short)puVar14;
    sVar7 = *(short *)(param_3 + 0x34);
    param_1[0x60] = 1;
    iVar16 = (int)_DAT_1f80009c;
    *(short *)(param_1 + 0x36) =
         sVar7 - (short)(iVar10 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
    cVar5 = func_0x80077768(iVar16,(int)*(short *)(param_1 + 0x140));
    param_1[0x5f] = cVar5 + 2;
    iVar16 = func_0x80077768((int)*(short *)(param_1 + 0x56),(int)_DAT_1f80009c,0);
    if (iVar16 == 0) {
LAB_8010951c:
      uVar4 = 1;
      goto LAB_801125bc;
    }
    iVar16 = (int)_DAT_1f80009c >> 4;
    if (*(char *)(param_2 + 0x5f) != '\x01') {
      if (param_1[0x165] != 0) {
        if (_DAT_1f800098 != 1) {
          return 1;
        }
        puVar14 = (undefined1 *)(uint)*(ushort *)(param_1 + 0x44);
        if (*(short *)(param_1 + 0x44) < 0) {
          puVar14 = (undefined1 *)-(int)puVar14;
        }
        if ((short)puVar14 < 0x1a01) {
          return 1;
        }
        if (param_1[4] != 1) {
          return 1;
        }
        sVar7 = 0;
        if (param_1[5] != 0x13) {
          param_1[5] = 0x13;
          param_1[6] = 0;
          param_1[7] = 0;
          param_1[0x2b] = (byte)iVar16;
          _DAT_1f80009c = _DAT_1f80009c - 0x400 & 0xfff;
          if (_DAT_1f80009c < 0x800) {
            iVar16 = 8;
            goto LAB_801124b8;
          }
          *(undefined1 *)(param_2 + 0x2b) = 3;
        }
      }
      goto LAB_8010951c;
    }
    if (param_1[4] != 1) {
      return 1;
    }
    sVar7 = 0x13;
    if (param_1[5] == 0x13) {
      return 1;
    }
    param_1[5] = 0x13;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0x2b] = (byte)iVar16;
LAB_801124b8:
    *(short *)(puVar14 + 0x2e) = (short)iVar16;
    *(short *)(puVar14 + 0x36) = sVar7 + 6;
  }
  local_30 = *(undefined4 *)(&DAT_ffff9b44 + iVar16);
  uStack_2c = *(undefined4 *)(iVar16 + -0x64b8);
  if (*(char *)(*(int *)(puVar14 + 0x14) + 1) == '\0') {
    return 0;
  }
  puVar15 = (undefined1 *)(uint)(byte)puVar14[5];
  iVar16 = *(int *)(puVar14 + 0x10);
  cVar5 = puVar15 < (undefined1 *)0x2;
  if (puVar15 != (undefined1 *)0x1) {
    if (!(bool)cVar5) {
      cVar5 = '\x03';
      if (puVar15 == (undefined1 *)0x2) {
        bVar12 = puVar14[0x46] & 3;
        puVar14[5] = 3;
        if (((puVar14[0x46] & 3) == 0) || (bVar12 == 2)) {
          *(undefined2 *)(puVar14 + 0x4a) = 0xe800;
          *(undefined2 *)(puVar14 + 0x4c) = 0;
          uVar11 = FUN_801248d8();
          return uVar11;
        }
        uVar8 = 0xfc00;
        if (bVar12 == 1) {
          uVar8 = 0x400;
        }
        *(undefined2 *)(puVar14 + 0x4c) = uVar8;
        *(undefined2 *)(puVar14 + 0x4a) = 0xf000;
        *(undefined2 *)(puVar14 + 0x50) = 0x200;
      }
      else if (puVar15 != (undefined1 *)0x3) goto LAB_801249bc;
      iVar9 = func_0x8007778c(puVar14);
      if (iVar9 == 0) {
        return 0;
      }
      *(int *)(puVar14 + 0x34) = *(int *)(puVar14 + 0x34) + *(short *)(puVar14 + 0x4c) * 0x100;
      if (*(int *)(iVar16 + 0x34) + -0x40 <= (int)*(short *)(puVar14 + 0x36)) {
        if (*(int *)(iVar16 + 0x34) + 0x40 < (int)*(short *)(puVar14 + 0x36)) {
          *(short *)(puVar14 + 0x36) = *(short *)(iVar16 + 0x34) + 0x40;
        }
        *(int *)(puVar14 + 0x30) = *(int *)(puVar14 + 0x30) + *(short *)(puVar14 + 0x4a) * 0x100;
        *(short *)(puVar14 + 0x4a) = *(short *)(puVar14 + 0x4a) + *(short *)(puVar14 + 0x50);
        func_0x80077b5c(puVar14);
        if (puVar14[0x29] == '\0') {
          return 0;
        }
        puVar14[5] = 2;
        puVar14[0x47] = '\x01' - puVar14[0x47];
        puVar14[0x46] = puVar14[0x46] + '\x01';
        *(short *)(puVar14 + 0x32) = *(short *)(puVar14 + 0x32) + -8;
        uVar11 = func_0x80074590(0x8f,0,0);
        return uVar11;
      }
      uVar11 = FUN_80124940();
      return uVar11;
    }
    bVar1 = puVar15 != (undefined1 *)0x0;
    puVar15 = (undefined1 *)0x107;
    if (bVar1) goto LAB_801249bc;
    puVar14[5] = 1;
    *puVar14 = 1;
    puVar14[0xb] = 0x10;
    *(undefined2 *)(puVar14 + 0x5a) = 0;
    puVar14[0x47] = 0;
    puVar14[0x46] = puVar14[0x60] & 3;
    func_0x8003116c(0x107,puVar14 + 0x2c,0xfffffff6);
    *(short *)(puVar14 + 0x2e) =
         *(short *)(iVar16 + 0x2c) + *(short *)((int)&local_30 + *(short *)(puVar14 + 0x60) * 2);
    *(short *)(puVar14 + 0x32) = *(short *)(iVar16 + 0x30) + -0x20;
    *(undefined2 *)(puVar14 + 0x36) = *(undefined2 *)(iVar16 + 0x34);
    puVar15 = puVar14;
    func_0x80077b38(puVar14,0x8014c808,4);
  }
  if (DAT_800bf9dd < 0xf) {
    if (*(int *)(iVar16 + 0x30) <= (int)*(short *)(puVar14 + 0x32)) {
      uVar11 = func_0x8009a450();
      return uVar11;
    }
    func_0x80077b5c(puVar14);
    cVar5 = func_0x8007778c();
    puVar15 = puVar14;
  }
  else {
    cVar5 = puVar14[5] + '\x01';
    puVar14[5] = cVar5;
  }
LAB_801249bc:
  puVar15[0x1a] = cVar5;
  puVar15[0x19] = cVar5;
  puVar15[0x18] = cVar5;
  puVar15[0xd] = 2;
  puVar15[6] = puVar15[6] + '\x01';
  uVar11 = FUN_8012d9e8();
  return uVar11;
}

