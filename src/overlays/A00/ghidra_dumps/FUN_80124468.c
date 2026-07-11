// FUN_80124468

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80124468(uint param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint extraout_v1;
  uint extraout_v1_00;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint in_t0;
  short unaff_s1;
  undefined2 unaff_s2;
  int iVar9;
  int unaff_s4;
  int unaff_s7;
  int unaff_s8;
  ulonglong uVar10;
  undefined8 uVar11;
  
  uVar4 = (uint)*(byte *)(param_1 + 4);
  uVar10 = (ulonglong)CONCAT14(*(byte *)(param_1 + 4),(uint)(uVar4 < 2));
  uVar5 = param_1;
  if (uVar4 == 1) {
    iVar3 = func_0x8007778c(param_1);
    if (iVar3 == 0) {
      return;
    }
    FUN_8012d27c(param_1);
    uVar10 = func_0x800517f8();
  }
  else if (uVar4 < 2 == 0) {
    uVar10 = CONCAT44(uVar4,3);
    if (uVar4 == 2) {
      return;
    }
    if (uVar4 == 3) {
      func_0x8007a624(param_1);
      return;
    }
  }
  else if (uVar4 == 0) {
    param_2 = 0xc;
    iVar3 = func_0x80051b70(param_1,0xc,
                            (int)*(short *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7feb5da0));
    if (iVar3 != 0) {
      return;
    }
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    uVar1 = *(ushort *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7feb5d98);
    uVar10 = CONCAT44(0x8014a268,(uint)uVar1);
    *(ushort *)(param_1 + 0x54) = uVar1;
  }
  uVar4 = (uint)(uVar10 >> 0x20);
  *(undefined2 *)((int)uVar10 + 0xc) = unaff_s2;
  *(short *)(param_1 + 0x44) = unaff_s1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  bVar2 = true;
  if (0x17 < DAT_1f800207) {
    uVar4 = (uint)DAT_800bf816;
    bVar2 = false;
    if (uVar4 == 1) {
      bVar2 = true;
    }
  }
  uVar11 = CONCAT44(uVar4,1);
  if (bVar2) {
    *(undefined1 *)(param_1 + 5) = 1;
    uVar4 = uVar5;
LAB_80136598:
    uVar5 = (uint)((ulonglong)uVar11 >> 0x20);
    uVar6 = uVar5;
    iVar3 = param_2;
    if ((int)uVar11 == 0) goto LAB_801365b4;
  }
  else {
    uVar4 = (uint)DAT_800e7eaa;
    if (uVar4 == 0x1f) {
      func_0x8007703c();
      *(undefined1 *)(param_1 + 6) = 0;
      FUN_8013f4dc();
      return;
    }
    if (uVar4 != 0x22) {
      uVar5 = param_1;
      func_0x8007778c();
      uVar4 = extraout_v1;
    }
    if ((*(char *)(param_1 + 1) != '\0') &&
       (uVar5 = param_1, func_0x800517f8(), uVar4 = extraout_v1_00, DAT_800bf809 == '\0')) {
      iVar3 = (int)unaff_s1;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 < 0x100) {
        uVar4 = *(uint *)(param_1 + 0x68);
        uVar11 = func_0x80074af0();
        *(undefined4 *)(param_1 + 0x68) = 0;
        goto LAB_80136598;
      }
      iVar3 = (int)*(short *)(param_1 + 100);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 < 0x100) {
        func_0x80074af0(*(undefined4 *)(param_1 + 0x68));
        func_0x80074590(0x81,0,0);
        return;
      }
    }
    *(short *)(param_1 + 100) = unaff_s1;
  }
  uVar6 = uVar4;
  uVar4 = uVar5;
  iVar3 = unaff_s7;
  unaff_s7 = param_2;
LAB_801365b4:
  uVar5 = uVar6;
  iVar9 = iVar3;
  if (unaff_s8 < iVar3) {
    uVar5 = in_t0;
    iVar9 = unaff_s8;
    in_t0 = uVar6;
    unaff_s8 = iVar3;
  }
  uVar6 = uVar4;
  iVar3 = unaff_s7;
  if (unaff_s8 < unaff_s7) {
    uVar6 = in_t0;
    in_t0 = uVar4;
    iVar3 = unaff_s8;
    unaff_s8 = unaff_s7;
  }
  iVar7 = iVar3 - iVar9;
  iVar8 = unaff_s8 - iVar9;
  if (iVar3 == iVar9) {
    if ((int)uVar5 < (int)uVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_8013f608();
    return;
  }
  if (iVar7 == 0) {
    trap(0x1c00);
  }
  if ((iVar7 == -1) && ((uVar6 - uVar5 & 0xffff) == 0x8000)) {
    trap(0x1800);
  }
  if (iVar3 == unaff_s8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_s8 == iVar3) {
    trap(0x1c00);
  }
  if ((unaff_s8 - iVar3 == -1) && ((in_t0 - uVar6 & 0xffff) == 0x8000)) {
    trap(0x1800);
  }
  if (iVar8 == 0) {
    trap(0x1c00);
  }
  if ((iVar8 == -1) && ((in_t0 - uVar5 & 0xffff) == 0x8000)) {
    trap(0x1800);
  }
  if ((int)(-iVar8 * (uVar6 - uVar5) + (in_t0 - uVar5) * iVar7) < 1) {
    for (; iVar9 < iVar3; iVar9 = iVar9 + 1) {
      if ((-1 < iVar9) && (iVar9 < *(short *)(unaff_s4 + 10))) {
        FUN_8013f988();
        return;
      }
    }
    for (; iVar9 <= unaff_s8; iVar9 = iVar9 + 1) {
      if ((-1 < iVar9) && (iVar9 < *(short *)(unaff_s4 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  else {
    for (; iVar9 < iVar3; iVar9 = iVar9 + 1) {
      if ((-1 < iVar9) && (iVar9 < *(short *)(unaff_s4 + 10))) {
        FUN_8013f788();
        return;
      }
    }
    if (iVar9 <= unaff_s8) {
      while ((iVar9 < 0 || (*(short *)(unaff_s4 + 10) <= iVar9))) {
        iVar9 = iVar9 + 1;
        if (unaff_s8 < iVar9) {
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

