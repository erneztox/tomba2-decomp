// FUN_8012681c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8012681c(uint param_1,short *param_2,short *param_3,uint param_4)

{
  undefined1 uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_t1;
  short *in_t2;
  undefined1 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  
  uVar3 = (ushort)unaff_s3;
  if ((*(ushort *)(unaff_s1 + 0x78) & 2) == 0) {
    if ((unaff_s2 == 1) && ((DAT_800e7fc5 & 1) == 0)) {
      param_1 = (uint)(short)uVar3;
      iVar5 = func_0x80083e80();
      param_4 = iVar5 * -(int)*(short *)(*(int *)(unaff_s1 + 200) + 4);
      unaff_s5 = 1;
      unaff_s4 = param_4 >> 0xc;
    }
  }
  else if ((*(ushort *)(unaff_s1 + 0x78) & 1) == 0) {
    param_1 = (uint)*(ushort *)(unaff_s1 + 0x48) + (uint)*(ushort *)(unaff_s1 + 0x4e);
    param_4 = (int)(short)*(ushort *)(unaff_s1 + 0x4e) * ((int)(param_1 * 0x10000) >> 0x10);
    unaff_s4 = param_1;
    if (-1 < (int)param_4) {
      unaff_s0 = &DAT_80150000;
      *(undefined1 *)(unaff_s1 + 5) = 0;
      *(undefined1 *)(unaff_s1 + 6) = 0;
      iVar5 = _DAT_8014a270;
      *(undefined2 *)(unaff_s1 + 0x48) = 0;
      *(undefined2 *)(unaff_s1 + 0x4e) = 0;
      *(undefined2 *)(unaff_s1 + 0x78) = 0;
      *(undefined2 *)(unaff_s1 + 0x76) = 0;
      if (iVar5 != 0) {
        uVar4 = func_0x80074af0();
        _DAT_8014a270 = 0;
        return uVar4;
      }
      goto LAB_80126d28;
    }
  }
  sVar2 = *(short *)(unaff_s1 + 0x48) + *(short *)(unaff_s1 + 0x4e);
  *(short *)(unaff_s1 + 0x48) = sVar2;
  uVar4 = (uint)sVar2;
  if (0x1600 < (int)uVar4) {
    sVar2 = 0x1600;
    while( true ) {
      param_2[-4] = sVar2 + (short)uVar4;
      param_2[-6] = param_2[-6] + param_3[-6];
      param_2[-3] = param_2[-3] + param_3[-5];
      param_2[-2] = param_2[-2] + param_3[-4];
      param_2[-1] = param_2[-1] + param_3[-3];
      in_t2 = in_t2 + 0xc;
      param_2[1] = param_2[1] + param_3[-2];
      param_4 = param_4 + 1;
      param_2[2] = param_2[2] + param_3[-1];
      *param_2 = *param_2 + *param_3;
      if (in_t1 <= (int)param_4) break;
      param_2[0xd] = param_2[0xd] + *in_t2;
      param_2[0xe] = param_2[0xe] + param_3[2];
      param_2[0xf] = param_2[0xf] + param_3[3];
      param_2[0x11] = param_2[0x11] + param_3[4];
      sVar2 = param_2[0x12];
      uVar4 = (uint)(ushort)param_3[5];
      param_2 = param_2 + 0x16;
      param_3 = param_3 + 0xc;
    }
    sVar2 = *(short *)(param_1 + 0x60);
    *(short *)(param_1 + 0x60) = sVar2 + -1;
    return (uint)(sVar2 == 1);
  }
  if ((int)uVar4 < -0x1600) {
    *(undefined2 *)(unaff_s1 + 0x48) = 0xea00;
  }
  iVar7 = (int)((uint)*(ushort *)(unaff_s1 + 0x48) << 0x10) >> 0x18;
  iVar5 = unaff_s3 + iVar7;
  uVar3 = (ushort)iVar5;
  iVar6 = iVar5 * 0x10000 >> 0x10;
  if ((iVar6 < *(short *)(unaff_s1 + 100)) || (*(short *)(unaff_s1 + 0x66) < iVar6)) {
    if (((*(char *)(unaff_s1 + 1) != '\0') &&
        ((int)(short)unaff_s0 != (int)*(short *)(unaff_s1 + 100))) &&
       ((int)(short)unaff_s0 != (int)*(short *)(unaff_s1 + 0x66))) {
      func_0x80074af0(_DAT_8014a270);
      _DAT_8014a270 = 0;
      uVar4 = func_0x80074590(0x82,0,0);
      return uVar4;
    }
    iVar5 = iVar5 * 0x10000 >> 0x10;
    if (iVar5 < 0) {
      uVar3 = *(ushort *)(unaff_s1 + 100);
      if ((*(ushort *)(unaff_s1 + 0x78) & 4) == 0) {
        uVar4 = 0xa00;
        if (*(short *)(unaff_s1 + 0x48) < -0xa00) {
          *(undefined2 *)(unaff_s1 + 0x48) = 0xa00;
          *(undefined2 *)(unaff_s1 + 0x4e) = 0xfe00;
          *(undefined1 *)(unaff_s1 + 0x5e) = 1;
          uVar4 = *(byte *)(unaff_s1 + 6) + 1;
          *(char *)(unaff_s1 + 6) = (char)uVar4;
        }
        else {
          *(undefined2 *)(unaff_s1 + 0x48) = 0;
          *(undefined2 *)(unaff_s1 + 0x4e) = 0;
          *(undefined2 *)(unaff_s1 + 0x76) = 0;
          if (unaff_s2 != 0) goto LAB_80126d28;
          *(undefined2 *)(unaff_s1 + 0x78) = 0;
          *(undefined1 *)(unaff_s1 + 5) = 0;
        }
        return uVar4;
      }
    }
    else if ((0 < iVar5) &&
            (uVar3 = *(ushort *)(unaff_s1 + 0x66), (*(ushort *)(unaff_s1 + 0x78) & 4) == 0)) {
      if (*(short *)(unaff_s1 + 0x48) < 0xa01) {
        *(undefined2 *)(unaff_s1 + 0x48) = 0;
        *(undefined2 *)(unaff_s1 + 0x4e) = 0;
        *(undefined2 *)(unaff_s1 + 0x76) = 0;
        if (unaff_s2 == 0) {
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
    if (iVar7 < 1) {
      *(undefined2 *)(unaff_s1 + 0x76) = 0;
      return 0;
    }
    if (iVar6 < 0) {
      *(undefined2 *)(unaff_s1 + 0x76) = 1;
      return 1;
    }
  }
LAB_80126d28:
  *(ushort *)(*(int *)(unaff_s1 + 0xc4) + 8) = uVar3 & 0xfff;
  FUN_801314b4();
  if (unaff_s5 != 0) {
    iVar5 = func_0x80083e80((int)(short)uVar3);
    iVar5 = (iVar5 * -(int)*(short *)(*(int *)(unaff_s1 + 200) + 4) >> 0xc) - unaff_s4;
    if (iVar5 * 0x10000 < 0) {
      uVar4 = FUN_8012fd38();
      return uVar4;
    }
    _DAT_800e7eb2 = _DAT_800e7eb2 + (short)iVar5;
  }
  if (*(short *)(unaff_s1 + 0x78) != 0) {
    uVar1 = FUN_801308e0();
    unaff_s0[6] = uVar1;
    func_0x80072efc();
    *(undefined2 *)(unaff_s0 + 0x40) = 0xf;
    uVar4 = FUN_80138e70();
    return uVar4;
  }
  uVar4 = FUN_80131578();
  return uVar4;
}

