// FUN_8010b07c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8010b07c(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint unaff_s0;
  uint uVar13;
  int unaff_s3;
  uint unaff_s6;
  uint uVar14;
  undefined8 uVar15;
  
  bVar2 = *(byte *)(param_1 + 6);
  if (bVar2 == 1) {
    sVar3 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar3;
    if (sVar3 == -1) {
      unaff_s0 = param_1 + 0x2c;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      func_0x80027144(*(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x40),unaff_s0,0x400,4);
      func_0x80074590(0xc,0,0);
      param_4 = (uint *)0x4;
      func_0x80027144(*(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x40),unaff_s0,0x400);
      func_0x80074590(0xc,0,0);
      *(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x40) = 0;
    }
LAB_8010b184:
    *(ushort *)(*(int *)(param_1 + 0xc0) + 2) = (_DAT_1f80017c & 2) * -6;
    uVar4 = func_0x8009a450();
    psVar6 = *(short **)(param_1 + 0xc0);
    *psVar6 = ((uVar4 & 3) - 2) * 6;
LAB_801141d8:
    iVar5 = -(int)psVar6;
  }
  else if (bVar2 < 2) {
    iVar5 = 0;
    if (bVar2 == 0) {
      if (DAT_800e806e == '\x03') {
        *(undefined1 *)(param_1 + 6) = 1;
        *(undefined2 *)(param_1 + 0x40) = 0xf;
        FUN_8011de34(1,param_2,8,3);
        FUN_8011dc4c();
        uVar9 = thunk_FUN_801260bc();
        return uVar9;
      }
      goto LAB_8010b184;
    }
  }
  else {
    if (bVar2 == 2) {
      *(undefined1 *)(param_1 + 6) = 3;
      *(undefined2 *)(param_1 + 0x4a) = 0xe000;
      psVar6 = (short *)0x200;
      *(undefined2 *)(param_1 + 0x50) = 0x200;
      goto LAB_801141d8;
    }
    iVar5 = 0;
    if (bVar2 == 3) {
      bVar1 = *(char *)(param_1 + 1) == '\0';
      if (!bVar1) {
        sVar3 = *(short *)(param_1 + 0x4a);
        *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + 0x100;
        *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x40;
        *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -0x10;
        *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar3 * 0x100;
      }
      return (uint)bVar1;
    }
  }
  *(short *)(unaff_s0 + 0x48) = (short)(iVar5 >> 4);
  uVar15 = func_0x80083e80((int)*(short *)(unaff_s0 + 0x56));
  uVar13 = (uint)((ulonglong)uVar15 >> 0x20);
  iVar5 = (int)uVar15 >> 4;
  bVar2 = *(byte *)(unaff_s0 + 5);
  uVar9 = (uint)bVar2;
  uVar10 = iVar5 + 0x7e80;
  if (uVar9 == 1) {
    *(undefined1 *)(unaff_s0 + 5) = 2;
    *(byte *)(unaff_s0 + 0x29) = bVar2;
    DAT_800bf81f = (bVar2 - *(char *)(unaff_s0 + 0x5f)) * '\x10';
  }
  else {
    if (uVar9 < 2) {
      if (uVar9 == 0) {
        if ((uint)*(byte *)(iVar5 + 0x7eaa) != (uint)*(byte *)(unaff_s0 + 0x2a)) {
          return (uint)*(byte *)(unaff_s0 + 0x2a);
        }
        uVar13 = 0x1f800000;
        if (*(byte *)(iVar5 + 0x7e85) != 0) {
          return (uint)*(byte *)(iVar5 + 0x7e85);
        }
        *(undefined1 *)(unaff_s0 + 5) = 1;
        DAT_1f800137 = 2;
      }
      goto LAB_8012622c;
    }
    if (uVar9 != 2) {
      if (uVar9 == 3) {
        uVar9 = (uint)*(byte *)(unaff_s0 + 0x2a);
        if (*(byte *)(iVar5 + 0x7eaa) == uVar9) {
          return uVar9;
        }
        *(undefined1 *)(unaff_s0 + 5) = 0;
        return uVar9;
      }
      goto LAB_8012622c;
    }
  }
  uVar9 = unaff_s0;
  uVar15 = func_0x80073328();
  uVar13 = (uint)((ulonglong)uVar15 >> 0x20);
  if ((int)uVar15 == 0) {
    return 0;
  }
  *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
LAB_8012622c:
  uVar14 = param_4[1];
  uVar7 = (uint)((int)unaff_s6 < (int)uVar10);
  if ((unaff_s6 != uVar10) || (unaff_s6 != uVar14)) {
    uVar8 = uVar13;
    uVar11 = uVar10;
    if (uVar7 != 0) {
      uVar8 = uVar9;
      uVar9 = uVar13;
      uVar11 = unaff_s6;
      unaff_s6 = uVar10;
    }
    uVar10 = uVar8;
    uVar13 = uVar11;
    uVar7 = *param_4;
    if ((int)uVar14 < (int)uVar11) {
      uVar10 = *param_4;
      uVar13 = uVar14;
      uVar7 = uVar8;
      uVar14 = uVar11;
    }
    uVar8 = uVar9;
    uVar11 = unaff_s6;
    if ((int)uVar14 < (int)unaff_s6) {
      uVar8 = uVar7;
      uVar7 = uVar9;
      uVar11 = uVar14;
      uVar14 = unaff_s6;
    }
    iVar5 = uVar11 - uVar13;
    iVar12 = uVar14 - uVar13;
    if (uVar11 == uVar13) {
      if ((int)uVar8 <= (int)uVar10) {
        uVar9 = thunk_EXT_FUN_8e5a5a58();
        return uVar9;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && ((uVar8 - uVar10 & 0xffff) == 0x8000)) {
      trap(0x1800);
    }
    if (uVar11 == uVar14) {
      uVar9 = FUN_8012f308();
      return uVar9;
    }
    if (uVar14 == uVar11) {
      trap(0x1c00);
    }
    if ((uVar14 - uVar11 == -1) && ((uVar7 - uVar8 & 0xffff) == 0x8000)) {
      trap(0x1800);
    }
    if (iVar12 == 0) {
      trap(0x1c00);
    }
    if ((iVar12 == -1) && ((uVar7 - uVar10 & 0xffff) == 0x8000)) {
      trap(0x1800);
    }
    if ((int)(-iVar12 * (uVar8 - uVar10) + (uVar7 - uVar10) * iVar5) < 1) {
      for (; (int)uVar13 < (int)uVar11; uVar13 = uVar13 + 1) {
        if ((-1 < (int)uVar13) && ((int)uVar13 < (int)*(short *)(unaff_s3 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      uVar7 = 0x800c0000;
      if ((int)uVar13 <= (int)uVar14) {
        do {
          if ((-1 < (int)uVar13) && ((int)uVar13 < (int)*(short *)(unaff_s3 + 10))) {
            uVar9 = FUN_8012f804();
            return uVar9;
          }
          uVar13 = uVar13 + 1;
          uVar7 = (uint)((int)uVar14 < (int)uVar13);
        } while (uVar7 == 0);
      }
    }
    else {
      for (; (int)uVar13 < (int)uVar11; uVar13 = uVar13 + 1) {
        if ((-1 < (int)uVar13) && ((int)uVar13 < (int)*(short *)(unaff_s3 + 10))) {
          uVar9 = FUN_8012f468();
          return uVar9;
        }
      }
      uVar7 = 0x800c0000;
      if ((int)uVar13 <= (int)uVar14) {
        while (((int)uVar13 < 0 || ((int)*(short *)(unaff_s3 + 10) <= (int)uVar13))) {
          uVar13 = uVar13 + 1;
          if ((int)uVar14 < (int)uVar13) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return uVar7;
}

