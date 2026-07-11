// FUN_8010daac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80120148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010daac(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  int in_v1;
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
  
  if (in_v1 == 1) {
LAB_8010db90:
    in_a3 = 0;
    func_0x800331d8();
    unaff_s0[0x1b] = unaff_s0[0x1b] | 0x40;
    unaff_s0[6] = unaff_s0[6] + '\x01';
    unaff_s0[7] = 0;
    iVar6 = func_0x8009a450();
    iVar6 = iVar6 + -0x8000 >> 2;
    sVar9 = (short)iVar6;
    *(short *)(unaff_s0 + 0x52) = sVar9;
    if (iVar6 << 0x10 < 0) {
      FUN_80116b8c();
      return;
    }
    *(short *)(unaff_s0 + 0x52) = sVar9 + 0x1000;
  }
  else {
    sVar9 = 2;
    if (in_v1 < 2) {
      if (in_v1 != 0) goto LAB_80117154;
      func_0x8004766c();
      func_0x80049674();
      if ((unaff_s1[3] & 1U) == 0) {
        *(short *)(unaff_s0 + 0x50) = _DAT_1f8001a0;
        FUN_80116ac0();
        return;
      }
      uVar5 = _DAT_1f8001a0 + 0x800U & 0xfff;
      *(ushort *)(unaff_s0 + 0x50) = uVar5;
      unaff_s1[2] = uVar5;
      if (0x800 < ((((ushort)(byte)unaff_s0[0x2b] * 0x10 - 0x800 & 0xfff) - unaff_s1[2]) + 0x400 &
                  0xfff)) {
        FUN_80116b08();
        return;
      }
      unaff_s1[3] = unaff_s1[3] | 1;
      func_0x80074590(0x8f,0,0);
      unaff_s0[7] = 0;
      unaff_s0[6] = unaff_s0[6] + '\x01';
      goto LAB_8010db90;
    }
    if (in_v1 != 2) goto LAB_80117154;
  }
  if ((unaff_s0[5] == '\x04') &&
     (uVar5 = *(ushort *)(unaff_s0 + 0x42), *(ushort *)(unaff_s0 + 0x42) = uVar5 - 1,
     (int)((uint)uVar5 << 0x10) < 1)) {
    unaff_s0[5] = 0;
    unaff_s0[0xd] = unaff_s0[0xd] & 0xfd;
  }
  func_0x80049250();
  sVar9 = *(short *)(unaff_s0 + 0x52);
  *(short *)(unaff_s0 + 0x54) =
       *(short *)(unaff_s0 + 0x54) + (short)(-(int)*(short *)(unaff_s0 + 0x54) >> 4);
  *(ushort *)(unaff_s0 + 0x56) = *(short *)(unaff_s0 + 0x50) + sVar9 & 0xfff;
  *(short *)(unaff_s0 + 0x52) = sVar9 - (sVar9 >> 3);
  *(short *)(unaff_s0 + 0x58) =
       *(short *)(unaff_s0 + 0x58) + (short)(-(int)*(short *)(unaff_s0 + 0x58) >> 4);
  if (unaff_s0[5] != '\x04') {
    if ((byte)unaff_s0[3] < 3) {
      FUN_80116740();
      func_0x800440e4();
      unaff_s0[0x78] = unaff_s0[0x78] + '\x01';
      unaff_s1[2] = 0;
      unaff_s1[1] = in_a3;
      sVar9 = *(short *)(unaff_s4 + 0x3a);
      unaff_s1[6] = 0;
      unaff_s1[5] = sVar9;
      sVar9 = *(short *)(unaff_s4 + 0x3a);
      unaff_s1[10] = 0x14;
      unaff_s1[9] = sVar9 + 0x32;
      sVar9 = *(short *)(unaff_s4 + 0x3a);
      unaff_s1[0xe] = 0x14;
      unaff_s1[0xd] = sVar9 + 0x32;
      sVar9 = FUN_80128864();
      if (10 < *(byte *)(unaff_s3 + 3)) {
        sVar9 = 0x20;
      }
      func_0x80133f38(0x1f800000,&DAT_1f800034,(int)sVar9);
      uVar1 = *(undefined2 *)(unaff_s3 + 100);
      uVar2 = *(undefined2 *)(unaff_s3 + 0x66);
      uVar3 = *(undefined2 *)(unaff_s3 + 0x68);
      uVar4 = *(undefined2 *)(unaff_s3 + 0x6a);
      unaff_s1[10] = 0;
      unaff_s1[0xe] = 0;
      unaff_s1[1] = *(short *)(unaff_s4 + 0x3a) + -0x50;
      unaff_s1[5] = *(short *)(unaff_s4 + 0x3a) + -0x50;
      unaff_s1[9] = *(short *)(unaff_s4 + 0x3a);
      unaff_s1[0xd] = *(short *)(unaff_s4 + 0x3a);
      uVar5 = *(ushort *)(unaff_s4 + 0x3a);
      iVar6 = 0;
      *(undefined2 *)(unaff_s5 + 3) = uVar1;
      *(undefined2 *)(unaff_s5 + 6) = uVar2;
      *(undefined2 *)(unaff_s5 + 9) = uVar3;
      uVar7 = uVar5 / 0x50;
      *(undefined2 *)(unaff_s5 + 0xc) = uVar4;
      iVar12 = uVar7 + 1;
      while( true ) {
        if (*(short *)(unaff_s3 + 0x7e) != 0) {
          iVar8 = func_0x80083e80((int)*(short *)(unaff_s3 + 0x7c));
          iVar10 = (iVar6 + 1) * 0x800;
          if (iVar12 == 0) {
            trap(0x1c00);
          }
          if ((iVar12 == -1) && (iVar10 == -0x80000000)) {
            trap(0x1800);
          }
          sVar9 = *(short *)(unaff_s3 + 0x7e);
          iVar10 = func_0x80083e80(iVar10 / iVar12);
          if (iVar12 == 0) {
            trap(0x1c00);
          }
          if ((iVar12 == -1) && (iVar6 << 0xb == -0x80000000)) {
            trap(0x1800);
          }
          iVar11 = (int)(short)(sVar9 * iVar8 >> 0xc);
          sVar9 = (short)(iVar11 * iVar10 >> 0xc);
          *unaff_s1 = sVar9 + in_stack_00000014;
          unaff_s1[4] = sVar9 + in_stack_00000010;
          iVar8 = func_0x80083e80((iVar6 << 0xb) / iVar12);
          sVar9 = (short)(iVar11 * iVar8 >> 0xc);
          unaff_s1[8] = sVar9 + in_stack_00000014;
          unaff_s1[0xc] = sVar9 + in_stack_00000010;
          if (*(char *)(unaff_s3 + 0x29) != '\0') {
            if ((*(int *)(unaff_s4 + 0x30) + (int)unaff_s1[1] <= (int)_DAT_1f800162) &&
               ((int)_DAT_1f800162 < *(int *)(unaff_s4 + 0x30) + (int)unaff_s1[9])) {
              if ((DAT_800e7fc7 & 1) == 0) {
                _DAT_800e7fd2 = *(short *)(unaff_s3 + 0x82) - (*(short *)(unaff_s3 + 0x80) + sVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              _DAT_800e7fd2 = *(short *)(unaff_s3 + 0x80) + sVar9;
            }
          }
        }
        FUN_80128864();
        iVar8 = func_0x80133f38();
        if (iVar8 != 0) break;
        unaff_s1[1] = unaff_s1[1] + -0x50;
        unaff_s1[5] = unaff_s1[5] + -0x50;
        unaff_s1[9] = unaff_s1[9] + -0x50;
        iVar6 = iVar6 + 1;
        unaff_s1[0xd] = unaff_s1[0xd] + -0x50;
        if ((int)(uVar7 + 2) < iVar6) {
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
    sVar9 = FUN_80118f90();
    if (sVar9 != 0) {
      *unaff_s0 = 1;
      unaff_s0[0xd] = unaff_s0[0xd] & 0xfd;
      unaff_s0[0x1b] = unaff_s0[0x1b] & 0xbf;
      unaff_s0[4] = 1;
      unaff_s0[5] = 0;
      unaff_s0[0x2b] = 0;
    }
  }
  sVar9 = func_0x8004766c();
LAB_80117154:
  sVar9 = *(short *)(unaff_s0 + 2) - (sVar9 + (sVar9 >> 1));
  *(short *)(unaff_s0 + 2) = sVar9;
  *(short *)(unaff_s0 + 10) = sVar9 + 100;
  *(short *)(unaff_s0 + 4) = unaff_s1[0x1b];
  iVar6 = func_0x80083e80((int)unaff_s1[0x2a]);
  sVar9 = (short)(iVar6 >> 6);
  sVar9 = *(short *)(unaff_s0 + 4) - (sVar9 + (sVar9 >> 1));
  *(short *)(unaff_s0 + 4) = sVar9;
  *(short *)(unaff_s0 + 0xc) = sVar9 + -400;
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

