// FUN_8011198c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8011198c(undefined2 *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int extraout_v1;
  int iVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  int iVar9;
  int in_t0;
  undefined1 *unaff_s1;
  int iVar10;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  bVar1 = *(byte *)(param_1 + 2);
  iVar10 = 1;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) goto LAB_80123ab4;
        func_0x8007a624(param_1);
      }
      return;
    }
    if (bVar1 != 0) goto LAB_80123ab4;
    unaff_s1 = &DAT_800ecf58;
    iVar9 = -0x7feb7a08;
    iVar4 = func_0x800519e0(param_1,0x11,_DAT_800ecf94);
    uVar7 = _DAT_800ecfa8;
    if (iVar4 != 0) {
      return;
    }
    puVar8 = (undefined2 *)0x8014c9c0;
    iVar4 = -0x7feb7980;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    param_1[0x2c] = 0;
    param_1[0x2b] = 0;
    param_1[0x2a] = 0;
    *(undefined1 *)(param_1 + 0x5f) = 0;
    *(undefined4 *)(param_1 + 0x1e) = uVar7;
    puVar6 = param_1;
    func_0x80040cdc();
    if (*(char *)((int)param_1 + 3) != '\0') {
      param_1[0x2b] = 0x800;
      *(undefined1 *)param_1 = 9;
      param_1[0x40] = 0x50;
      param_1[0x41] = 0xa0;
      *(undefined1 *)((int)param_1 + 0x7b) = 0;
      param_1[0x42] = 0x80;
      param_1[0x43] = 0x120;
      func_0x80041718(param_1,*(undefined1 *)((int)param_1 + 0x7b),0);
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      goto LAB_80123ab4;
    }
    param_1[0x40] = 200;
    *(undefined1 *)param_1 = 1;
    param_1[0x41] = 400;
    *(undefined1 *)((int)param_1 + 0x7b) = 1;
    param_1[0x21] = (short)puVar6;
    if (1 < DAT_0000002c) {
      *(char *)((int)param_1 + 5) = *(char *)((int)param_1 + 5) + '\x01';
      param_1[0x24] = param_1[0x17];
      param_1[0x25] = param_1[0x19];
      param_1[0x26] = param_1[0x1b];
      FUN_80123c14();
      return;
    }
    goto LAB_8011ac78;
  }
  if (*(char *)((int)param_1 + 3) == '\0') {
    FUN_8011a600(param_1);
    if ((0x15 < DAT_800bf9de) || (iVar4 = func_0x80077f3c(param_1), iVar4 == 0)) goto LAB_80111b24;
    func_0x800518fc(param_1);
    iVar4 = extraout_v1;
  }
  else {
    if (*(char *)((int)param_1 + 3) == '\x01') {
      FUN_8011a804(param_1);
LAB_80111b24:
      if (*(char *)((int)param_1 + 1) != '\0') {
        func_0x800518fc(param_1);
      }
      *(undefined1 *)((int)param_1 + 0x2b) = 0;
      goto LAB_80123ab4;
    }
    iVar4 = 1;
  }
  iVar4 = (param_4 * param_3 + -0xc80000 >> 0x10) + iVar4;
  if (param_2 < 0x40) {
LAB_80123ab4:
    while( true ) {
      *(undefined2 *)(*(int *)(unaff_s1 + 0xc0) + 2) = *param_1;
      *(undefined2 *)(*(int *)(unaff_s1 + 0xc0) + 4) = param_1[1];
      *(undefined2 *)(*(int *)(unaff_s1 + 0xc0) + 8) = param_1[2];
      *(undefined2 *)(*(int *)(unaff_s1 + 0xc0) + 10) = param_1[3];
      *(undefined2 *)(*(int *)(unaff_s1 + 0xc0) + 0xc) = param_1[4];
      *(int *)(*(int *)(unaff_s1 + 0xc0) + 0x40) =
           unaff_s4 + *(int *)((short)param_1[5] * 4 + unaff_s5);
      if ((int)(uint)*(byte *)(unaff_s3 + 8) <= iVar10) break;
      iVar10 = iVar10 + 1;
      iVar4 = func_0x8007aae8();
      *(int *)(unaff_s1 + 0xc4) = iVar4;
      puVar6 = param_1 + 7;
      *(undefined2 *)(iVar4 + 6) = param_1[6];
      param_1 = param_1 + 8;
      **(undefined2 **)(unaff_s1 + 0xc4) = *puVar6;
      unaff_s1 = unaff_s1 + 4;
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
  puVar8 = (undefined2 *)
           ((((int)(short)param_1[0x44] - (int)(short)param_1[0x24]) * 0x10000 >> 0x10) +
           (int)(short)param_1[0x24]);
  iVar9 = (((int)(short)param_1[0x46] - (int)(short)param_1[0x26]) * 0x10000 >> 0x10) +
          (int)(short)param_1[0x26];
  if (in_t0 < 0x20) {
LAB_8011ab98:
    iVar5 = 0;
  }
  else {
    iVar5 = in_t0 + -0x20;
    if (iVar5 < 0) {
      iVar5 = in_t0 + -0x1d;
    }
    iVar5 = iVar5 >> 2;
    if (5 < iVar5) {
      FUN_80123b34();
      return;
    }
    if (iVar5 < 0) goto LAB_8011ab98;
  }
  iVar3 = (short)unaff_s1 + -0x2000;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  iVar3 = ((iVar3 << 0x10) >> 0x13) + 0x100;
  param_1[0x30] = (short)iVar5;
  param_1[0x17] = (short)puVar8;
  param_1[0x19] = (short)iVar4;
  param_1[0x1b] = (short)iVar9;
  if (0x300 < iVar3) {
    iVar3 = 0x300;
  }
  iVar5 = (int)(unaff_s1 + iVar3) * 0x10000 >> 0x10;
  if (0x63ff < iVar5) {
    func_0x8003116c(0x107,param_1 + 0x16,0xffffffc4);
    *(undefined1 *)(param_1 + 2) = 3;
    FUN_80123c14();
    return;
  }
  if (((0x2000 < iVar5) && (iVar5 = FUN_80110de8(param_1), iVar5 == 0)) &&
     (puVar8 = param_1, iVar5 = func_0x80022f04(&DAT_800e7e80), iVar5 != 0)) {
    *(undefined1 *)(param_1 + 2) = 3;
    func_0x8003116c(0x103,&stack0xfffffff0,0xfffffffc);
    FUN_80123c14();
    return;
  }
  param_1[0x20] = (short)(unaff_s1 + iVar3);
LAB_8011ac78:
  if ((*(char *)((int)param_1 + 3) == '\x01') && (3 < DAT_800e7eaa)) {
    return;
  }
  *(undefined1 *)((int)param_1 + 1) = 1;
  sVar2 = func_0x80077e7c();
  while( true ) {
    iVar5 = *(int *)(iVar4 + 0x7e74);
    uVar7 = *(undefined4 *)(param_1 + 0x60);
    *(short *)(iVar9 + -0x2f68) = sVar2 + 1;
    *(int *)(iVar4 + 0x7e74) = iVar5 + -4;
    *(undefined4 *)(iVar5 + -4) = uVar7;
    if (3 < iVar10) break;
    param_1 = (undefined2 *)(unaff_s3 + (int)puVar8);
    puVar8 = puVar8 + 2;
    iVar10 = iVar10 + 1;
    sVar2 = *(short *)(iVar9 + -0x2f68);
  }
  *(char *)(unaff_s3 + 9) = *(char *)(unaff_s3 + 9) + -4;
  *(char *)(unaff_s3 + 8) = *(char *)(unaff_s3 + 8) + -4;
  FUN_8012ce0c();
  return;
}

