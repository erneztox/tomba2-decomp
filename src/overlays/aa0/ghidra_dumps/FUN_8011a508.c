// FUN_8011a508

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8011a93c) */
/* WARNING: Removing unreachable block (ram,0x8011a8e8) */
/* WARNING: Removing unreachable block (ram,0x8011a77c) */
/* WARNING: Removing unreachable block (ram,0x8011a728) */
/* WARNING: Removing unreachable block (ram,0x8011a738) */
/* WARNING: Removing unreachable block (ram,0x8011a740) */
/* WARNING: Removing unreachable block (ram,0x8011a78c) */
/* WARNING: Removing unreachable block (ram,0x8011a794) */
/* WARNING: Removing unreachable block (ram,0x8011a8f8) */
/* WARNING: Removing unreachable block (ram,0x8011a900) */
/* WARNING: Removing unreachable block (ram,0x8011a94c) */
/* WARNING: Removing unreachable block (ram,0x8011a954) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8011a508(undefined2 *param_1,undefined2 *param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  ushort uVar4;
  short sVar5;
  short extraout_var;
  short extraout_var_00;
  short extraout_var_01;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int unaff_s1;
  int iVar14;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined1 unaff_s6;
  int unaff_s7;
  undefined2 uStack_28;
  short sStack_26;
  undefined2 uStack_24;
  short sStack_22;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  
  puVar12 = (undefined4 *)0x1;
  puVar9 = (undefined2 *)(uint)*(byte *)(param_1 + 2);
  iVar14 = *(int *)(param_1 + 8);
  if (puVar9 != (undefined2 *)0x1) {
    if ((undefined2 *)0x1 < puVar9) {
      sVar5 = 3;
      if (puVar9 == (undefined2 *)0x2) {
        sStack_26 = param_1[0x17];
        sStack_22 = param_1[0x19];
        uStack_20 = CONCAT22(param_1[0x1b],(undefined2)uStack_20);
        func_0x8003116c(0x103,&uStack_28,0xfffffffc);
      }
      else if (puVar9 != (undefined2 *)0x3) goto LAB_80123c7c;
      func_0x8007a624(param_1);
      return;
    }
    sVar5 = 0x20;
    if (puVar9 == (undefined2 *)0x0) {
      *(undefined1 *)((int)param_1 + 0xb) = 0x20;
      *(undefined4 *)(param_1 + 0xc) = 0x8013d454;
      *(undefined1 *)param_1 = 2;
      param_1[0x40] = 100;
      param_1[0x41] = 200;
      param_1[0x42] = 0x50;
      *(undefined1 *)(param_1 + 2) = 1;
      param_1[0x43] = 0xa0;
      param_1[0x20] = 0;
      bVar1 = *(byte *)(iVar14 + 3);
      bVar2 = *(byte *)(iVar14 + 0x46);
      *(byte *)((int)param_1 + 3) = bVar1;
      if (bVar1 == 2) {
        uVar6 = 0x8014989c;
        goto LAB_801235bc;
      }
      uVar6 = (uint)(bVar1 < 3);
      if (uVar6 == 0) {
        uVar6 = 3;
        uVar7 = (uint)bVar2 << 0x18;
        if (bVar1 == 3) {
          param_2 = (undefined2 *)(((int)uVar7 >> 0x16) + -0x7feb6758);
          param_1[0x44] = *param_2;
          uVar3 = *(undefined2 *)(((int)uVar7 >> 0x16) + -0x7feb6756);
          sVar5 = 0x14;
          param_1[0x31] = 0;
          param_1[0x32] = 0x14;
          param_1[0x21] = 0;
          param_1[0x46] = uVar3;
          puVar9 = (undefined2 *)0x3;
          goto LAB_80123c7c;
        }
      }
      else {
        uVar7 = 0;
        if (bVar1 == 1) {
          uVar6 = 0x80149890;
          goto LAB_801235bc;
        }
      }
      while( true ) {
        unaff_s3 = unaff_s3 + 1;
        *(byte *)(uVar6 + 0x28) = (byte)uVar7 | 0x80;
        iVar14 = unaff_s4 * 0x10000;
        if (4 < unaff_s3) break;
        iVar8 = func_0x80083f50(iVar14 >> 0x10);
        iVar14 = func_0x80083e80(iVar14 >> 0x10);
        unaff_s4 = unaff_s4 + 0x199;
        sStack_26 = *(short *)(unaff_s1 + 0x2c) + (short)(iVar8 * 200 >> 0xc);
        sStack_22 = *(short *)(unaff_s1 + 0x30) + 0x5a;
        uStack_20 = CONCAT22(*(short *)(unaff_s1 + 0x34) - (short)(iVar14 * 300 >> 0xc),
                             (undefined2)uStack_20);
        uVar6 = func_0x8003116c(0,&uStack_28,0xffffff9c);
LAB_801235bc:
        uVar7 = (uint)*(byte *)(uVar6 + 0x28);
      }
      *(short *)(unaff_s1 + 0x16) = *(short *)(unaff_s1 + 0x16) + 1;
      *(undefined1 *)(unaff_s5 + 0x2b) = unaff_s6;
      iVar8 = func_0x80083e80();
      *(short *)(unaff_s1 + 0x32) =
           *(short *)(unaff_s1 + 0x60) + (short)(iVar8 * *(short *)(unaff_s1 + 0x4a) >> 0xc);
      *(undefined2 *)(iVar14 + 0x4e) = *(undefined2 *)(unaff_s1 + 0x2e);
      *(short *)(iVar14 + 0x50) = *(short *)(unaff_s1 + 0x32) + 0x3c;
      *(undefined2 *)(iVar14 + 0x52) = *(undefined2 *)(unaff_s1 + 0x36);
      FUN_8013ecf8();
      return;
    }
    goto LAB_80123c7c;
  }
  param_1[0x2a] = 0;
  sVar5 = _DAT_1f8000f2;
  bVar1 = *(byte *)((int)param_1 + 5);
  param_1[0x2c] = 0;
  param_1[0x2b] = -sVar5;
  if (bVar1 == 1) {
    iVar8 = *(int *)(*(int *)(param_1 + 8) + (*(byte *)(*(int *)(param_1 + 8) + 8) - 1) * 4 + 0xc0);
    iVar11 = (int)(short)param_1[0x32];
    if (iVar11 < 0) {
      FUN_80123850(1,param_2,0);
      return;
    }
    if (0x14 < iVar11) {
      iVar11 = 0x14;
    }
    param_4 = (iVar11 * -0x92 + (0x14 - iVar11) * 0x19) / 0x14;
    uStack_28 = 0;
    puVar12 = &uStack_20;
    param_2 = &uStack_28;
    sStack_26 = (short)param_4;
    uStack_24 = (undefined2)((iVar11 * 0x1b + (0x14 - iVar11) * -0xa3) / 0x14);
    func_0x80084470(iVar8 + 0x18);
    uStack_20 = uStack_20 + *(int *)(iVar8 + 0x2c);
    iStack_1c = iStack_1c + *(int *)(iVar8 + 0x30);
    iStack_18 = iStack_18 + *(int *)(iVar8 + 0x34);
    param_1[0x17] = (undefined2)uStack_20;
    param_1[0x19] = (undefined2)iStack_1c;
    param_1[0x1b] = (undefined2)iStack_18;
    if (0 < (short)param_1[0x32]) {
      param_1[0x32] = param_1[0x32] + -1;
    }
    param_1[0x30] = 0;
    if ((short)param_1[0x31] < 0x101) {
      param_1[0x31] = param_1[0x31] + 0xc;
    }
    func_0x80083f50((int)(short)param_1[0x21]);
    param_1[0x31] = param_1[0x31] + extraout_var_00;
    param_1[0x21] = param_1[0x21] + 0x199;
    if (1 < *(byte *)(iVar14 + 0x2b)) {
      *(char *)((int)param_1 + 5) = *(char *)((int)param_1 + 5) + '\x01';
      param_1[0x24] = param_1[0x17];
      param_1[0x25] = param_1[0x19];
      param_1[0x26] = param_1[0x1b];
      FUN_80123c14();
      return;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        FUN_80123c14();
        return;
      }
      if (*(char *)(iVar14 + 0x2b) != '\0') {
        *(byte *)((int)param_1 + 5) = *(byte *)(param_1 + 2);
      }
      iVar14 = *(int *)(*(int *)(param_1 + 8) + (*(byte *)(*(int *)(param_1 + 8) + 8) - 1) * 4 +
                       0xc0);
      iVar8 = (int)(short)param_1[0x32];
      if (iVar8 < 0) {
        if (iVar14 == 0) {
          *(undefined1 *)(unaff_s7 + 0x76) = 1;
          *(undefined2 *)(unaff_s5 + 0x60) = 1;
        }
        *(undefined1 *)(unaff_s5 + 0x2b) = 0;
        FUN_8012c6ac(1,param_2,0);
        return;
      }
      if (0x14 < iVar8) {
        iVar8 = 0x14;
      }
      uStack_28 = 0;
      sStack_26 = (short)((iVar8 * -0x92 + (0x14 - iVar8) * 0x19) / 0x14);
      uStack_24 = (undefined2)((iVar8 * 0x1b + (0x14 - iVar8) * -0xa3) / 0x14);
      func_0x80084470(iVar14 + 0x18,&uStack_28,&uStack_20);
      uStack_20 = uStack_20 + *(int *)(iVar14 + 0x2c);
      iStack_1c = iStack_1c + *(int *)(iVar14 + 0x30);
      iStack_18 = iStack_18 + *(int *)(iVar14 + 0x34);
      param_1[0x17] = (undefined2)uStack_20;
      param_1[0x19] = (undefined2)iStack_1c;
      param_1[0x1b] = (undefined2)iStack_18;
      if (0 < (short)param_1[0x32]) {
        param_1[0x32] = param_1[0x32] + -1;
      }
      param_1[0x30] = 0;
      if ((short)param_1[0x31] < 0x101) {
        param_1[0x31] = param_1[0x31] + 0xc;
      }
      func_0x80083f50((int)(short)param_1[0x21]);
      param_1[0x31] = param_1[0x31] + extraout_var;
      param_1[0x21] = param_1[0x21] + 0x199;
      FUN_80123c14();
      return;
    }
    if (bVar1 != 2) {
      FUN_80123c14();
      return;
    }
    uVar4 = param_1[0x20];
    uVar6 = (uint)uVar4;
    func_0x80083f50((int)(short)param_1[0x21]);
    iVar13 = (int)((uint)(ushort)param_1[0x20] << 0x10) >> 0x18;
    iVar11 = iVar13 + 2;
    param_1[0x21] = param_1[0x21] + 0x199;
    param_1[0x31] = param_1[0x31] + extraout_var_01;
    iVar8 = iVar13 + -0x1e;
    if (iVar11 < 0) {
      iVar11 = 0;
      iVar8 = -0x20;
    }
    puVar12 = (undefined4 *)
              ((iVar8 * iVar8 * 0x3200 + -0xc80000 >> 0x10) + (int)(short)param_1[0x25]);
    if (iVar11 < 0x40) {
      while( true ) {
        *(undefined2 *)(*(int *)(uVar6 + 0xc0) + 2) = *param_1;
        *(undefined2 *)(*(int *)(uVar6 + 0xc0) + 4) = param_1[1];
        *(undefined2 *)(*(int *)(uVar6 + 0xc0) + 8) = param_1[2];
        *(undefined2 *)(*(int *)(uVar6 + 0xc0) + 10) = param_1[3];
        *(undefined2 *)(*(int *)(uVar6 + 0xc0) + 0xc) = param_1[4];
        *(int *)(*(int *)(uVar6 + 0xc0) + 0x40) =
             unaff_s4 + *(int *)((short)param_1[5] * 4 + unaff_s5);
        if ((int)(uint)*(byte *)(unaff_s3 + 8) <= iVar14) break;
        iVar14 = iVar14 + 1;
        iVar8 = func_0x8007aae8();
        *(int *)(uVar6 + 0xc4) = iVar8;
        puVar9 = param_1 + 7;
        *(undefined2 *)(iVar8 + 6) = param_1[6];
        param_1 = param_1 + 8;
        **(undefined2 **)(uVar6 + 0xc4) = *puVar9;
        uVar6 = uVar6 + 4;
      }
      *(undefined2 *)(unaff_s3 + 0x54) = 0;
      *(undefined2 *)(unaff_s3 + 0x58) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(*(undefined1 *)(unaff_s3 + 3)) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        return;
      }
    }
    param_2 = (undefined2 *)
              ((((int)(short)param_1[0x44] - (int)(short)param_1[0x24]) * 0x10000 >> 0x10) +
              (int)(short)param_1[0x24]);
    param_4 = (((int)(short)param_1[0x46] - (int)(short)param_1[0x26]) * 0x10000 >> 0x10) +
              (int)(short)param_1[0x26];
    if (iVar13 < 0x20) {
LAB_8011ab98:
      iVar8 = 0;
    }
    else {
      iVar8 = iVar13 + -0x20;
      if (iVar8 < 0) {
        iVar8 = iVar13 + -0x1d;
      }
      iVar8 = iVar8 >> 2;
      if (5 < iVar8) {
        FUN_80123b34();
        return;
      }
      if (iVar8 < 0) goto LAB_8011ab98;
    }
    iVar11 = (short)uVar4 + -0x2000;
    if (iVar11 < 0) {
      iVar11 = -iVar11;
    }
    iVar11 = ((iVar11 << 0x10) >> 0x13) + 0x100;
    param_1[0x30] = (short)iVar8;
    param_1[0x17] = (short)param_2;
    param_1[0x19] = (short)puVar12;
    param_1[0x1b] = (short)param_4;
    if (0x300 < iVar11) {
      iVar11 = 0x300;
    }
    iVar8 = (int)((uVar6 + iVar11) * 0x10000) >> 0x10;
    if (0x63ff < iVar8) {
      func_0x8003116c(0x107,param_1 + 0x16,0xffffffc4);
      *(undefined1 *)(param_1 + 2) = 3;
      FUN_80123c14();
      return;
    }
    if (((0x2000 < iVar8) && (iVar8 = FUN_80110de8(param_1), iVar8 == 0)) &&
       (param_2 = param_1, iVar8 = func_0x80022f04(&DAT_800e7e80), iVar8 != 0)) {
      sStack_26 = param_1[0x17];
      *(undefined1 *)(param_1 + 2) = 3;
      sStack_22 = param_1[0x19];
      uStack_20 = CONCAT22(param_1[0x1b],(undefined2)uStack_20);
      func_0x8003116c(0x103,&uStack_28,0xfffffffc);
      FUN_80123c14();
      return;
    }
    param_1[0x20] = (short)(uVar6 + iVar11);
  }
  if ((*(char *)((int)param_1 + 3) == '\x01') && (3 < DAT_800e7eaa)) {
    return;
  }
  *(undefined1 *)((int)param_1 + 1) = 1;
  sVar5 = func_0x80077e7c();
  puVar9 = param_1;
LAB_80123c7c:
  while( true ) {
    iVar8 = puVar12[0x1f9d];
    uVar10 = *(undefined4 *)(puVar9 + 0x60);
    *(short *)(param_4 + -0x2f68) = sVar5 + 1;
    puVar12[0x1f9d] = iVar8 + -4;
    *(undefined4 *)(iVar8 + -4) = uVar10;
    if (3 < iVar14) break;
    puVar9 = (undefined2 *)(unaff_s3 + (int)param_2);
    param_2 = param_2 + 2;
    iVar14 = iVar14 + 1;
    sVar5 = *(short *)(param_4 + -0x2f68);
  }
  *(char *)(unaff_s3 + 9) = *(char *)(unaff_s3 + 9) + -4;
  *(char *)(unaff_s3 + 8) = *(char *)(unaff_s3 + 8) + -4;
  FUN_8012ce0c();
  return;
}

