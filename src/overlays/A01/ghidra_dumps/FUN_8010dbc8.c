// FUN_8010dbc8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80120148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010dbc8(void)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  short sVar6;
  int in_v0;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short in_a3;
  undefined1 *unaff_s0;
  int iVar11;
  short *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int *unaff_s5;
  int iVar12;
  short in_stack_00000010;
  short in_stack_00000014;
  
  unaff_s0[7] = 0;
  iVar9 = in_v0 + -0x8000 >> 2;
  sVar6 = (short)iVar9;
  *(short *)(unaff_s0 + 0x52) = sVar6;
  if (iVar9 << 0x10 < 0) {
    FUN_80116b8c();
    return;
  }
  *(short *)(unaff_s0 + 0x52) = sVar6 + 0x1000;
  if ((unaff_s0[5] == '\x04') &&
     (uVar1 = *(ushort *)(unaff_s0 + 0x42), *(ushort *)(unaff_s0 + 0x42) = uVar1 - 1,
     (int)((uint)uVar1 << 0x10) < 1)) {
    unaff_s0[5] = 0;
    unaff_s0[0xd] = unaff_s0[0xd] & 0xfd;
  }
  func_0x80049250();
  sVar6 = *(short *)(unaff_s0 + 0x52);
  *(short *)(unaff_s0 + 0x54) =
       *(short *)(unaff_s0 + 0x54) + (short)(-(int)*(short *)(unaff_s0 + 0x54) >> 4);
  *(ushort *)(unaff_s0 + 0x56) = *(short *)(unaff_s0 + 0x50) + sVar6 & 0xfff;
  *(short *)(unaff_s0 + 0x52) = sVar6 - (sVar6 >> 3);
  *(short *)(unaff_s0 + 0x58) =
       *(short *)(unaff_s0 + 0x58) + (short)(-(int)*(short *)(unaff_s0 + 0x58) >> 4);
  if (unaff_s0[5] != '\x04') {
    if ((byte)unaff_s0[3] < 3) {
      FUN_80116740();
      func_0x800440e4();
      unaff_s0[0x78] = unaff_s0[0x78] + '\x01';
      unaff_s1[2] = 0;
      unaff_s1[1] = in_a3;
      sVar6 = *(short *)(unaff_s4 + 0x3a);
      unaff_s1[6] = 0;
      unaff_s1[5] = sVar6;
      sVar6 = *(short *)(unaff_s4 + 0x3a);
      unaff_s1[10] = 0x14;
      unaff_s1[9] = sVar6 + 0x32;
      sVar6 = *(short *)(unaff_s4 + 0x3a);
      unaff_s1[0xe] = 0x14;
      unaff_s1[0xd] = sVar6 + 0x32;
      sVar6 = FUN_80128864();
      if (10 < *(byte *)(unaff_s3 + 3)) {
        sVar6 = 0x20;
      }
      func_0x80133f38(0x1f800000,&DAT_1f800034,(int)sVar6);
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
      uVar1 = *(ushort *)(unaff_s4 + 0x3a);
      iVar9 = 0;
      *(undefined2 *)(unaff_s5 + 3) = uVar2;
      *(undefined2 *)(unaff_s5 + 6) = uVar3;
      *(undefined2 *)(unaff_s5 + 9) = uVar4;
      uVar7 = uVar1 / 0x50;
      *(undefined2 *)(unaff_s5 + 0xc) = uVar5;
      iVar12 = uVar7 + 1;
      while( true ) {
        if (*(short *)(unaff_s3 + 0x7e) != 0) {
          iVar8 = func_0x80083e80((int)*(short *)(unaff_s3 + 0x7c));
          iVar10 = (iVar9 + 1) * 0x800;
          if (iVar12 == 0) {
            trap(0x1c00);
          }
          if ((iVar12 == -1) && (iVar10 == -0x80000000)) {
            trap(0x1800);
          }
          sVar6 = *(short *)(unaff_s3 + 0x7e);
          iVar10 = func_0x80083e80(iVar10 / iVar12);
          if (iVar12 == 0) {
            trap(0x1c00);
          }
          if ((iVar12 == -1) && (iVar9 << 0xb == -0x80000000)) {
            trap(0x1800);
          }
          iVar11 = (int)(short)(sVar6 * iVar8 >> 0xc);
          sVar6 = (short)(iVar11 * iVar10 >> 0xc);
          *unaff_s1 = sVar6 + in_stack_00000014;
          unaff_s1[4] = sVar6 + in_stack_00000010;
          iVar8 = func_0x80083e80((iVar9 << 0xb) / iVar12);
          sVar6 = (short)(iVar11 * iVar8 >> 0xc);
          unaff_s1[8] = sVar6 + in_stack_00000014;
          unaff_s1[0xc] = sVar6 + in_stack_00000010;
          if (*(char *)(unaff_s3 + 0x29) != '\0') {
            if ((*(int *)(unaff_s4 + 0x30) + (int)unaff_s1[1] <= (int)_DAT_1f800162) &&
               ((int)_DAT_1f800162 < *(int *)(unaff_s4 + 0x30) + (int)unaff_s1[9])) {
              if ((DAT_800e7fc7 & 1) == 0) {
                _DAT_800e7fd2 = *(short *)(unaff_s3 + 0x82) - (*(short *)(unaff_s3 + 0x80) + sVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              _DAT_800e7fd2 = *(short *)(unaff_s3 + 0x80) + sVar6;
            }
          }
        }
        FUN_80128864();
        iVar8 = func_0x80133f38();
        if (iVar8 != 0) break;
        unaff_s1[1] = unaff_s1[1] + -0x50;
        unaff_s1[5] = unaff_s1[5] + -0x50;
        unaff_s1[9] = unaff_s1[9] + -0x50;
        iVar9 = iVar9 + 1;
        unaff_s1[0xd] = unaff_s1[0xd] + -0x50;
        if ((int)(uVar7 + 2) < iVar9) {
          func_0x80133f38();
          FUN_801290e4();
          return;
        }
      }
      unaff_s1[1] = unaff_s1[1] + -0xa0;
      unaff_s1[5] = unaff_s1[5] + -0xa0;
      *unaff_s5 = (int)((ushort)unaff_s1[0xd] - 0xa0) >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar6 = FUN_80118f90();
    if (sVar6 != 0) {
      *unaff_s0 = 1;
      unaff_s0[0xd] = unaff_s0[0xd] & 0xfd;
      unaff_s0[0x1b] = unaff_s0[0x1b] & 0xbf;
      unaff_s0[4] = 1;
      unaff_s0[5] = 0;
      unaff_s0[0x2b] = 0;
    }
  }
  sVar6 = func_0x8004766c();
  sVar6 = *(short *)(unaff_s0 + 2) - (sVar6 + (sVar6 >> 1));
  *(short *)(unaff_s0 + 2) = sVar6;
  *(short *)(unaff_s0 + 10) = sVar6 + 100;
  *(short *)(unaff_s0 + 4) = unaff_s1[0x1b];
  iVar9 = func_0x80083e80((int)unaff_s1[0x2a]);
  sVar6 = (short)(iVar9 >> 6);
  sVar6 = *(short *)(unaff_s0 + 4) - (sVar6 + (sVar6 >> 1));
  *(short *)(unaff_s0 + 4) = sVar6;
  *(short *)(unaff_s0 + 0xc) = sVar6 + -400;
  func_0x80074590(7,0,0);
  func_0x80051b04(*(undefined4 *)(unaff_s1 + 0x60),1,0);
  *(undefined2 *)(unaff_s2 + 0x40) = 0;
  *(ushort *)(unaff_s2 + 0xc0) = (ushort)*(byte *)(unaff_s2 + 0x78);
  *(undefined2 *)(unaff_s2 + 0xc2) = *(undefined2 *)(*(int *)(unaff_s3 + 0xc0) + 0x30);
  *(undefined2 *)(unaff_s2 + 0xc4) = *(undefined2 *)(*(int *)(unaff_s3 + 0xc0) + 0x34);
  func_0x80084110(unaff_s1 + 0x7c,*(int *)(unaff_s3 + 0xc0) + 0x18,0x1f800000);
  func_0x80084220(unaff_s2 + 0xc0,&DAT_1f800014);
  _DAT_1f800014 = _DAT_1f800014 + *(int *)(unaff_s1 + 0x86);
  _DAT_1f800018 = _DAT_1f800018 + *(int *)(unaff_s1 + 0x88);
  _DAT_1f80001c = _DAT_1f80001c + *(int *)(unaff_s1 + 0x8a);
  func_0x80084660(0x1f800000);
  func_0x80084690(0x1f800000);
  FUN_80128b08();
  return;
}

