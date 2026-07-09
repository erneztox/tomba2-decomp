// FUN_801243dc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801243dc(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int in_v0;
  int iVar4;
  short in_v1;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint extraout_v1;
  uint extraout_v1_00;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint in_t0;
  uint unaff_s0;
  short unaff_s1;
  undefined2 uVar11;
  int unaff_s2;
  int unaff_s4;
  uint unaff_s5;
  int unaff_s7;
  int unaff_s8;
  undefined8 uVar12;
  
  if (0x10 < in_v0) {
    *(short *)(param_1 + 0x50) = in_v1 + -8;
    func_0x80083e80();
    func_0x80083f50();
    func_0x80083e80((int)*(short *)(unaff_s0 + 0x20));
    func_0x80083e80(-(int)*(short *)(unaff_s0 + 0x22));
    func_0x80083f50(-(int)*(short *)(unaff_s0 + 0x22));
    goto LAB_801364fc;
  }
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 == 2) {
    iVar4 = FUN_8012d05c();
  }
  else {
    iVar4 = 3;
    if (bVar1 < 3) {
      iVar4 = FUN_8012cf4c();
    }
    else if (bVar1 == 3) {
      FUN_8012d16c();
      return;
    }
  }
  iVar5 = unaff_s2 + (iVar4 >> 0x18);
  iVar4 = iVar4 >> 0x10;
  iVar6 = iVar5 * 0x10000 >> 0x10;
  if (iVar6 < -0x400) {
    iVar5 = -0x400;
    uVar11 = 0xfc00;
    if (-1 < iVar4) goto LAB_8012d480;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    unaff_s1 = (short)(iVar4 >> 2);
    iVar6 = -0x4000000;
    if (0 < (iVar4 >> 2) << 0x10) goto LAB_801364fc;
  }
  else {
    if (0x400 < iVar6) {
      iVar5 = 0x400;
      uVar11 = 0x400;
      if (0 < iVar4) {
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        unaff_s1 = (short)(-iVar4 >> 2);
        iVar6 = 0x4000000;
        if (-1 < (-iVar4 >> 2) << 0x10) goto LAB_8012d484;
        unaff_s1 = 0;
      }
    }
LAB_8012d480:
    uVar11 = (undefined2)iVar5;
    iVar6 = iVar5 << 0x10;
  }
LAB_8012d484:
  uVar2 = *(ushort *)(unaff_s0 + 0x36);
  iVar4 = func_0x80083e80(iVar6 >> 0x10);
  uVar9 = (uint)*(ushort *)(unaff_s0 + 0x94) + (iVar4 * 0x340 >> 0xc);
  uVar7 = (uint)*(byte *)(unaff_s0 + 0x29);
  *(short *)(unaff_s0 + 0x36) = (short)uVar9;
  if (uVar7 == 1) {
    uVar9 = uVar9 - uVar2;
    uVar7 = _DAT_800e7eb6 + uVar9;
    _DAT_800e7eb6 = (ushort)uVar7;
  }
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0xc) = uVar11;
  *(short *)(unaff_s0 + 0x44) = unaff_s1;
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  bVar3 = true;
  if (0x17 < DAT_1f800207) {
    uVar7 = (uint)DAT_800bf816;
    bVar3 = false;
    if (uVar7 == 1) {
      bVar3 = true;
    }
  }
  uVar12 = CONCAT44(uVar7,1);
  if (bVar3) {
    *(undefined1 *)(unaff_s0 + 5) = 1;
    uVar7 = uVar9;
LAB_80136598:
    uVar9 = (uint)((ulonglong)uVar12 >> 0x20);
    uVar8 = uVar9;
    iVar4 = param_2;
    if ((int)uVar12 == 0) goto LAB_801365b4;
  }
  else {
    uVar7 = (uint)DAT_800e7eaa;
    if (uVar7 == 0x1f) {
      func_0x8007703c();
      unaff_s5 = unaff_s0;
LAB_801364fc:
      *(undefined1 *)(unaff_s5 + 6) = 0;
      FUN_8013f4dc();
      return;
    }
    if (uVar7 != 0x22) {
      uVar9 = unaff_s0;
      func_0x8007778c();
      uVar7 = extraout_v1;
    }
    if ((*(char *)(unaff_s0 + 1) != '\0') &&
       (uVar9 = unaff_s0, func_0x800517f8(), uVar7 = extraout_v1_00, DAT_800bf809 == '\0')) {
      iVar4 = (int)unaff_s1;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 < 0x100) {
        uVar7 = *(uint *)(unaff_s0 + 0x68);
        uVar12 = func_0x80074af0();
        *(undefined4 *)(unaff_s0 + 0x68) = 0;
        goto LAB_80136598;
      }
      iVar4 = (int)*(short *)(unaff_s0 + 100);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 < 0x100) {
        func_0x80074af0(*(undefined4 *)(unaff_s0 + 0x68));
        func_0x80074590(0x81,0,0);
        return;
      }
    }
    *(short *)(unaff_s0 + 100) = unaff_s1;
  }
  uVar8 = uVar7;
  uVar7 = uVar9;
  iVar4 = unaff_s7;
  unaff_s7 = param_2;
LAB_801365b4:
  uVar9 = uVar8;
  iVar5 = iVar4;
  if (unaff_s8 < iVar4) {
    uVar9 = in_t0;
    iVar5 = unaff_s8;
    in_t0 = uVar8;
    unaff_s8 = iVar4;
  }
  uVar8 = uVar7;
  iVar4 = unaff_s7;
  if (unaff_s8 < unaff_s7) {
    uVar8 = in_t0;
    in_t0 = uVar7;
    iVar4 = unaff_s8;
    unaff_s8 = unaff_s7;
  }
  iVar6 = iVar4 - iVar5;
  iVar10 = unaff_s8 - iVar5;
  if (iVar4 != iVar5) {
    if (iVar6 == 0) {
      trap(0x1c00);
    }
    if ((iVar6 == -1) && ((uVar8 - uVar9 & 0xffff) == 0x8000)) {
      trap(0x1800);
    }
    if (iVar4 == unaff_s8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (unaff_s8 == iVar4) {
      trap(0x1c00);
    }
    if ((unaff_s8 - iVar4 == -1) && ((in_t0 - uVar8 & 0xffff) == 0x8000)) {
      trap(0x1800);
    }
    if (iVar10 == 0) {
      trap(0x1c00);
    }
    if ((iVar10 == -1) && ((in_t0 - uVar9 & 0xffff) == 0x8000)) {
      trap(0x1800);
    }
    if ((int)(-iVar10 * (uVar8 - uVar9) + (in_t0 - uVar9) * iVar6) < 1) {
      for (; iVar5 < iVar4; iVar5 = iVar5 + 1) {
        if ((-1 < iVar5) && (iVar5 < *(short *)(unaff_s4 + 10))) {
          FUN_8013f988();
          return;
        }
      }
      for (; iVar5 <= unaff_s8; iVar5 = iVar5 + 1) {
        if ((-1 < iVar5) && (iVar5 < *(short *)(unaff_s4 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    else {
      for (; iVar5 < iVar4; iVar5 = iVar5 + 1) {
        if ((-1 < iVar5) && (iVar5 < *(short *)(unaff_s4 + 10))) {
          FUN_8013f788();
          return;
        }
      }
      if (iVar5 <= unaff_s8) {
        while ((iVar5 < 0 || (*(short *)(unaff_s4 + 10) <= iVar5))) {
          iVar5 = iVar5 + 1;
          if (unaff_s8 < iVar5) {
            FUN_8013fab0();
            return;
          }
        }
        FUN_8013f880();
        return;
      }
    }
    return;
  }
  if ((int)uVar9 < (int)uVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_8013f608();
  return;
}

