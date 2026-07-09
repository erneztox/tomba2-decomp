// FUN_80108b98

/* WARNING: Removing unreachable block (ram,0x80123e44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80108b98(byte *param_1,int param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int extraout_v1;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  iVar9 = 3;
  iVar10 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  uVar11 = 2;
  if ((param_1[0x16b] & 1) != 0) {
    if (param_1[0x16b] == 3) {
      func_0x80083f50((int)*(short *)(param_3 + 10));
      uVar11 = FUN_80111bdc();
      return uVar11;
    }
    iVar4 = func_0x80083f50((int)*(short *)(param_3 + 10));
    sVar3 = (short)((uint)(iVar4 * 0x91) >> 10);
    iVar4 = iVar10 * 0x10000 >> 0x10;
    if (iVar4 < 0) {
      sVar3 = -sVar3;
      iVar9 = 2;
    }
    iVar5 = func_0x80083f50((int)*(short *)(param_3 + 8));
    iVar5 = iVar5 * sVar3 >> 0xc;
    sVar3 = (short)iVar5;
    if (iVar4 < 0) {
      if (iVar4 < sVar3) {
        uVar11 = 0;
        *(short *)(param_1 + 0x36) = *(short *)(param_3 + 0x34) + sVar3;
        iVar10 = iVar5;
      }
    }
    else if (sVar3 < iVar4) {
      uVar11 = FUN_80111c5c();
      return uVar11;
    }
  }
  iVar4 = func_0x80083e80((int)*(short *)(param_3 + 10));
  uVar8 = (uint)(short)iVar10;
  iVar5 = func_0x80083e80((int)*(short *)(param_3 + 8));
  *(short *)(param_1 + 0x2e) = *(short *)(param_3 + 0x2c) + (short)((int)(iVar4 * uVar8) >> 0xc);
  if (param_1[0x16b] != 3) {
    iVar9 = ((uint)*(ushort *)(param_3 + 0x30) - ((int)(iVar5 * uVar8) >> 0xc)) -
            (*(ushort *)(param_1 + 0x62) + 100);
    uVar6 = iVar9 * 0x10000 >> 0x10;
    if (((int)uVar6 <= (int)*(short *)(param_1 + 0x32)) && (uVar6 = 0, (param_1[0x145] & 1) == 0)) {
      if (param_1[0x16b] == 1) {
        DAT_800bf840 = 0x46;
      }
      *(short *)(param_1 + 0x32) = (short)iVar9;
      func_0x80022c78(param_1);
      uVar2 = *(ushort *)(param_3 + 8);
      uVar6 = (uint)uVar2;
      if (0x800 < (uVar6 & 0xfff)) {
        *(ushort *)(param_1 + 0x142) = uVar2 - 0x1000;
        do {
          if (((int)(uint)param_1[0x5f] >> (uVar8 & 0x1f) & 1U) != 0) {
            iVar10 = FUN_8011c610(param_1,uVar8 + 4);
            if (iVar10 != 0) {
              *(byte *)(iVar10 + 0x28) = *(byte *)(iVar10 + 0x28) | 0x80;
              *(byte *)(uVar6 - 0x161d) =
                   *(byte *)(uVar6 - 0x161d) | (byte)(1 << (uVar8 + 4 & 0x1f));
              param_1[0x5f] = param_1[0x5f] - (char)(1 << (uVar8 & 0x1f));
              func_0x8004d604(0x2a,1);
              param_1[0x96] = 1;
              param_1[0x97] = 0;
              uVar7 = *(undefined4 *)(extraout_v1 + 0xc0);
              *(undefined1 *)(uVar6 - 0x178f) = 1;
              uVar11 = FUN_8012ce0c(uVar7);
              return uVar11;
            }
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < 3);
        return 0;
      }
      *(ushort *)(param_1 + 0x142) = uVar2;
      *(undefined1 *)(param_2 + 0x29) = 4;
      uVar6 = -iVar10;
      bVar1 = DAT_1f800137 == '\0';
      *(short *)(param_2 + 0x44) = (short)uVar6;
      if ((((bVar1) && (uVar6 = 1, param_1[0x16b] == 1)) &&
          (uVar6 = (uint)param_1[0x78], uVar6 == 0)) &&
         ((uVar6 = 0x14, param_1[0x46] != 0x14 && (uVar6 = (uint)param_1[0x147], uVar11 == uVar6))))
      {
        _DAT_1f800196 = *(undefined2 *)(param_1 + 0x140);
        param_1[0x61] = 0x41;
        uVar6 = 0xe;
        param_1[4] = 1;
        param_1[5] = 0xe;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[0x146] = 0;
        *param_1 = *param_1 | 4;
      }
    }
    return uVar6;
  }
  uVar11 = FUN_80111ce4((uint)*(ushort *)(param_2 + 0x84),
                        ((uint)*(ushort *)(*(int *)(param_2 + iVar9 * 4 + 0xc0) + 0x30) -
                        (uint)*(ushort *)(param_1 + 0x62)) - (uint)*(ushort *)(param_2 + 0x84));
  return uVar11;
}

