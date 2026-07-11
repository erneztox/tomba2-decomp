// FUN_80105cbc

undefined4 FUN_80105cbc(int param_1,int param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  
  iVar8 = func_0x80083e80((int)*(short *)(param_3 + 0xc));
  iVar9 = func_0x80083f50((int)*(short *)(param_2 + 0x56));
  iVar15 = (int)(short)(iVar8 * 0x6e >> 0xc);
  iVar8 = func_0x80083e80((int)*(short *)(param_2 + 0x56));
  iVar14 = (uint)*(ushort *)(param_3 + 0x2c) - (iVar9 * iVar15 >> 0xc);
  iVar12 = (uint)*(ushort *)(param_1 + 0x2e) - iVar14;
  iVar9 = iVar12 * 0x10000 >> 0x10;
  iVar13 = (uint)*(ushort *)(param_3 + 0x34) + (iVar8 * iVar15 >> 0xc);
  iVar15 = (uint)*(ushort *)(param_1 + 0x36) - iVar13;
  iVar8 = iVar15 * 0x10000 >> 0x10;
  uVar5 = func_0x80084080(iVar9 * iVar9 + iVar8 * iVar8);
  if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) < (int)(uint)uVar5) {
    return 0;
  }
  puVar16 = (undefined1 *)0x0;
  if ((*(char *)(param_1 + 5) != '\x0f') &&
     (puVar16 = (undefined1 *)0x24, -1 < *(short *)(param_1 + 0x17e))) {
    puVar16 = &DAT_00000048;
  }
  iVar8 = func_0x80083f50((int)*(short *)(param_3 + 0xc));
  iVar8 = (uint)*(ushort *)(param_3 + 0x30) + (iVar8 * 0x6e >> 0xc);
  iVar9 = (uint)*(ushort *)(param_1 + 0x32) - iVar8;
  uVar2 = *(ushort *)(param_2 + 0x86);
  if ((int)*(short *)(param_1 + 0x86) + (int)puVar16 * -2 + (int)*(short *)(param_2 + 0x86) <
      (int)(iVar9 + (uint)*(ushort *)(param_2 + 0x84) +
                    ((uint)*(ushort *)(param_1 + 0x84) - (int)puVar16) & 0xffff)) {
    uVar10 = 0;
  }
  else {
    iVar11 = (uint)uVar2 - (uint)*(ushort *)(param_2 + 0x84);
    if (iVar9 * 0x10000 < 0) {
      puVar16[0xd] = 0;
      iVar8 = *(int *)(puVar16 + 0x10);
      *(undefined4 *)(puVar16 + 0x3c) = *(undefined4 *)(iVar11 + -0x3080);
      func_0x80077b38((uint)uVar2,(int)puVar16 * 2,1);
      *(undefined4 *)(puVar16 + 0x2c) = 0x13d20000;
      *(undefined4 *)(puVar16 + 0x30) = 0xf7e00000;
      *(undefined4 *)(puVar16 + 0x34) = 0x15aa0000;
      *(undefined2 *)(puVar16 + 0x80) = 0x3c;
      *(undefined2 *)(puVar16 + 0x82) = 0x78;
      *(undefined2 *)(puVar16 + 0x84) = 0x50;
      *(undefined2 *)(puVar16 + 0x86) = 0xa0;
      *puVar16 = 4;
      *(undefined2 *)(iVar8 + 6) = *(undefined2 *)(puVar16 + 0x2e);
      *(short *)(iVar8 + 8) = *(short *)(puVar16 + 0x32) + -0x1a4;
      uVar3 = *(undefined2 *)(puVar16 + 0x36);
      *(undefined2 *)(iVar8 + 0x16) = 0x1e;
      *(undefined2 *)(iVar8 + 10) = uVar3;
      puVar16[4] = puVar16[4] + '\x01';
      uVar10 = func_0x8004b354(puVar16,0);
      return uVar10;
    }
    iVar9 = (iVar11 + ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84))) -
            (int)puVar16;
    sVar6 = func_0x80085690(-(int)(short)iVar15,(int)(short)iVar12);
    if ((int)(short)uVar5 <=
        (int)*(short *)(param_2 + 0x80) + (int)*(short *)(param_1 + 0x80) + -0x14) {
      sVar7 = (short)iVar8;
      sVar1 = (short)iVar9;
      if (iVar9 * 0x10000 < 1) {
        uVar10 = 0;
        if ((*(byte *)(param_1 + 0x145) & 1) == 0) {
          func_0x80022c78(param_1);
          if (*(char *)(param_1 + 0x78) == '\0') {
            iVar8 = func_0x80077768((int)sVar6,(int)*(short *)(param_2 + 0x56),0);
            uVar4 = 3;
            if (iVar8 == 0) {
              uVar4 = 2;
            }
            *(undefined1 *)(param_1 + 0x16a) = uVar4;
            func_0x80054e24(param_1,0,0);
            if (*(char *)(param_2 + 2) == '\x04') {
              *(undefined1 *)(param_2 + 0x46) = 0x1e;
            }
            sVar7 = sVar7 + sVar1;
            if (*(char *)(param_1 + 5) != '\x0f') {
              uVar10 = FUN_8010efc4();
              return uVar10;
            }
          }
          else {
            sVar7 = (sVar7 + sVar1) - (short)puVar16;
          }
          *(short *)(param_1 + 0x32) = sVar7;
          return 2;
        }
      }
      else {
        *(short *)(param_1 + 0x32) = sVar7 + sVar1;
        DAT_1f800253 = 4;
        uVar10 = 3;
        if ((*(char *)(param_1 + 0x145) == '\x01') && (uVar10 = 3, *(short *)(param_1 + 0x4a) < 0))
        {
          *(undefined2 *)(param_1 + 0x4a) = 0;
        }
      }
      return uVar10;
    }
    iVar8 = func_0x80077768((int)sVar6,(int)*(short *)(param_2 + 0x56),0);
    if (iVar8 != 0) {
      func_0x80083f50(*(short *)(param_2 + 0x56) + 0x800);
      uVar10 = FUN_8010eec0(*(short *)(param_2 + 0x56) + 0x800);
      return uVar10;
    }
    iVar8 = func_0x80083f50((int)*(short *)(param_2 + 0x56));
    sVar6 = *(short *)(param_1 + 0x80);
    sVar7 = *(short *)(param_2 + 0x80);
    iVar9 = func_0x80083e80((int)*(short *)(param_2 + 0x56));
    sVar1 = *(short *)(param_2 + 0x80);
    *(short *)(param_1 + 0x2e) =
         (short)iVar14 + (short)((uint)(iVar8 * ((int)sVar6 + (int)sVar7)) >> 0xc);
    uVar10 = 1;
    *(short *)(param_1 + 0x36) =
         (short)iVar13 -
         (short)((uint)(iVar9 * ((int)*(short *)(param_1 + 0x80) + (int)sVar1)) >> 0xc);
    *(undefined2 *)(param_1 + 0x44) = 0;
  }
  return uVar10;
}

