// FUN_8010f2a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8010f2a4(undefined1 *param_1,undefined1 *param_2,short param_3,short param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_v1;
  undefined1 *puVar6;
  int unaff_s0;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[3];
    if (bVar1 == 1) {
      if (param_1[0x5e] == '\0') {
        if (param_1[5] == '\0') {
          param_1[5] = 1;
          *param_1 = 1;
          uVar3 = FUN_80118830();
          return uVar3;
        }
        if (param_1[5] != '\x01') {
          uVar3 = FUN_80118830();
          return uVar3;
        }
      }
      else {
        if (param_1[0x5e] != '\x01') {
          uVar3 = FUN_80118830();
          return uVar3;
        }
        if (param_1[5] == '\0') {
          param_1[5] = 1;
          param_1[0x47] = 1;
          *(undefined2 *)(param_1 + 0x60) = 0;
          *(undefined2 *)(param_1 + 0x62) = 0;
          *(undefined2 *)(param_1 + 100) = 0;
          param_1[8] = 0xf0;
          uVar3 = FUN_80118830();
          return uVar3;
        }
        if (param_1[5] != '\x01') {
          uVar3 = FUN_80118830();
          return uVar3;
        }
        if (DAT_800bfaf9 == '\0') goto LAB_8010f7b8;
        func_0x8004bd64(param_1,1,_DAT_800e7f5c,0,param_1 + 0x60);
      }
      func_0x8007778c(param_1);
      func_0x80077b5c(param_1);
      uVar3 = FUN_80118830();
      return uVar3;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        uVar3 = FUN_80118830();
        return uVar3;
      }
      uVar7 = *(uint *)(param_1 + 0x10);
      if (param_1[5] == '\0') {
        param_1[5] = 1;
        *(undefined2 *)(param_1 + 0x60) = 0xffc4;
        *(undefined2 *)(param_1 + 0x62) = 0;
        *(undefined2 *)(param_1 + 100) = 0;
      }
      else if (param_1[5] != '\x01') {
        uVar3 = FUN_80118830();
        return uVar3;
      }
      uVar3 = 0;
      if (*(char *)(uVar7 + 0x3f) != '\0') {
        param_1[1] = 1;
        func_0x80077efc(param_1);
        uVar3 = (uint)*(short *)(uVar7 + 0x16);
        if (uVar3 == 2) {
          *param_1 = (char)*(short *)(uVar7 + 0x16);
          uVar3 = FUN_8011851c();
          return uVar3;
        }
        *param_1 = 1;
        param_2 = param_1 + 0x60;
LAB_80118690:
        if ((unaff_s4 & 1) != 0) {
          param_3 = param_4 + -200;
        }
        iVar10 = (int)(((int)param_2 - (uint)*(ushort *)(unaff_s3 + 0x2e)) * 0x10000) >> 0x10;
        iVar9 = (int)param_3;
        iVar8 = (int)((uVar7 - uVar3) * 0x10000) >> 0x10;
        iVar4 = func_0x80084080(iVar10 * iVar10 + iVar9 * iVar9 + iVar8 * iVar8);
        if ((unaff_s4 & 2) != 0) {
          if (iVar4 == 0) {
            trap(0x1c00);
          }
          if ((iVar4 == -1) && (iVar10 << 8 == -0x80000000)) {
            trap(0x1800);
          }
          if (iVar4 == 0) {
            trap(0x1c00);
          }
          if ((iVar4 == -1) && (iVar9 << 8 == -0x80000000)) {
            trap(0x1800);
          }
          if (iVar4 == 0) {
            trap(0x1c00);
          }
          if ((iVar4 == -1) && (iVar8 << 8 == -0x80000000)) {
            trap(0x1800);
          }
          *(short *)(unaff_s3 + 0x48) = (short)((iVar10 << 8) / iVar4);
          *(short *)(unaff_s3 + 0x4a) = (short)((iVar9 << 8) / iVar4);
          *(short *)(unaff_s3 + 0x4c) = (short)((iVar8 << 8) / iVar4);
        }
        return (uint)(iVar4 < unaff_s5);
      }
    }
    else if (bVar1 == 2) {
      unaff_s3 = *(int *)(param_1 + 0x10);
      if (param_1[5] == '\0') {
        *(undefined2 *)(param_1 + 100) = 0x36;
        param_1[5] = 1;
        *(undefined2 *)(param_1 + 0x66) = 0x50;
        *(undefined2 *)(param_1 + 0x68) = 0;
        func_0x8004b354(param_1,0);
        uVar3 = FUN_80118830();
        return uVar3;
      }
      if (param_1[5] != '\x01') {
        uVar3 = FUN_80118830();
        return uVar3;
      }
      uVar3 = 0;
      if (*(char *)(unaff_s3 + 0x3f) != '\0') {
        param_1[1] = 1;
        func_0x80077efc(param_1);
        if (*(short *)(unaff_s3 + 0x16) != 2) {
          *param_1 = 1;
          func_0x80051d90(*(undefined4 *)(param_1 + 0x10),param_1 + 100,&DAT_1f8000c0);
          *(undefined2 *)(param_1 + 0x2e) = _DAT_1f8000c0;
          *(undefined2 *)(param_1 + 0x32) = _DAT_1f8000c2;
          *(undefined2 *)(param_1 + 0x36) = _DAT_1f8000c4;
          func_0x8004b374(param_1,0);
          uVar3 = FUN_80118830();
          return uVar3;
        }
        *param_1 = 2;
        uVar7 = (uint)*(ushort *)(extraout_v1 + 2);
        uVar3 = (uint)*(ushort *)(unaff_s3 + 0x36);
        param_3 = param_3 + -2;
        param_4 = param_3;
        goto LAB_80118690;
      }
    }
    else {
      if (bVar1 != 3) {
        uVar3 = FUN_80118830();
        return uVar3;
      }
      iVar4 = func_0x8007778c(param_1);
      uVar3 = 0;
      if (iVar4 != 0) {
        func_0x8004b374(param_1,0);
        uVar3 = FUN_80118830();
        return uVar3;
      }
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        uVar3 = FUN_80118830();
        return uVar3;
      }
      bVar1 = param_1[3];
      if (bVar1 == 1) {
        param_1[0xb] = 0x10;
        param_1[0x47] = 0;
        *(undefined2 *)(param_1 + 0x5a) = 0;
        *(undefined2 *)(param_1 + 0x5c) = 0;
        param_1[0xd] = 0;
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
        func_0x80077b38(param_1,0x8014c808,0);
        *(undefined2 *)(param_1 + 0x2e) = 0x436c;
        *(undefined2 *)(param_1 + 0x32) = 0xf894;
        *(undefined2 *)(param_1 + 0x36) = 0x2bc0;
        uVar3 = FUN_801183d0();
        return uVar3;
      }
      cVar2 = '\x02';
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          param_1[0xb] = 0x10;
          param_1[0x47] = 0;
          *(undefined2 *)(param_1 + 0x5a) = 0;
          *(undefined2 *)(param_1 + 0x5c) = 0;
          param_1[0xd] = 0;
          *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
          func_0x80077b38(param_1,0x8014c808,0xf);
          *(undefined2 *)(param_1 + 0x80) = 0x14;
          *(undefined2 *)(param_1 + 0x82) = 0x28;
          *(undefined2 *)(param_1 + 0x84) = 0x14;
          cVar2 = DAT_1f800137;
        }
      }
      else {
        cVar2 = '\x03';
        if (bVar1 == 2) {
          param_1[0xb] = 0x12;
          *(undefined2 *)(param_1 + 0x56) = 0xfe80;
          *(undefined2 *)(param_1 + 0x58) = 0x700;
          param_1[0x47] = 0;
          *(undefined2 *)(param_1 + 0x54) = 0;
          *(undefined2 *)(param_1 + 0x5c) = 0;
          param_1[0xd] = 0;
          *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf58;
          puVar6 = param_1;
          func_0x80077b38(param_1,0x80017334,2);
          *(undefined2 *)(param_1 + 0x80) = 0x1e;
          *(undefined2 *)(param_1 + 0x82) = 0x28;
          *(undefined2 *)(param_1 + 0x84) = 0x10;
          cVar2 = ' ';
          *(undefined2 *)(param_1 + 0x86) = 0x20;
          param_1 = puVar6;
        }
        else if (bVar1 == 3) {
          param_1[0xb] = 0x10;
          param_1[0x47] = 0;
          *(undefined2 *)(param_1 + 0x5a) = 0;
          *(undefined2 *)(param_1 + 0x5c) = 0;
          param_1[0xd] = 0;
          *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
          func_0x80077b38(param_1,0x8014c808,0x1a);
          *(undefined2 *)(param_1 + 0x80) = 0x20;
          *(undefined2 *)(param_1 + 0x82) = 0x40;
          *(undefined2 *)(param_1 + 0x84) = 0x14;
          *param_1 = 1;
          *(undefined2 *)(param_1 + 0x86) = 0x28;
          func_0x8004b354(param_1,0);
          param_1[4] = param_1[4] + '\x01';
          uVar3 = FUN_80118830();
          return uVar3;
        }
      }
      uVar3 = 0x1f800000;
      if (((cVar2 == '\0') && (uVar3 = 0x1401, (ushort)(_DAT_1f800162 + 0x9c3U) < 0x3e9)) &&
         (*(short *)(param_1 + 4) == 0x1401)) {
        uVar5 = func_0x8007e038(0x66,2);
        *(undefined4 *)(unaff_s0 + 0x28) = uVar5;
        *(undefined4 *)(unaff_s0 + 0x2c) = 0x46;
        uVar3 = FUN_8012149c();
        return uVar3;
      }
      return uVar3;
    }
    if (bVar1 == 2) {
      bVar1 = param_1[3];
      if (bVar1 == 1) {
        func_0x8004d4c4(0x45,1);
        func_0x8004b0d8(param_1);
        param_1[4] = 3;
        DAT_800bf9df = DAT_800bf9df | 0x20;
        uVar3 = FUN_80118830();
        return uVar3;
      }
      if (1 < bVar1) {
        if (bVar1 == 2) {
          param_1[4] = 3;
          func_0x8004d4c4(0x78,1);
          func_0x8004b0d8(param_1);
          DAT_800bf9ea = DAT_800bf9ea & ~(byte)(1 << ((int)*(short *)(param_1 + 0x60) & 0x1fU)) &
                         ~(byte)(1 << ((int)*(short *)(param_1 + 0x60) + 4U & 0x1f));
          func_0x80040c00(0x4e);
          uVar3 = FUN_80118830();
          return uVar3;
        }
        if (bVar1 == 3) {
          func_0x8004d4c4(0x53,1);
          func_0x8004b0d8(param_1);
          param_1[4] = 3;
          DAT_800bf9ee = DAT_800bf9ee | 2;
          uVar3 = FUN_80118830();
          return uVar3;
        }
        uVar3 = FUN_80118830();
        return uVar3;
      }
      if (bVar1 != 0) {
        uVar3 = FUN_80118830();
        return uVar3;
      }
      iVar4 = func_0x80040b48(5);
      if (-1 < iVar4) {
        func_0x8004d4c4(0x24,1);
        func_0x8004b0d8(param_1);
      }
LAB_8010f7b8:
      param_1[4] = 3;
      uVar3 = FUN_80118830();
      return uVar3;
    }
    if (bVar1 != 3) {
      uVar3 = FUN_80118830();
      return uVar3;
    }
    uVar3 = func_0x8007a624(param_1);
  }
  return uVar3;
}

