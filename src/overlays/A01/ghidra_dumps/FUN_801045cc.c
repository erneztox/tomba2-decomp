// FUN_801045cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

uint FUN_801045cc(int param_1,uint param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (600 < (ushort)((*(short *)(param_1 + 0x36) - *(short *)(param_3 + 0x34)) + 600U)) {
    return 0;
  }
  iVar3 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
  uVar4 = (uint)((int)*(short *)(param_2 + 0x82) <
                (int)((uint)*(ushort *)(param_2 + 0x80) + iVar3 & 0xffff));
  if (uVar4 != 0) {
    return uVar4;
  }
  iVar5 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
  uVar4 = (uint)((int)*(short *)(param_2 + 0x82) <
                (int)((uint)*(ushort *)(param_2 + 0x80) + iVar5 & 0xffff));
  if (uVar4 != 0) {
    return uVar4;
  }
  iVar6 = func_0x80083f50((int)*(short *)(param_2 + 0x58));
  iVar9 = iVar6 * *(short *)(param_2 + 0x80) >> 0xc;
  iVar6 = func_0x80083e80((int)*(short *)(param_2 + 0x58));
  iVar7 = -(iVar6 * *(short *)(param_2 + 0x80)) >> 0xc;
  iVar6 = iVar9;
  if (iVar9 << 0x10 < 0) {
    iVar6 = -iVar9;
  }
  iVar8 = iVar7;
  if (iVar7 << 0x10 < 0) {
    iVar8 = -iVar7;
  }
  uVar4 = (uint)((short)iVar6 < (short)iVar8);
  if ((short)iVar6 == 0) {
    iVar3 = func_0x80083f50((int)*(short *)(iVar9 + 0x58));
    iVar5 = *(short *)(iVar9 + 0x4e) * iVar3 >> 0xc;
    iVar3 = func_0x80083e80((int)*(short *)(iVar9 + 0x58));
    iVar3 = *(short *)(iVar9 + 0x4e) * iVar3;
    if ((*(ushort *)(iVar9 + 0x66) & 1) != 0) {
      iVar6 = func_0x80083f50((int)*(short *)(iVar9 + 100));
      *(int *)(iVar9 + 0x2c) = *(int *)(iVar9 + 0x2c) - iVar6 * iVar5;
      func_0x80083e80((int)*(short *)(iVar9 + 100));
      *(int *)(iVar9 + 0x30) = *(int *)(iVar9 + 0x30) + iVar3;
      uVar4 = FUN_8011671c();
      return uVar4;
    }
    iVar6 = func_0x80083f50((int)*(short *)(iVar9 + 100));
    *(int *)(iVar9 + 0x2c) = *(int *)(iVar9 + 0x2c) + iVar6 * iVar5;
    iVar6 = func_0x80083e80((int)*(short *)(iVar9 + 100));
    *(int *)(iVar9 + 0x30) = *(int *)(iVar9 + 0x30) + iVar3;
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) - iVar6 * iVar5;
    return 0;
  }
  if ((short)iVar8 == 0) {
    uVar4 = 2;
  }
  sVar2 = (short)iVar9;
  if (uVar4 == 1) {
    iVar3 = iVar5;
    if (iVar5 * 0x10000 < 0) {
      iVar3 = -iVar5;
    }
    uVar4 = (uint)(iVar8 << 0x10 < iVar3 << 0x10);
    if (uVar4 != 0) {
      return uVar4;
    }
    iVar3 = (int)(short)iVar5 * (int)sVar2;
    iVar5 = (int)(short)iVar7;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar3 == -0x80000000)) {
      trap(0x1800);
    }
    iVar3 = ((uint)*(ushort *)(param_1 + 0x2e) - ((uint)*(ushort *)(param_3 + 0x2c) - iVar3 / iVar5)
            ) + 0x40;
    uVar4 = FUN_8010d844(iVar3,(uint)*(ushort *)(param_1 + 0x80) + iVar3);
    return uVar4;
  }
  if (uVar4 < 2) {
    iVar9 = iVar3 * 0x10000;
    if (uVar4 == 0) {
      iVar5 = iVar3;
      if (iVar9 < 0) {
        iVar5 = -iVar3;
      }
      uVar4 = (uint)(iVar6 << 0x10 < iVar5 << 0x10);
      if (uVar4 != 0) {
        return uVar4;
      }
      iVar3 = (int)(short)iVar3 * (int)(short)iVar7;
      iVar5 = (int)sVar2;
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      if ((iVar5 == -1) && (iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      uVar4 = FUN_8010d84c((uint)*(ushort *)(param_1 + 0x84) +
                           ((uint)*(ushort *)(param_1 + 0x32) -
                           ((uint)*(ushort *)(param_3 + 0x30) - iVar3 / iVar5)) + 0x40);
      return uVar4;
    }
  }
  else {
    iVar9 = 3;
    if (uVar4 == 2) {
      uVar4 = FUN_8010d84c((uint)*(ushort *)(param_1 + 0x84) +
                           ((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) +
                           0x40);
      return uVar4;
    }
    if (uVar4 == 3) {
      uVar4 = (uint)(*(short *)(param_1 + 0x82) + 0x80 <
                    (int)((uint)*(ushort *)(param_1 + 0x80) +
                          ((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c)) +
                          0x40 & 0xffff));
      if (uVar4 != 0) {
        return uVar4;
      }
      if (((*(char *)(param_1 + 0x5f) != '\x10') || (0x4aff < *(short *)(param_1 + 0x2e))) ||
         ((int)((uint)*(ushort *)(param_2 + 0x58) << 0x14) >> 0x10 < -0x7f)) {
        func_0x8001e860(param_1,param_2,param_3,0);
        DAT_1f800182 = 0;
        return 0x1f800000;
      }
      uVar4 = (uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84);
      *(short *)(param_1 + 0x32) = *(short *)(param_3 + 0x30) + 0x40 + (short)uVar4;
      goto LAB_8010d8d4;
    }
  }
  *(int *)(*(int *)(iVar5 + 0xc4) + 0x40) = iVar6 + *(int *)(iVar9 * 4 + uVar4);
  func_0x80077cfc(iVar5,0x80139b24,iVar7,4);
  *(short *)(iVar5 + 0x42) = sVar2;
  *(char *)(iVar5 + 7) = *(char *)(iVar5 + 7) + '\x01';
  iVar6 = func_0x80083e80(-(int)*(short *)(iVar5 + 0x58));
  *(short *)(iVar5 + 0x58) = *(short *)(iVar5 + 0x58) + (short)(iVar6 >> 5);
  uVar4 = (uint)*(byte *)(iVar5 + 3);
  *(short *)(iVar5 + 0x4e) = *(short *)(iVar5 + 0x4e) + (short)(-(int)*(short *)(iVar5 + 0x4e) >> 2)
  ;
LAB_8010d8d4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(uVar4) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar2 = *(short *)(iVar5 + 0x32);
  iVar6 = func_0x80083f50((int)*(short *)(iVar3 + 0x10));
  iVar7 = func_0x8009a450();
  *(short *)(iVar3 + 0x10) = *(short *)(iVar3 + 0x10) + (short)(iVar7 >> 9);
  uVar1 = *(ushort *)(iVar5 + 0x42);
  *(short *)(iVar5 + 0x32) =
       *(short *)(iVar5 + 0x32) +
       (short)(((int)sVar2 + (iVar6 >> 5)) - (int)*(short *)(iVar5 + 0x32) >> 4);
  *(ushort *)(iVar5 + 0x42) = uVar1 - 1;
  if ((int)((uint)uVar1 << 0x10) < 1) {
    param_2 = 1;
  }
  return param_2;
}

