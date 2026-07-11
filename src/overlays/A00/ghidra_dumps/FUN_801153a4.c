// FUN_801153a4

/* WARNING: Removing unreachable block (ram,0x8012778c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_801153a4(undefined1 *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  int unaff_s0;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    FUN_80120498(param_1,2);
    uVar8 = *(short *)(param_1 + 0x42) - 1;
    *(ushort *)(param_1 + 0x42) = uVar8;
    iVar7 = (uint)uVar8 << 0x10;
    *(short *)(param_1 + 0x40) =
         *(short *)(param_1 + 0x40) - (short)(char)((ushort)*(undefined2 *)(param_1 + 0x44) >> 8);
    if ((uVar8 == 0) && (iVar7 = 0x95, param_1[1] != '\0')) {
      uVar6 = func_0x80074590(0x95,0,0);
      return uVar6;
    }
    bVar1 = param_1[7];
    if (bVar1 == 1) {
      sVar5 = FUN_80121518(param_1);
      uVar6 = 0;
      if (sVar5 != 0) {
        iVar7 = func_0x80072ddc(param_1,0,2,0x14);
        if (iVar7 == 0) {
          DAT_00000005 = 0;
          uRam00000006 = 0;
          _DAT_00000076 = 0;
          _DAT_00000048 = 0;
          _DAT_0000004e = 0;
          iVar7 = FUN_801308e0(0);
          uVar6 = 0;
          if (iVar7 != 0) {
            uVar6 = (uint)uRam00000070;
            *(ushort *)(_DAT_000000c4 + 10) = uRam00000070;
          }
          return uVar6;
        }
        func_0x8004d604(0x54,1);
        *(undefined **)(iVar7 + 0x1c) = &DAT_80126264;
        *(undefined1 *)(iVar7 + 3) = 5;
        *(undefined2 *)(iVar7 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0x1e;
        return 1;
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) {
        uVar6 = FUN_8011e7b0(iVar7);
        return uVar6;
      }
      uVar6 = 0;
      if ((int)*(short *)(param_1 + 0x40) <
          ((int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x18) * 0x14) {
        uVar4 = FUN_8011fd94(param_1,0);
        *(undefined2 *)(param_1 + 0x66) = uVar4;
        uVar4 = FUN_801214ac(param_1,2);
        *(undefined2 *)(param_1 + 0x50) = uVar4;
        *(undefined2 *)(param_1 + 0x44) = 0x1000;
        param_1[0x2a] = 0x11;
        param_1[7] = param_1[7] + '\x01';
        uVar6 = FUN_8011e7b0();
        return uVar6;
      }
    }
    else {
      if (bVar1 != 2) {
        uVar6 = FUN_8011e7b0(iVar7);
        return uVar6;
      }
      func_0x80076d68(param_1);
      func_0x80076d68(param_1);
      uVar6 = (uint)*(short *)(param_1 + 0x40);
      if ((int)uVar6 < 0) {
        iVar7 = *(int *)((uint)(byte)param_1[3] * 4 + -0x7feb6ba0);
        *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar7 + 6);
        *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar7 + 8);
        uVar4 = *(undefined2 *)(iVar7 + 10);
        param_1[5] = 1;
        param_1[6] = 0;
        *(undefined2 *)(param_1 + 0x36) = uVar4;
        uVar6 = FUN_8011e7b0();
        return uVar6;
      }
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        uVar6 = FUN_8011e7b0();
        return uVar6;
      }
      if (param_1[7] == '\0') {
        *(undefined2 *)(param_1 + 0x44) = 0x2000;
        param_1[7] = 0;
        param_1[6] = param_1[6] + '\x01';
        uVar6 = FUN_8011e448();
        return uVar6;
      }
      if (param_1[7] == '\x01') {
        puVar9 = *(ushort **)((uint)(byte)param_1[3] * 4 + -0x7feb6ba0);
        uVar8 = *puVar9;
        uVar2 = puVar9[1];
        uVar3 = puVar9[2];
        param_1[6] = 2;
        *(undefined2 *)(param_1 + 0x44) = 0x1000;
        iVar12 = (int)(((uint)uVar8 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10;
        iVar11 = (int)(((uint)uVar2 - (uint)*(ushort *)(param_1 + 0x32)) * 0x10000) >> 0x10;
        iVar10 = (int)(((uint)uVar3 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10;
        iVar7 = func_0x80084080(iVar12 * iVar12 + iVar11 * iVar11 + iVar10 * iVar10);
        if (iVar7 == 0) {
          trap(0x1c00);
        }
        if ((iVar7 == -1) && (iVar12 << 8 == -0x80000000)) {
          trap(0x1800);
        }
        if (iVar7 == 0) {
          trap(0x1c00);
        }
        if ((iVar7 == -1) && (iVar11 << 8 == -0x80000000)) {
          trap(0x1800);
        }
        if (iVar7 == 0) {
          trap(0x1c00);
        }
        if ((iVar7 == -1) && (iVar10 << 8 == -0x80000000)) {
          trap(0x1800);
        }
        *(short *)(param_1 + 0x40) = (short)iVar7;
        *(short *)(param_1 + 0x48) = (short)((iVar12 << 8) / iVar7);
        *(short *)(param_1 + 0x4a) = (short)((iVar11 << 8) / iVar7);
        *(short *)(param_1 + 0x4c) = (short)((iVar10 << 8) / iVar7);
        uVar6 = func_0x8009a450();
        return uVar6;
      }
      _DAT_00000061 = 0;
      *(undefined1 *)(param_2 + 0x3e) = 1;
      FUN_80131768(1,(int)*(short *)(unaff_s0 + 0x6c),0);
      *(undefined1 *)(unaff_s0 + 5) = 0;
      *(undefined1 *)(unaff_s0 + 6) = 0;
      *(undefined1 *)(unaff_s0 + 0x5e) = 0;
      uVar6 = FUN_801303f8();
      return uVar6;
    }
    if (bVar1 != 2) {
      uVar6 = FUN_8011e7b0();
      return uVar6;
    }
    FUN_80120498(param_1,2);
    uVar8 = *(short *)(param_1 + 0x42) - 1;
    *(ushort *)(param_1 + 0x42) = uVar8;
    iVar7 = (uint)uVar8 << 0x10;
    *(short *)(param_1 + 0x40) =
         *(short *)(param_1 + 0x40) - (short)(char)((ushort)*(undefined2 *)(param_1 + 0x44) >> 8);
    if ((uVar8 == 0) && (iVar7 = 0x95, param_1[1] != '\0')) {
      uVar6 = func_0x80074590(0x95,0,0);
      return uVar6;
    }
    if (*(short *)(param_1 + 0x40) < 0) {
      param_1[4] = 3;
      uVar6 = FUN_8011e7b0(iVar7);
      return uVar6;
    }
    if (*(short *)(param_1 + 0x42) != 0) {
      func_0x80076d68(param_1);
      func_0x80076d68(param_1);
    }
    sVar5 = FUN_80121518(param_1);
    uVar6 = 0;
    if (sVar5 != 0) {
      *param_1 = 2;
      *(undefined2 *)(param_1 + 0x44) = 0x2000;
      func_0x80077cfc(param_1,0x8014e1a4,1,8);
      uVar6 = *(ushort *)(param_1 + 0x66) & 0xfff;
      *(short *)(param_1 + 0x66) = (short)uVar6;
      *(short *)(param_1 + 0x56) = (short)uVar6;
      param_1[7] = param_1[7] + '\x01';
    }
  }
  return uVar6;
}

