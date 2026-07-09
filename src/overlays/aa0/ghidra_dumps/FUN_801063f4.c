// FUN_801063f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_801063f4(uint param_1,undefined1 *param_2,uint param_3,int param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  int extraout_v1;
  undefined1 *puVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  uVar11 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
  iVar13 = (uint)*(ushort *)(param_2 + 0x80) + (uint)*(ushort *)(param_1 + 0x80);
  uVar3 = (int)*(short *)(param_2 + 0x82);
  if ((int)*(short *)(param_1 + 0x82) + (int)*(short *)(param_2 + 0x82) <
      (int)(uVar11 + iVar13 & 0xffff)) {
LAB_801065d8:
    uVar3 = FUN_8010f5e0(uVar3);
    return uVar3;
  }
  iVar2 = func_0x80083e80((int)*(short *)(param_3 + 0xc));
  iVar9 = (int)(uVar11 * 0x10000) >> 0x10;
  puVar5 = (undefined1 *)((uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84));
  iVar6 = iVar2 * iVar9 >> 0xc;
  iVar2 = (uint)*(ushort *)(param_1 + 0x32) - ((uint)*(ushort *)(param_3 + 0x30) + iVar6);
  sVar8 = (short)iVar2;
  uVar3 = (int)*(short *)(param_2 + 0x86);
  if ((int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
      (int)((uint)(puVar5 + iVar2) & 0xffff)) goto LAB_801065d8;
  uVar10 = (undefined1)uVar11;
  if (iVar9 < 0) {
    *(undefined2 *)(param_2 + 0x82) = 0x40;
    *(undefined2 *)(param_2 + 0x84) = 0x14;
    *param_2 = uVar10;
    *(undefined2 *)(param_2 + 0x86) = 0x28;
    func_0x8004b354();
    param_2[4] = param_2[4] + '\x01';
    uVar3 = FUN_80118830();
    return uVar3;
  }
  sVar1 = *(short *)(param_1 + 0x80);
  sVar4 = (*(short *)(param_2 + 0x82) - *(short *)(param_2 + 0x80)) +
          (*(short *)(param_1 + 0x82) - sVar1);
  if (iVar2 * 0x10000 < 0) {
    sVar8 = -sVar8;
    sVar7 = -(short)puVar5;
    if (param_1 == uVar11) {
      if ((byte)param_2[0x5e] == 0) {
        if ((byte)param_2[5] == 0) {
          param_2[5] = uVar10;
          *param_2 = uVar10;
          uVar3 = FUN_80118830();
          return uVar3;
        }
        if ((byte)param_2[5] != uVar11) {
          uVar3 = FUN_80118830();
          return uVar3;
        }
      }
      else {
        if ((byte)param_2[0x5e] != uVar11) {
          uVar3 = FUN_80118830();
          return uVar3;
        }
        if ((byte)param_2[5] == 0) {
          param_2[5] = uVar10;
          param_2[0x47] = uVar10;
          *(undefined2 *)(param_2 + 0x60) = 0;
          *(undefined2 *)(param_2 + 0x62) = 0;
          *(undefined2 *)(param_2 + 100) = 0;
          param_2[8] = 0xf0;
          uVar3 = FUN_80118830();
          return uVar3;
        }
        if ((byte)param_2[5] != uVar11) {
          uVar3 = FUN_80118830();
          return uVar3;
        }
        if (DAT_800bfaf9 == '\0') {
          param_2[4] = 3;
          uVar3 = FUN_80118830(sVar1,1);
          return uVar3;
        }
        func_0x8004bd64(param_2,1,_DAT_800e7f5c,0,param_2 + 0x60);
      }
      func_0x8007778c(param_2);
      func_0x80077b5c(param_2);
      uVar3 = FUN_80118830();
      return uVar3;
    }
    if (1 < (int)param_1) {
      if (param_1 != 2) {
        if (param_1 != 3) {
          uVar3 = FUN_80118830();
          return uVar3;
        }
        iVar13 = func_0x8007778c(param_2);
        if (iVar13 == 0) {
          return 0;
        }
        func_0x8004b374(param_2,0);
        uVar3 = FUN_80118830();
        return uVar3;
      }
      iVar13 = *(int *)(param_2 + 0x10);
      if ((byte)param_2[5] == 0) {
        *(undefined2 *)(param_2 + 100) = 0x36;
        param_2[5] = uVar10;
        *(undefined2 *)(param_2 + 0x66) = 0x50;
        *(undefined2 *)(param_2 + 0x68) = 0;
        func_0x8004b354(param_2,0);
        uVar3 = FUN_80118830();
        return uVar3;
      }
      if ((byte)param_2[5] != uVar11) {
        uVar3 = FUN_80118830();
        return uVar3;
      }
      if (*(char *)(iVar13 + 0x3f) == '\0') {
        return 0;
      }
      param_2[1] = uVar10;
      func_0x80077efc(param_2);
      if (*(short *)(iVar13 + 0x16) != 2) {
        *param_2 = uVar10;
        func_0x80051d90(*(undefined4 *)(param_2 + 0x10),param_2 + 100,&DAT_1f8000c0);
        *(undefined2 *)(param_2 + 0x2e) = _DAT_1f8000c0;
        *(undefined2 *)(param_2 + 0x32) = _DAT_1f8000c2;
        *(undefined2 *)(param_2 + 0x36) = _DAT_1f8000c4;
        func_0x8004b374(param_2,0);
        uVar3 = FUN_80118830();
        return uVar3;
      }
      *param_2 = 2;
      param_1 = (uint)*(ushort *)(extraout_v1 + 2);
      uVar3 = (uint)*(ushort *)(iVar13 + 0x36);
      sVar7 = sVar7 + -2;
      sVar8 = sVar7;
      goto LAB_80118690;
    }
    if (param_1 != 0) {
      uVar3 = FUN_80118830();
      return uVar3;
    }
    param_1 = *(uint *)(param_2 + 0x10);
    if ((byte)param_2[5] == 0) {
      param_2[5] = uVar10;
      *(undefined2 *)(param_2 + 0x60) = 0xffc4;
      *(undefined2 *)(param_2 + 0x62) = 0;
      *(undefined2 *)(param_2 + 100) = 0;
    }
    else if ((byte)param_2[5] != uVar11) {
      uVar3 = FUN_80118830();
      return uVar3;
    }
    if (*(char *)(param_1 + 0x3f) == '\0') {
      return 0;
    }
    param_2[1] = 1;
    func_0x80077efc(param_2);
    uVar3 = (uint)*(short *)(param_1 + 0x16);
    if (uVar3 == 2) {
      *param_2 = (char)*(short *)(param_1 + 0x16);
      uVar3 = FUN_8011851c();
      return uVar3;
    }
    *param_2 = 1;
  }
  else {
    sVar7 = (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84)) +
            (*(short *)(param_1 + 0x86) - *(short *)(param_1 + 0x84));
    uVar3 = param_1;
    if (param_4 == 0) {
      if (sVar7 < 1) {
        if ((*(byte *)(param_1 + 0x145) & 1) == 0) {
          *(int *)(param_1 + 0x30) =
               (*(int *)(param_3 + 0x30) + (int)(short)iVar6 + (int)sVar7) * 0x10000;
          func_0x80022c78();
          uVar3 = FUN_8010f5e0();
          return uVar3;
        }
        goto LAB_801065d8;
      }
LAB_80106608:
      DAT_1f800253 = 4;
      *(int *)(param_1 + 0x30) = (*(int *)(param_3 + 0x30) + (int)sVar7) * 0x10000;
      if ((*(char *)(param_1 + 0x145) == '\x01') && (*(short *)(param_1 + 0x4a) < 0)) {
        *(undefined2 *)(param_1 + 0x4a) = 0;
      }
      return 3;
    }
    if ((int)sVar4 - (int)(short)uVar11 < (int)sVar7 - (int)sVar8) {
      *(short *)(param_1 + 0x2e) = *(short *)(param_3 + 0x2c) + sVar4;
      uVar3 = FUN_8010f5e0();
      return uVar3;
    }
    if (0 < sVar7) goto LAB_80106608;
    if ((*(byte *)(param_1 + 0x145) & 1) != 0) goto LAB_801065d8;
    uVar3 = 0;
  }
  puVar5 = param_2 + 0x60;
LAB_80118690:
  if ((param_3 & 1) != 0) {
    sVar7 = sVar8 + -200;
  }
  iVar12 = (int)(((int)puVar5 - (uint)*(ushort *)(iVar13 + 0x2e)) * 0x10000) >> 0x10;
  iVar9 = (int)sVar7;
  iVar6 = (int)((param_1 - uVar3) * 0x10000) >> 0x10;
  iVar2 = func_0x80084080(iVar12 * iVar12 + iVar9 * iVar9 + iVar6 * iVar6);
  if ((param_3 & 2) != 0) {
    if (iVar2 == 0) {
      trap(0x1c00);
    }
    if ((iVar2 == -1) && (iVar12 << 8 == -0x80000000)) {
      trap(0x1800);
    }
    if (iVar2 == 0) {
      trap(0x1c00);
    }
    if ((iVar2 == -1) && (iVar9 << 8 == -0x80000000)) {
      trap(0x1800);
    }
    if (iVar2 == 0) {
      trap(0x1c00);
    }
    if ((iVar2 == -1) && (iVar6 << 8 == -0x80000000)) {
      trap(0x1800);
    }
    *(short *)(iVar13 + 0x48) = (short)((iVar12 << 8) / iVar2);
    *(short *)(iVar13 + 0x4a) = (short)((iVar9 << 8) / iVar2);
    *(short *)(iVar13 + 0x4c) = (short)((iVar6 << 8) / iVar2);
  }
  return (uint)(iVar2 < (int)uVar11);
}

