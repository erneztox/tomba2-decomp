// FUN_80126808

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80126808(undefined4 param_1,undefined4 param_2,short *param_3,uint param_4)

{
  undefined1 uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  int in_t1;
  short *in_t2;
  undefined1 *unaff_s0;
  uint unaff_s1;
  int unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int iVar5;
  
  uVar3 = (ushort)unaff_s3;
  psVar10 = (short *)0x1;
  uVar8 = unaff_s1;
  iVar4 = FUN_80130788();
  if ((iVar4 == 0) || ((*(ushort *)(unaff_s1 + 0x78) & 2) != 0)) {
    if ((*(ushort *)(unaff_s1 + 0x78) & 1) == 0) {
      uVar8 = (uint)*(ushort *)(unaff_s1 + 0x48) + (uint)*(ushort *)(unaff_s1 + 0x4e);
      param_4 = (int)(short)*(ushort *)(unaff_s1 + 0x4e) * ((int)(uVar8 * 0x10000) >> 0x10);
      unaff_s4 = uVar8;
      if (-1 < (int)param_4) {
        unaff_s0 = &DAT_80150000;
        *(undefined1 *)(unaff_s1 + 5) = 0;
        *(undefined1 *)(unaff_s1 + 6) = 0;
        iVar4 = _DAT_8014a270;
        *(undefined2 *)(unaff_s1 + 0x48) = 0;
        *(undefined2 *)(unaff_s1 + 0x4e) = 0;
        *(undefined2 *)(unaff_s1 + 0x78) = 0;
        *(undefined2 *)(unaff_s1 + 0x76) = 0;
        if (iVar4 != 0) {
          uVar8 = func_0x80074af0();
          _DAT_8014a270 = 0;
          return uVar8;
        }
        goto LAB_80126d28;
      }
    }
  }
  else if ((iVar4 == 1) && ((DAT_800e7fc5 & 1) == 0)) {
    uVar8 = (uint)(short)uVar3;
    iVar5 = func_0x80083e80();
    param_4 = iVar5 * -(int)*(short *)(*(int *)(unaff_s1 + 200) + 4);
    unaff_s5 = 1;
    unaff_s4 = param_4 >> 0xc;
  }
  sVar2 = *(short *)(unaff_s1 + 0x48) + *(short *)(unaff_s1 + 0x4e);
  *(short *)(unaff_s1 + 0x48) = sVar2;
  uVar6 = (uint)sVar2;
  if (0x1600 < (int)uVar6) {
    sVar2 = 0x1600;
    while( true ) {
      psVar10[-4] = sVar2 + (short)uVar6;
      psVar10[-6] = psVar10[-6] + param_3[-6];
      psVar10[-3] = psVar10[-3] + param_3[-5];
      psVar10[-2] = psVar10[-2] + param_3[-4];
      psVar10[-1] = psVar10[-1] + param_3[-3];
      in_t2 = in_t2 + 0xc;
      psVar10[1] = psVar10[1] + param_3[-2];
      param_4 = param_4 + 1;
      psVar10[2] = psVar10[2] + param_3[-1];
      *psVar10 = *psVar10 + *param_3;
      if (in_t1 <= (int)param_4) break;
      psVar10[0xd] = psVar10[0xd] + *in_t2;
      psVar10[0xe] = psVar10[0xe] + param_3[2];
      psVar10[0xf] = psVar10[0xf] + param_3[3];
      psVar10[0x11] = psVar10[0x11] + param_3[4];
      sVar2 = psVar10[0x12];
      uVar6 = (uint)(ushort)param_3[5];
      psVar10 = psVar10 + 0x16;
      param_3 = param_3 + 0xc;
    }
    sVar2 = *(short *)(uVar8 + 0x60);
    *(short *)(uVar8 + 0x60) = sVar2 + -1;
    return (uint)(sVar2 == 1);
  }
  if ((int)uVar6 < -0x1600) {
    *(undefined2 *)(unaff_s1 + 0x48) = 0xea00;
  }
  iVar9 = (int)((uint)*(ushort *)(unaff_s1 + 0x48) << 0x10) >> 0x18;
  iVar5 = unaff_s3 + iVar9;
  uVar3 = (ushort)iVar5;
  iVar7 = iVar5 * 0x10000 >> 0x10;
  if ((iVar7 < *(short *)(unaff_s1 + 100)) || (*(short *)(unaff_s1 + 0x66) < iVar7)) {
    if (((*(char *)(unaff_s1 + 1) != '\0') &&
        ((int)(short)unaff_s0 != (int)*(short *)(unaff_s1 + 100))) &&
       ((int)(short)unaff_s0 != (int)*(short *)(unaff_s1 + 0x66))) {
      func_0x80074af0(_DAT_8014a270);
      _DAT_8014a270 = 0;
      uVar8 = func_0x80074590(0x82,0,0);
      return uVar8;
    }
    iVar5 = iVar5 * 0x10000 >> 0x10;
    if (iVar5 < 0) {
      uVar3 = *(ushort *)(unaff_s1 + 100);
      if ((*(ushort *)(unaff_s1 + 0x78) & 4) == 0) {
        uVar8 = 0xa00;
        if (*(short *)(unaff_s1 + 0x48) < -0xa00) {
          *(undefined2 *)(unaff_s1 + 0x48) = 0xa00;
          *(undefined2 *)(unaff_s1 + 0x4e) = 0xfe00;
          *(undefined1 *)(unaff_s1 + 0x5e) = 1;
          uVar8 = *(byte *)(unaff_s1 + 6) + 1;
          *(char *)(unaff_s1 + 6) = (char)uVar8;
        }
        else {
          *(undefined2 *)(unaff_s1 + 0x48) = 0;
          *(undefined2 *)(unaff_s1 + 0x4e) = 0;
          *(undefined2 *)(unaff_s1 + 0x76) = 0;
          if (iVar4 != 0) goto LAB_80126d28;
          *(undefined2 *)(unaff_s1 + 0x78) = 0;
          *(undefined1 *)(unaff_s1 + 5) = 0;
        }
        return uVar8;
      }
    }
    else if ((0 < iVar5) &&
            (uVar3 = *(ushort *)(unaff_s1 + 0x66), (*(ushort *)(unaff_s1 + 0x78) & 4) == 0)) {
      if (*(short *)(unaff_s1 + 0x48) < 0xa01) {
        *(undefined2 *)(unaff_s1 + 0x48) = 0;
        *(undefined2 *)(unaff_s1 + 0x4e) = 0;
        *(undefined2 *)(unaff_s1 + 0x76) = 0;
        if (iVar4 == 0) {
          *(undefined2 *)(unaff_s1 + 0x78) = 0;
          *(undefined1 *)(unaff_s1 + 5) = 0;
          return 0xfffff600;
        }
      }
      else {
        *(undefined2 *)(unaff_s1 + 0x48) = 0xf600;
        *(undefined2 *)(unaff_s1 + 0x4e) = 0x200;
        *(undefined1 *)(unaff_s1 + 0x5e) = 1;
        *(char *)(unaff_s1 + 6) = *(char *)(unaff_s1 + 6) + '\x01';
        if (*(short *)(unaff_s1 + 0x76) == 1) {
          *(undefined2 *)(unaff_s1 + 0x76) = 2;
          return 2;
        }
      }
    }
  }
  else {
    if (iVar9 < 1) {
      *(undefined2 *)(unaff_s1 + 0x76) = 0;
      return 0;
    }
    if (iVar7 < 0) {
      *(undefined2 *)(unaff_s1 + 0x76) = 1;
      return 1;
    }
  }
LAB_80126d28:
  *(ushort *)(*(int *)(unaff_s1 + 0xc4) + 8) = uVar3 & 0xfff;
  FUN_801314b4();
  if (unaff_s5 != 0) {
    iVar4 = func_0x80083e80((int)(short)uVar3);
    iVar4 = (iVar4 * -(int)*(short *)(*(int *)(unaff_s1 + 200) + 4) >> 0xc) - unaff_s4;
    if (iVar4 * 0x10000 < 0) {
      uVar8 = FUN_8012fd38();
      return uVar8;
    }
    _DAT_800e7eb2 = _DAT_800e7eb2 + (short)iVar4;
  }
  if (*(short *)(unaff_s1 + 0x78) != 0) {
    uVar1 = FUN_801308e0();
    unaff_s0[6] = uVar1;
    func_0x80072efc();
    *(undefined2 *)(unaff_s0 + 0x40) = 0xf;
    uVar8 = FUN_80138e70();
    return uVar8;
  }
  uVar8 = FUN_80131578();
  return uVar8;
}

