// FUN_80116cec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80116cec(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  short unaff_s0;
  int iVar9;
  short *unaff_s1;
  uint unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int *unaff_s5;
  int iVar10;
  int unaff_s7;
  uint unaff_s8;
  short unaff_retaddr;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    if (DAT_800bf80e == '\0') {
      return 0;
    }
    func_0x800440e4(&DAT_800e7e80,0x73,4);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    uVar5 = unaff_s2;
  }
  else if (bVar1 < 2) {
    uVar5 = 0;
    if (bVar1 == 0) {
      uVar7 = 0x72;
      uVar8 = 4;
      func_0x800440e4(&DAT_800e7e80);
      sVar3 = FUN_8012c2b4();
      unaff_s1[1] = sVar3;
      unaff_s1[5] = *(short *)(unaff_s4 + 0x3a) + -0x50;
      unaff_s1[9] = *(short *)(unaff_s4 + 0x3a);
      unaff_s1[0xd] = *(short *)(unaff_s4 + 0x3a);
      uVar2 = *(ushort *)(unaff_s4 + 0x3a);
      unaff_s2 = 0;
      *(short *)(unaff_s5 + 3) = (short)param_1;
      *(undefined2 *)(unaff_s5 + 6) = uVar7;
      *(undefined2 *)(unaff_s5 + 9) = uVar8;
      unaff_s8 = uVar2 / 0x50;
      uVar5 = unaff_s2;
    }
  }
  else {
    uVar5 = 0;
    if (bVar1 == 2) {
      if (DAT_800bf80e == '\0') {
        return 0;
      }
      func_0x800440e4(&DAT_800e7e80,2,4);
      DAT_800bf9fa = 0x18;
      func_0x80074810(0x96,0);
      uVar5 = 1;
    }
  }
  *(undefined2 *)(unaff_s5 + 0xc) = param_4;
  if (uVar5 == 0) {
    iVar10 = unaff_s8 + 1;
    do {
      if (*(short *)(unaff_s3 + 0x7e) != 0) {
        iVar4 = func_0x80083e80((int)*(short *)(unaff_s3 + 0x7c));
        iVar6 = (unaff_s2 + 1) * 0x800;
        if (iVar10 == 0) {
          trap(0x1c00);
        }
        if ((iVar10 == -1) && (iVar6 == -0x80000000)) {
          trap(0x1800);
        }
        sVar3 = *(short *)(unaff_s3 + 0x7e);
        iVar6 = func_0x80083e80(iVar6 / iVar10);
        if (iVar10 == 0) {
          trap(0x1c00);
        }
        if ((iVar10 == -1) && (unaff_s2 << 0xb == -0x80000000)) {
          trap(0x1800);
        }
        iVar9 = (int)(short)(sVar3 * iVar4 >> 0xc);
        sVar3 = (short)(iVar9 * iVar6 >> 0xc);
        *unaff_s1 = sVar3 + unaff_retaddr;
        unaff_s1[4] = sVar3 + unaff_s0;
        iVar4 = func_0x80083e80((int)(unaff_s2 << 0xb) / iVar10);
        sVar3 = (short)(iVar9 * iVar4 >> 0xc);
        unaff_s1[8] = sVar3 + unaff_retaddr;
        unaff_s1[0xc] = sVar3 + unaff_s0;
        if (*(char *)(unaff_s3 + 0x29) != '\0') {
          if ((*(int *)(unaff_s4 + 0x30) + (int)unaff_s1[1] <= (int)_DAT_1f800162) &&
             ((int)_DAT_1f800162 < *(int *)(unaff_s4 + 0x30) + (int)unaff_s1[9])) {
            if ((DAT_800e7fc7 & 1) == 0) {
              _DAT_800e7fd2 = *(short *)(unaff_s3 + 0x82) - (*(short *)(unaff_s3 + 0x80) + sVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            _DAT_800e7fd2 = *(short *)(unaff_s3 + 0x80) + sVar3;
          }
        }
      }
      FUN_80128864();
      iVar4 = func_0x80133f38();
      if (iVar4 != 0) {
        unaff_s1[1] = unaff_s1[1] + -0xa0;
        unaff_s1[5] = unaff_s1[5] + -0xa0;
        *unaff_s5 = (int)((ushort)unaff_s1[0xd] - 0xa0) >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_s1[1] = unaff_s1[1] + -0x50;
      unaff_s1[5] = unaff_s1[5] + -0x50;
      unaff_s1[9] = unaff_s1[9] + -0x50;
      unaff_s2 = unaff_s2 + 1;
      uVar5 = (uint)((int)(unaff_s8 + 2) < (int)unaff_s2);
      unaff_s1[0xd] = unaff_s1[0xd] + -0x50;
      unaff_s7 = 0;
    } while (uVar5 == 0);
  }
  if (unaff_s7 != 0) {
    return uVar5;
  }
  func_0x80133f38();
  uVar5 = FUN_801290e4();
  return uVar5;
}

