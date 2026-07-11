// FUN_80116be4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80120148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80116be4(int param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  ushort uVar6;
  undefined1 uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  short unaff_s0;
  int iVar13;
  short *unaff_s1;
  int iVar14;
  int unaff_s3;
  int unaff_s4;
  int *unaff_s5;
  int iVar15;
  short unaff_retaddr;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    if (DAT_800bf80e == '\0') {
      return 0;
    }
    func_0x800440e4(&DAT_800e7e80,0x73,4);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (DAT_800bf80e == '\0') {
          return 0;
        }
        func_0x800440e4(&DAT_800e7e80,2,4);
        DAT_800bf9fa = 0x17;
        func_0x80074810(0x96,0);
      }
      goto LAB_8011fc78;
    }
    if (bVar1 != 0) goto LAB_8011fc78;
    func_0x8004d604(0x2b,1);
    func_0x800440e4(&DAT_800e7e80,0x72,4);
    uVar7 = FUN_80115d84(param_1);
    *(undefined1 *)((int)unaff_s5 + 7) = uVar7;
    *(undefined2 *)((int)unaff_s5 + 0x1a) = *(undefined2 *)(unaff_s3 + 0x60);
    *(undefined2 *)((int)unaff_s5 + 0xe) = *(undefined2 *)(unaff_s3 + 0x62);
    uVar2 = *(undefined2 *)(unaff_s3 + 0x6a);
    *(undefined2 *)(unaff_s5 + 3) = *(undefined2 *)(unaff_s3 + 0x68);
    *(undefined2 *)(unaff_s5 + 6) = uVar2;
    *(char *)(unaff_s5 + 9) = (char)unaff_s5[3];
    *(char *)(unaff_s5 + 0xc) = (char)unaff_s5[6];
    *(char *)((int)unaff_s5 + 0x25) = *(char *)((int)unaff_s5 + 0xd) + '\n';
    *(char *)((int)unaff_s5 + 0x31) = *(char *)((int)unaff_s5 + 0x19) + '\n';
    param_4 = *(short *)(unaff_s4 + 0x3a);
  }
  unaff_s1[2] = 0;
LAB_8011fc78:
  unaff_s1[1] = param_4;
  sVar8 = *(short *)(unaff_s4 + 0x3a);
  unaff_s1[6] = 0;
  unaff_s1[5] = sVar8;
  sVar8 = *(short *)(unaff_s4 + 0x3a);
  unaff_s1[10] = 0x14;
  unaff_s1[9] = sVar8 + 0x32;
  sVar8 = *(short *)(unaff_s4 + 0x3a);
  unaff_s1[0xe] = 0x14;
  unaff_s1[0xd] = sVar8 + 0x32;
  sVar8 = FUN_80128864();
  if (10 < *(byte *)(unaff_s3 + 3)) {
    sVar8 = 0x20;
  }
  func_0x80133f38(0x1f800000,&DAT_1f800034,(int)sVar8);
  uVar2 = *(undefined2 *)(unaff_s3 + 100);
  uVar3 = *(undefined2 *)(unaff_s3 + 0x66);
  uVar4 = *(undefined2 *)(unaff_s3 + 0x68);
  uVar5 = *(undefined2 *)(unaff_s3 + 0x6a);
  unaff_s1[10] = 0;
  unaff_s1[0xe] = 0;
  unaff_s1[1] = *(short *)(unaff_s4 + 0x3a) + -0x50;
  unaff_s1[5] = *(short *)(unaff_s4 + 0x3a) + -0x50;
  unaff_s1[9] = *(short *)(unaff_s4 + 0x3a);
  unaff_s1[0xd] = *(short *)(unaff_s4 + 0x3a);
  uVar6 = *(ushort *)(unaff_s4 + 0x3a);
  iVar14 = 0;
  *(undefined2 *)(unaff_s5 + 3) = uVar2;
  *(undefined2 *)(unaff_s5 + 6) = uVar3;
  *(undefined2 *)(unaff_s5 + 9) = uVar4;
  uVar9 = uVar6 / 0x50;
  *(undefined2 *)(unaff_s5 + 0xc) = uVar5;
  iVar15 = uVar9 + 1;
  while( true ) {
    if (*(short *)(unaff_s3 + 0x7e) != 0) {
      iVar10 = func_0x80083e80((int)*(short *)(unaff_s3 + 0x7c));
      iVar12 = (iVar14 + 1) * 0x800;
      if (iVar15 == 0) {
        trap(0x1c00);
      }
      if ((iVar15 == -1) && (iVar12 == -0x80000000)) {
        trap(0x1800);
      }
      sVar8 = *(short *)(unaff_s3 + 0x7e);
      iVar12 = func_0x80083e80(iVar12 / iVar15);
      if (iVar15 == 0) {
        trap(0x1c00);
      }
      if ((iVar15 == -1) && (iVar14 << 0xb == -0x80000000)) {
        trap(0x1800);
      }
      iVar13 = (int)(short)(sVar8 * iVar10 >> 0xc);
      sVar8 = (short)(iVar13 * iVar12 >> 0xc);
      *unaff_s1 = sVar8 + unaff_retaddr;
      unaff_s1[4] = sVar8 + unaff_s0;
      iVar10 = func_0x80083e80((iVar14 << 0xb) / iVar15);
      sVar8 = (short)(iVar13 * iVar10 >> 0xc);
      unaff_s1[8] = sVar8 + unaff_retaddr;
      unaff_s1[0xc] = sVar8 + unaff_s0;
      if (*(char *)(unaff_s3 + 0x29) != '\0') {
        if ((*(int *)(unaff_s4 + 0x30) + (int)unaff_s1[1] <= (int)_DAT_1f800162) &&
           ((int)_DAT_1f800162 < *(int *)(unaff_s4 + 0x30) + (int)unaff_s1[9])) {
          if ((DAT_800e7fc7 & 1) == 0) {
            _DAT_800e7fd2 = *(short *)(unaff_s3 + 0x82) - (*(short *)(unaff_s3 + 0x80) + sVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          _DAT_800e7fd2 = *(short *)(unaff_s3 + 0x80) + sVar8;
        }
      }
    }
    FUN_80128864();
    iVar10 = func_0x80133f38();
    if (iVar10 != 0) break;
    unaff_s1[1] = unaff_s1[1] + -0x50;
    unaff_s1[5] = unaff_s1[5] + -0x50;
    unaff_s1[9] = unaff_s1[9] + -0x50;
    iVar14 = iVar14 + 1;
    unaff_s1[0xd] = unaff_s1[0xd] + -0x50;
    if ((int)(uVar9 + 2) < iVar14) {
      func_0x80133f38();
      uVar11 = FUN_801290e4();
      return uVar11;
    }
  }
  unaff_s1[1] = unaff_s1[1] + -0xa0;
  unaff_s1[5] = unaff_s1[5] + -0xa0;
  *unaff_s5 = (int)((ushort)unaff_s1[0xd] - 0xa0) >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

