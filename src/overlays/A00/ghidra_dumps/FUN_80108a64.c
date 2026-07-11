// FUN_80108a64

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_80108a64(undefined2 *param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_v1;
  undefined2 *puVar7;
  int iVar8;
  int in_t0;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  iVar2 = (int)(((uint)(ushort)param_1[0xa6] - (uint)*(ushort *)(param_3 + 0x2c)) * 0x10000) >> 0x10
  ;
  iVar3 = (int)(((uint)(ushort)param_1[0xa8] - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000) >> 0x10
  ;
  iVar6 = param_2;
  iVar8 = param_3;
  uVar4 = func_0x80084080(iVar2 * iVar2 + iVar3 * iVar3);
  if (*(short *)(param_2 + 0x80) + _DAT_1f800088 < (int)(uVar4 & 0xffff)) {
    return 0;
  }
  if ((short)param_1[0x34] + 200 <
      (int)((uint)(ushort)param_1[0x34] +
            ((uint)(ushort)param_1[0xa7] - (uint)*(ushort *)(param_3 + 0x30)) + 100 & 0xffff)) {
    return 0;
  }
  iVar2 = (uint)(ushort)param_1[0x19] - (uint)*(ushort *)(param_3 + 0x30);
  if ((iVar2 + 0x3cU & 0xffff) < 0x51) {
    param_1[0xab] = (short)iVar2;
    DAT_1f800182 = 0;
    _DAT_1f800084 = param_3;
    param_1[0xa9] = *(short *)(param_2 + 0x80) + 0x1e;
    return 1;
  }
  if (iVar2 * 0x10000 < 0) {
    param_1[0xab] = 0xffc4;
  }
  else {
    param_1[0xab] = 0x14;
  }
  iVar2 = func_0x80077f3c(param_1);
  if (iVar2 == 0) {
    if (*(char *)((int)param_1 + 1) != '\0') {
      func_0x800518fc(param_1);
    }
    *(undefined1 *)((int)param_1 + 0x2b) = 0;
LAB_80123ab4:
    while( true ) {
      *(undefined2 *)(*(int *)(param_3 + 0xc0) + 2) = *param_1;
      *(undefined2 *)(*(int *)(param_3 + 0xc0) + 4) = param_1[1];
      *(undefined2 *)(*(int *)(param_3 + 0xc0) + 8) = param_1[2];
      *(undefined2 *)(*(int *)(param_3 + 0xc0) + 10) = param_1[3];
      *(undefined2 *)(*(int *)(param_3 + 0xc0) + 0xc) = param_1[4];
      *(int *)(*(int *)(param_3 + 0xc0) + 0x40) =
           unaff_s4 + *(int *)((short)param_1[5] * 4 + unaff_s5);
      if ((int)(uint)*(byte *)(unaff_s3 + 8) <= param_2) break;
      param_2 = param_2 + 1;
      iVar6 = func_0x8007aae8();
      *(int *)(param_3 + 0xc4) = iVar6;
      puVar7 = param_1 + 7;
      *(undefined2 *)(iVar6 + 6) = param_1[6];
      param_1 = param_1 + 8;
      **(undefined2 **)(param_3 + 0xc4) = *puVar7;
      param_3 = param_3 + 4;
    }
    *(undefined2 *)(unaff_s3 + 0x54) = 0;
    *(undefined2 *)(unaff_s3 + 0x58) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(unaff_s3 + 3)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      return 0;
    }
  }
  func_0x800518fc(param_1);
  iVar8 = (param_4 * iVar8 + -0xc80000 >> 0x10) + extraout_v1;
  if (iVar6 < 0x40) goto LAB_80123ab4;
  puVar7 = (undefined2 *)
           ((((int)(short)param_1[0x44] - (int)(short)param_1[0x24]) * 0x10000 >> 0x10) +
           (int)(short)param_1[0x24]);
  iVar6 = (((int)(short)param_1[0x46] - (int)(short)param_1[0x26]) * 0x10000 >> 0x10) +
          (int)(short)param_1[0x26];
  if (0x1f < in_t0) {
    iVar2 = in_t0 + -0x20;
    if (iVar2 < 0) {
      iVar2 = in_t0 + -0x1d;
    }
    iVar2 = iVar2 >> 2;
    if (5 < iVar2) {
      uVar5 = FUN_80123b34();
      return uVar5;
    }
    if (-1 < iVar2) goto LAB_8011ab9c;
  }
  iVar2 = 0;
LAB_8011ab9c:
  iVar3 = (short)param_3 + -0x2000;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  iVar3 = ((iVar3 << 0x10) >> 0x13) + 0x100;
  param_1[0x30] = (short)iVar2;
  param_1[0x17] = (short)puVar7;
  param_1[0x19] = (short)iVar8;
  param_1[0x1b] = (short)iVar6;
  if (0x300 < iVar3) {
    iVar3 = 0x300;
  }
  iVar2 = (param_3 + iVar3) * 0x10000 >> 0x10;
  if (iVar2 < 0x6400) {
    if (((0x2000 < iVar2) && (iVar2 = FUN_80110de8(param_1), iVar2 == 0)) &&
       (puVar7 = param_1, iVar2 = func_0x80022f04(&DAT_800e7e80), iVar2 != 0)) {
      *(undefined1 *)(param_1 + 2) = 3;
      func_0x8003116c(0x103,&stack0xfffffff0,0xfffffffc);
      uVar5 = FUN_80123c14();
      return uVar5;
    }
    param_1[0x20] = (short)(param_3 + iVar3);
    if ((*(char *)((int)param_1 + 3) == '\x01') && (3 < DAT_800e7eaa)) {
      return 0;
    }
    *(undefined1 *)((int)param_1 + 1) = 1;
    sVar1 = func_0x80077e7c();
    while( true ) {
      iVar2 = *(int *)(iVar8 + 0x7e74);
      uVar5 = *(undefined4 *)(param_1 + 0x60);
      *(short *)(iVar6 + -0x2f68) = sVar1 + 1;
      *(int *)(iVar8 + 0x7e74) = iVar2 + -4;
      *(undefined4 *)(iVar2 + -4) = uVar5;
      if (3 < param_2) break;
      param_1 = (undefined2 *)(unaff_s3 + (int)puVar7);
      puVar7 = puVar7 + 2;
      param_2 = param_2 + 1;
      sVar1 = *(short *)(iVar6 + -0x2f68);
    }
    *(char *)(unaff_s3 + 9) = *(char *)(unaff_s3 + 9) + -4;
    *(char *)(unaff_s3 + 8) = *(char *)(unaff_s3 + 8) + -4;
    uVar5 = FUN_8012ce0c();
    return uVar5;
  }
  func_0x8003116c(0x107,param_1 + 0x16,0xffffffc4);
  *(undefined1 *)(param_1 + 2) = 3;
  uVar5 = FUN_80123c14();
  return uVar5;
}

