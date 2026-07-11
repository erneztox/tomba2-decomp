// FUN_80104970

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80120148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80104970(undefined1 *param_1,short *param_2,undefined4 param_3,ushort param_4)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  short unaff_s0;
  int iVar13;
  short unaff_s1;
  int iVar14;
  uint unaff_s3;
  uint unaff_s4;
  int *unaff_s5;
  
  iVar14 = -0x7ff407f8;
  if (DAT_800bf80d != '\0') {
    return;
  }
  if (DAT_800bf80a != '\0') {
    return;
  }
  if (*(char *)((int)param_2 + 3) == '\b') {
    iVar9 = func_0x80022f04();
    if (iVar9 == 0) {
      return;
    }
    if (_DAT_1f800094 != 0) {
      return;
    }
    uVar2 = param_2[0x43];
    param_4 = param_2[0x42];
    uVar3 = param_2[0x19];
    *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) - (*(short *)(param_1 + 0x44) >> 2);
    iVar9 = *(int *)(param_1 + 0x30) +
            ((int)((((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84)) +
                    ((uint)uVar2 - (uint)param_4) +
                   ((uint)uVar3 - (uint)*(ushort *)(param_1 + 0x32))) * 0x10000) >> 4);
    *(int *)(param_1 + 0x30) = iVar9;
    DAT_800bf81e = 0;
    goto LAB_8010dbcc;
  }
  uVar2 = param_2[0x42];
  unaff_s3 = (uint)uVar2;
  uVar3 = param_2[0x43];
  unaff_s4 = (uint)uVar3;
  if (param_1[0x78] == '\0') {
    if ((*(ushort *)(param_1 + 0x17e) & 0x40) != 0) {
      param_2[0x42] = (short)(unaff_s3 + 400);
                    /* WARNING: Could not recover jumptable at 0x8010da3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((unaff_s3 + 400) * 4 + (unaff_s4 - 0x661c)))();
      return;
    }
    param_2[0x42] = uVar2 + 200;
    param_2[0x43] = param_2[0x43] + 200;
  }
  iVar14 = func_0x80022f04(param_1,param_2);
  if (iVar14 == 0) goto LAB_80104c28;
  DAT_800bf81e = 0;
  iVar14 = ((uint)*(ushort *)(param_1 + 0x84) + (uint)(ushort)param_2[0x42] + 300) -
           ((uint)(ushort)param_2[0x19] - (uint)*(ushort *)(param_1 + 0x32));
  if (_DAT_1f800090 != 0) {
    DAT_800bf848 = DAT_1f800090;
    FUN_8010daac();
    return;
  }
  DAT_800bf848 = 1;
  if (param_1[0x78] == '\0') {
    func_0x80074590(0x25,0,0);
  }
  bVar1 = _DAT_1f800094 == 0;
  *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) - (*(short *)(param_1 + 0x44) >> 2);
  if (bVar1) {
    iVar9 = (uint)*(ushort *)(param_1 + 0x4a) + iVar14 * -2;
    *(short *)(param_1 + 0x4a) = (short)iVar9;
    iVar9 = iVar9 * 0x10000 >> 0x10;
    if (iVar9 < 0x281) {
      if (iVar14 * 0x10000 >> 0x10 < 500) {
        uVar10 = 0xffffc200;
        if (iVar9 < -0x3e00) {
          *(undefined2 *)(param_1 + 0x4a) = 0xc200;
          goto LAB_8010db48;
        }
      }
      else if (iVar9 < -0x2800) {
        *(undefined2 *)(param_1 + 0x4a) = 0xd800;
      }
      uVar10 = (uint)(byte)param_1[0x46];
      if ((((uVar10 - 0x13 < 3) || (uVar10 == 0xca)) || (uVar10 == 0xe5)) || (uVar10 == 0xe6)) {
        if ((_DAT_1f800090 == 0) || (param_1[0x145] != '\x01')) {
          func_0x80054d14(param_1,0x12,4);
          param_2[0x42] = uVar2;
          FUN_8010dbc8();
          return;
        }
        DAT_800bf848 = 4;
      }
LAB_80104c28:
      param_2[0x42] = uVar2;
      param_2[0x43] = uVar3;
      return;
    }
    uVar10 = 0x280;
LAB_8010db48:
    if (0x800 < uVar10) {
      FUN_80116b08();
      return;
    }
    param_2[3] = param_2[3] | 1;
    func_0x80074590(0x8f,0,0);
    param_1[7] = 0;
    param_1[6] = param_1[6] + '\x01';
    param_4 = 0;
    func_0x800331d8(param_1,*(undefined4 *)(param_1 + 0xc4),0xffffff9c);
    param_1[0x1b] = param_1[0x1b] | 0x40;
    param_1[6] = param_1[6] + '\x01';
  }
  else {
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (iVar14 * 0x10000 >> 4);
  }
  param_1[7] = 0;
  iVar9 = func_0x8009a450();
LAB_8010dbcc:
  iVar9 = iVar9 + -0x8000 >> 2;
  sVar8 = (short)iVar9;
  *(short *)(param_1 + 0x52) = sVar8;
  if (iVar9 << 0x10 < 0) {
    FUN_80116b8c();
    return;
  }
  *(short *)(param_1 + 0x52) = sVar8 + 0x1000;
  if ((param_1[5] == '\x04') &&
     (uVar2 = *(ushort *)(param_1 + 0x42), *(ushort *)(param_1 + 0x42) = uVar2 - 1,
     (int)((uint)uVar2 << 0x10) < 1)) {
    param_1[5] = 0;
    param_1[0xd] = param_1[0xd] & 0xfd;
  }
  func_0x80049250(param_1,0,0x5a);
  sVar8 = *(short *)(param_1 + 0x52);
  *(short *)(param_1 + 0x54) =
       *(short *)(param_1 + 0x54) + (short)(-(int)*(short *)(param_1 + 0x54) >> 4);
  *(ushort *)(param_1 + 0x56) = *(short *)(param_1 + 0x50) + sVar8 & 0xfff;
  *(short *)(param_1 + 0x52) = sVar8 - (sVar8 >> 3);
  *(short *)(param_1 + 0x58) =
       *(short *)(param_1 + 0x58) + (short)(-(int)*(short *)(param_1 + 0x58) >> 4);
  if (param_1[5] != '\x04') {
    if ((byte)param_1[3] < 3) {
      FUN_80116740(param_1,0xd,0x78);
      func_0x800440e4();
      param_1[0x78] = param_1[0x78] + '\x01';
      param_2[2] = 0;
      param_2[1] = param_4;
      sVar8 = *(short *)(unaff_s4 + 0x3a);
      param_2[6] = 0;
      param_2[5] = sVar8;
      sVar8 = *(short *)(unaff_s4 + 0x3a);
      param_2[10] = 0x14;
      param_2[9] = sVar8 + 0x32;
      sVar8 = *(short *)(unaff_s4 + 0x3a);
      param_2[0xe] = 0x14;
      param_2[0xd] = sVar8 + 0x32;
      sVar8 = FUN_80128864();
      if (10 < *(byte *)(unaff_s3 + 3)) {
        sVar8 = 0x20;
      }
      func_0x80133f38(0x1f800000,&DAT_1f800034,(int)sVar8);
      uVar4 = *(undefined2 *)(unaff_s3 + 100);
      uVar5 = *(undefined2 *)(unaff_s3 + 0x66);
      uVar6 = *(undefined2 *)(unaff_s3 + 0x68);
      uVar7 = *(undefined2 *)(unaff_s3 + 0x6a);
      param_2[10] = 0;
      param_2[0xe] = 0;
      param_2[1] = *(short *)(unaff_s4 + 0x3a) + -0x50;
      param_2[5] = *(short *)(unaff_s4 + 0x3a) + -0x50;
      param_2[9] = *(short *)(unaff_s4 + 0x3a);
      param_2[0xd] = *(short *)(unaff_s4 + 0x3a);
      uVar2 = *(ushort *)(unaff_s4 + 0x3a);
      iVar14 = 0;
      *(undefined2 *)(unaff_s5 + 3) = uVar4;
      *(undefined2 *)(unaff_s5 + 6) = uVar5;
      *(undefined2 *)(unaff_s5 + 9) = uVar6;
      uVar10 = uVar2 / 0x50;
      *(undefined2 *)(unaff_s5 + 0xc) = uVar7;
      iVar9 = uVar10 + 1;
      while( true ) {
        if (*(short *)(unaff_s3 + 0x7e) != 0) {
          iVar11 = func_0x80083e80((int)*(short *)(unaff_s3 + 0x7c));
          iVar12 = (iVar14 + 1) * 0x800;
          if (iVar9 == 0) {
            trap(0x1c00);
          }
          if ((iVar9 == -1) && (iVar12 == -0x80000000)) {
            trap(0x1800);
          }
          sVar8 = *(short *)(unaff_s3 + 0x7e);
          iVar12 = func_0x80083e80(iVar12 / iVar9);
          if (iVar9 == 0) {
            trap(0x1c00);
          }
          if ((iVar9 == -1) && (iVar14 << 0xb == -0x80000000)) {
            trap(0x1800);
          }
          iVar13 = (int)(short)(sVar8 * iVar11 >> 0xc);
          sVar8 = (short)(iVar13 * iVar12 >> 0xc);
          *param_2 = sVar8 + unaff_s1;
          param_2[4] = sVar8 + unaff_s0;
          iVar11 = func_0x80083e80((iVar14 << 0xb) / iVar9);
          sVar8 = (short)(iVar13 * iVar11 >> 0xc);
          param_2[8] = sVar8 + unaff_s1;
          param_2[0xc] = sVar8 + unaff_s0;
          if (*(char *)(unaff_s3 + 0x29) != '\0') {
            if ((*(int *)(unaff_s4 + 0x30) + (int)param_2[1] <= (int)_DAT_1f800162) &&
               ((int)_DAT_1f800162 < *(int *)(unaff_s4 + 0x30) + (int)param_2[9])) {
              if ((DAT_800e7fc7 & 1) == 0) {
                _DAT_800e7fd2 = *(short *)(unaff_s3 + 0x82) - (*(short *)(unaff_s3 + 0x80) + sVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              _DAT_800e7fd2 = *(short *)(unaff_s3 + 0x80) + sVar8;
            }
          }
        }
        FUN_80128864(unaff_s3,(int)(((uint)*(ushort *)(unaff_s4 + 0x30) + (uint)(ushort)param_2[1])
                                   * 0x10000) >> 0x10);
        iVar11 = func_0x80133f38();
        if (iVar11 != 0) break;
        param_2[1] = param_2[1] + -0x50;
        param_2[5] = param_2[5] + -0x50;
        param_2[9] = param_2[9] + -0x50;
        iVar14 = iVar14 + 1;
        param_2[0xd] = param_2[0xd] + -0x50;
        if ((int)(uVar10 + 2) < iVar14) {
          func_0x80133f38();
          FUN_801290e4();
          return;
        }
      }
      param_2[1] = param_2[1] + -0xa0;
      param_2[5] = param_2[5] + -0xa0;
      *unaff_s5 = (int)((ushort)param_2[0xd] - 0xa0) >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar8 = FUN_80118f90(param_1,0xd,0x78);
    if (sVar8 != 0) {
      *param_1 = 1;
      param_1[0xd] = param_1[0xd] & 0xfd;
      param_1[0x1b] = param_1[0x1b] & 0xbf;
      param_1[4] = 1;
      param_1[5] = 0;
      param_1[0x2b] = 0;
    }
  }
  sVar8 = func_0x8004766c(param_1);
  sVar8 = *(short *)(param_1 + 2) - (sVar8 + (sVar8 >> 1));
  *(short *)(param_1 + 2) = sVar8;
  *(short *)(param_1 + 10) = sVar8 + 100;
  *(short *)(param_1 + 4) = param_2[0x1b];
  iVar9 = func_0x80083e80((int)param_2[0x2a]);
  sVar8 = (short)(iVar9 >> 6);
  sVar8 = *(short *)(param_1 + 4) - (sVar8 + (sVar8 >> 1));
  *(short *)(param_1 + 4) = sVar8;
  *(short *)(param_1 + 0xc) = sVar8 + -400;
  func_0x80074590(7,0,0);
  func_0x80051b04(*(undefined4 *)(param_2 + 0x60),1,0);
  *(undefined2 *)(iVar14 + 0x40) = 0;
  *(ushort *)(iVar14 + 0xc0) = (ushort)*(byte *)(iVar14 + 0x78);
  *(undefined2 *)(iVar14 + 0xc2) = *(undefined2 *)(*(int *)(unaff_s3 + 0xc0) + 0x30);
  *(undefined2 *)(iVar14 + 0xc4) = *(undefined2 *)(*(int *)(unaff_s3 + 0xc0) + 0x34);
  func_0x80084110(param_2 + 0x7c,*(int *)(unaff_s3 + 0xc0) + 0x18,0x1f800000);
  func_0x80084220(iVar14 + 0xc0,&DAT_1f800014);
  _DAT_1f800014 = _DAT_1f800014 + *(int *)(param_2 + 0x86);
  _DAT_1f800018 = _DAT_1f800018 + *(int *)(param_2 + 0x88);
  _DAT_1f80001c = _DAT_1f80001c + *(int *)(param_2 + 0x8a);
  func_0x80084660(0x1f800000);
  func_0x80084690(0x1f800000);
  FUN_80128b08(unaff_s3);
  return;
}

