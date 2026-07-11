// FUN_0801119c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801119c(int param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  if (600 < (ushort)((*(short *)(param_1 + 0x2e) - *(short *)(param_3 + 0x2c)) + 600U)) {
    return;
  }
  iVar3 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  if ((int)*(short *)(param_2 + 0x82) < (int)((uint)*(ushort *)(param_2 + 0x80) + iVar3 & 0xffff)) {
    return;
  }
  if ((int)*(short *)(param_2 + 0x82) <
      (int)((uint)*(ushort *)(param_2 + 0x80) +
            ((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) & 0xffff)) {
    return;
  }
  bVar2 = false;
  iVar4 = func_0x00083f50((int)*(short *)(param_3 + 0xc));
  uVar11 = (uint)(iVar4 * *(short *)(param_2 + 0x80)) >> 0xc;
  if (*(char *)(param_2 + 3) != '\0') {
    func_0x00083e80((int)*(short *)(param_3 + 0xc));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = func_0x00083e80((int)*(short *)(param_3 + 0xc));
  uVar10 = (uint)(iVar4 * *(short *)(param_2 + 0x80)) >> 0xc;
  uVar9 = uVar11;
  if ((int)(uVar11 << 0x10) < 0) {
    uVar9 = -uVar11;
  }
  iVar4 = uVar10 << 0x10;
  if (iVar4 < 0) {
    iVar4 = uVar10 * -0x10000;
  }
  if (iVar4 == 0) {
    uVar6 = *(ushort *)(param_1 + 0x32);
    uVar7 = *(ushort *)(param_3 + 0x30);
    if (*(short *)(param_1 + 0x86) + 0x80 <
        (int)((uint)*(ushort *)(param_1 + 0x84) + ((uint)uVar6 - (uint)uVar7) + 0x40 & 0xffff)) {
      return;
    }
    if (*(char *)(param_1 + 0x5f) == '\x10') {
      bVar1 = *(byte *)(param_1 + 0x46) >> 1;
      if (bVar1 == 2) {
        if ((short)uVar7 + -0x40 < (int)(short)uVar6) {
          halt_baddata();
        }
      }
      else {
        if (2 < bVar1) {
          if (bVar1 == 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          halt_baddata();
        }
        if ((int)((uint)uVar7 << 0x10) < (int)((uint)uVar6 << 0x10)) {
          halt_baddata();
        }
      }
    }
  }
  else {
    iVar4 = iVar3;
    if ((short)iVar3 < 0) {
      iVar4 = -iVar3;
    }
    if ((int)(uVar9 << 0x10) < iVar4 << 0x10) {
      return;
    }
    iVar4 = (int)(short)iVar3 * (int)(short)uVar10;
    iVar5 = (int)(short)uVar11;
    iVar12 = iVar4 / iVar5;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar4 == -0x80000000)) {
      trap(0x1800);
    }
    uVar6 = *(ushort *)(param_3 + 0x30);
    if (*(short *)(param_1 + 0x86) + 0x80 <
        (int)((uint)*(ushort *)(param_1 + 0x84) +
              ((uint)*(ushort *)(param_1 + 0x32) - ((uint)uVar6 - iVar12)) + 0x40 & 0xffff)) {
      return;
    }
    if (*(char *)(param_1 + 0x5f) == '\x10') {
      bVar1 = *(byte *)(param_1 + 0x46) >> 1;
      sVar8 = (short)iVar12;
      if (bVar1 == 2) {
        if ((int)(short)*(ushort *)(param_1 + 0x32) <= ((int)(short)uVar6 - (int)sVar8) + -0x40)
        goto LAB_080114e4;
      }
      else {
        if (bVar1 < 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      *(ushort *)(param_1 + 0x32) =
           (uVar6 - (sVar8 + -0x40)) + (*(short *)(param_1 + 0x86) - *(ushort *)(param_1 + 0x84));
      bVar2 = true;
    }
  }
LAB_080114e4:
  uVar6 = *(ushort *)(param_3 + 0xc) >> 4 & 0xff;
  if (iVar3 * 0x10000 < 0) {
    uVar6 = uVar6 + 0x80 & 0xff;
  }
  uVar7 = 0x40;
  if ((*(byte *)(param_1 + 0x46) & 8) == 0) {
    uVar7 = (ushort)*(byte *)((*(byte *)(param_1 + 0x46) & 7) + 0x80118c38);
  }
  sVar8 = 0xa00;
  if (*(char *)(param_1 + 0x5e) != '\0') {
    sVar8 = 0xe00;
  }
  if (0x7f < (uVar7 - uVar6 & 0xff)) {
    *(short *)(param_2 + 0x44) = -sVar8;
    if (!bVar2) {
      func_0x0001e860(param_1,param_2,param_3,0);
      DAT_1f800182 = 0;
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_2 + 0x44) = sVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

