// FUN_080142d4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0010d6c4) */

void FUN_080142d4(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  
  if (600 < (ushort)((*(short *)(param_1 + 0x2e) - *(short *)(param_3 + 0x2c)) + 600U)) {
    return;
  }
  iVar3 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  if ((int)*(short *)(param_2 + 0x82) < (int)((uint)*(ushort *)(param_2 + 0x80) + iVar3 & 0xffff)) {
    return;
  }
  iVar4 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
  if ((int)*(short *)(param_2 + 0x82) < (int)((uint)*(ushort *)(param_2 + 0x80) + iVar4 & 0xffff)) {
    return;
  }
  iVar5 = func_0x00083f50((int)*(short *)(param_3 + 0xc));
  iVar10 = iVar5 * *(short *)(param_2 + 0x80) >> 0xc;
  iVar5 = func_0x00083e80((int)*(short *)(param_3 + 0xc));
  iVar8 = -(iVar5 * *(short *)(param_2 + 0x80)) >> 0xc;
  iVar5 = iVar10;
  if (iVar10 << 0x10 < 0) {
    iVar5 = -iVar10;
  }
  iVar11 = iVar8;
  if (iVar8 << 0x10 < 0) {
    iVar11 = -iVar8;
  }
  bVar9 = (short)iVar5 < (short)iVar11;
  if ((short)iVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((short)iVar11 == 0) {
    bVar9 = 2;
  }
  sVar1 = (short)iVar8;
  if (bVar9 == 1) {
    sVar2 = (short)iVar4;
    if (sVar2 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar11 << 0x10 < iVar4 << 0x10) {
      return;
    }
    if (sVar1 == 0) {
      trap(0x1c00);
    }
    if ((sVar1 == -1) && ((int)sVar2 * (int)(short)iVar10 == -0x80000000)) {
      trap(0x1800);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar9 < 2) {
    if (bVar9 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar11 = iVar3;
    if ((short)iVar3 < 0) {
      iVar11 = -iVar3;
    }
    if (iVar5 << 0x10 < iVar11 << 0x10) {
      return;
    }
    iVar5 = (int)(short)iVar3 * (int)sVar1;
    iVar10 = (int)(short)iVar10;
    iVar11 = iVar5 / iVar10;
    if (iVar10 == 0) {
      trap(0x1c00);
    }
    if ((iVar10 == -1) && (iVar5 == -0x80000000)) {
      trap(0x1800);
    }
    if (*(short *)(param_1 + 0x86) + 0x80 <
        (int)((uint)*(ushort *)(param_1 + 0x84) +
              ((uint)*(ushort *)(param_1 + 0x32) - ((uint)*(ushort *)(param_3 + 0x30) - iVar11)) +
              0x40 & 0xffff)) {
      return;
    }
    if ((*(char *)(param_1 + 0x5f) == '\x10') &&
       ((int)(short)*(ushort *)(param_3 + 0x30) - (int)(short)iVar11 <
        (int)(short)*(ushort *)(param_1 + 0x32))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar9 == 2) {
    uVar6 = *(ushort *)(param_3 + 0x30);
    if (*(short *)(param_1 + 0x86) + 0x80 <
        (int)((uint)*(ushort *)(param_1 + 0x84) +
              ((uint)*(ushort *)(param_1 + 0x32) - (uint)uVar6) + 0x40 & 0xffff)) {
      return;
    }
    if ((*(char *)(param_1 + 0x5f) == '\x10') &&
       ((int)((uint)uVar6 << 0x10) < (int)((uint)*(ushort *)(param_1 + 0x32) << 0x10))) {
      *(ushort *)(param_1 + 0x32) =
           uVar6 + (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84));
      halt_baddata();
    }
  }
  else {
    if (bVar9 != 3) {
      halt_baddata();
    }
    if (*(short *)(param_1 + 0x82) + 0x80 <
        (int)((uint)*(ushort *)(param_1 + 0x80) +
              ((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34)) + 0x40 &
             0xffff)) {
      return;
    }
  }
  uVar6 = *(ushort *)(param_3 + 0xc) >> 4 & 0xff;
  if ((bVar9 & 1) == 0) {
    iVar4 = iVar3 * 0x10000;
  }
  else {
    iVar4 = iVar4 * 0x10000;
    if (0 < iVar8 << 0x10) {
      if (0 < iVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_080146a4;
    }
  }
  if (iVar4 < 0) {
    uVar6 = uVar6 + 0x80 & 0xff;
  }
LAB_080146a4:
  uVar7 = 0x40;
  if ((*(byte *)(param_1 + 0x46) & 8) == 0) {
    uVar7 = (ushort)*(byte *)((*(byte *)(param_1 + 0x46) & 7) + 0x8013ff48);
  }
  sVar1 = 0xa00;
  if (*(char *)(param_1 + 0x5e) != '\0') {
    sVar1 = 0xe00;
  }
  if (0x7f < (uVar7 - uVar6 & 0xff)) {
    *(short *)(param_2 + 0x44) = -sVar1;
    func_0x0001e860(param_1,param_2,param_3,0);
    DAT_1f800182 = 0;
    return;
  }
  *(short *)(param_2 + 0x44) = sVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

