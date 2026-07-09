// FUN_8012d27c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012d27c(uint param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined2 in_v0;
  undefined2 in_v1;
  uint uVar3;
  int iVar4;
  uint extraout_v1;
  uint extraout_v1_00;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint in_t0;
  uint unaff_s0;
  short unaff_s1;
  undefined2 uVar9;
  int iVar10;
  int unaff_s4;
  uint unaff_s5;
  int unaff_s7;
  int unaff_s8;
  undefined8 uVar11;
  
  *(undefined4 *)(unaff_s0 + 0x68) = 0;
  *(undefined2 *)(unaff_s0 + 0x56) = in_v0;
  *(undefined2 *)(unaff_s0 + 0x90) = in_v1;
  *(short *)(unaff_s0 + 0x92) = (short)param_1;
  *(short *)(unaff_s0 + 0x94) = (short)param_2;
  uVar3 = (uint)*(byte *)(unaff_s0 + 5);
  if (uVar3 < 2) {
    bVar2 = true;
    if ((0x17 < DAT_1f800207) && (bVar2 = false, DAT_800bf816 == 1)) {
      bVar2 = true;
    }
    if (bVar2) {
      return;
    }
    *(undefined2 *)(unaff_s0 + 0x44) = 0;
    uVar3 = *(uint *)(unaff_s0 + 0xc0);
    *(undefined2 *)(unaff_s0 + 0x40) = 0;
    *(undefined2 *)(unaff_s0 + 100) = *(undefined2 *)(unaff_s0 + 0x44);
    *(undefined2 *)(uVar3 + 0xc) = 0x100;
    *(undefined1 *)(unaff_s0 + 5) = 2;
LAB_8012d318:
    if (DAT_800bf809 == '\0') {
      iVar4 = (int)*(short *)(unaff_s0 + 0x44);
      uVar1 = *(ushort *)(*(int *)(unaff_s0 + 0xc0) + 0xc);
      if (iVar4 < 0x501) {
        if (iVar4 < -0x500) {
          iVar10 = (iVar4 + 0x20) * 0x10000 >> 0x10;
          if (iVar10 < -0x4000) goto LAB_8013634c;
          iVar4 = iVar4 + 0x20;
          if (0 < iVar10) {
            iVar4 = 0;
          }
        }
LAB_8012d3b0:
        if (*(char *)(unaff_s0 + 0x29) != '\x01') {
          iVar10 = (int)(short)uVar1;
          if (iVar10 < 0) {
            iVar10 = iVar10 + 7;
          }
          iVar4 = iVar4 - (iVar10 >> 3);
          unaff_s1 = (short)iVar4;
          iVar4 = iVar4 * 0x10000;
          iVar10 = (uint)uVar1 + (iVar4 >> 0x18);
          iVar4 = iVar4 >> 0x10;
          iVar7 = iVar10 * 0x10000 >> 0x10;
          if (iVar7 < -0x400) {
            iVar10 = -0x400;
            uVar9 = 0xfc00;
            if (-1 < iVar4) goto LAB_8012d480;
            if (iVar4 < 0) {
              iVar4 = -iVar4;
            }
            unaff_s1 = (short)(iVar4 >> 2);
            iVar7 = -0x4000000;
            if (0 < (iVar4 >> 2) << 0x10) goto LAB_801364fc;
          }
          else {
            if (0x400 < iVar7) {
              iVar10 = 0x400;
              uVar9 = 0x400;
              if (0 < iVar4) {
                if (iVar4 < 0) {
                  iVar4 = -iVar4;
                }
                unaff_s1 = (short)(-iVar4 >> 2);
                iVar7 = 0x4000000;
                if (-1 < (-iVar4 >> 2) << 0x10) goto LAB_8012d484;
                unaff_s1 = 0;
              }
            }
LAB_8012d480:
            uVar9 = (undefined2)iVar10;
            iVar7 = iVar10 << 0x10;
          }
LAB_8012d484:
          uVar1 = *(ushort *)(unaff_s0 + 0x36);
          iVar4 = func_0x80083e80(iVar7 >> 0x10);
          param_1 = (uint)*(ushort *)(unaff_s0 + 0x94) + (iVar4 * 0x340 >> 0xc);
          uVar3 = (uint)*(byte *)(unaff_s0 + 0x29);
          *(short *)(unaff_s0 + 0x36) = (short)param_1;
          if (uVar3 == 1) {
            param_1 = param_1 - uVar1;
            uVar3 = _DAT_800e7eb6 + param_1;
            _DAT_800e7eb6 = (ushort)uVar3;
          }
          *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0xc) = uVar9;
          *(short *)(unaff_s0 + 0x44) = unaff_s1;
          *(undefined1 *)(unaff_s0 + 0x29) = 0;
          goto LAB_8012d4f0;
        }
        *(undefined2 *)(unaff_s0 + 0x40) = 0;
      }
      else {
        iVar10 = (iVar4 + -0x20) * 0x10000 >> 0x10;
        if ((iVar10 < 0x4001) && (iVar4 = iVar4 + -0x20, -1 < iVar10)) goto LAB_8012d3b0;
LAB_8013634c:
        func_0x80083e80();
        func_0x80083f50();
      }
      func_0x80083e80((int)*(short *)(unaff_s0 + 0x20));
      func_0x80083e80(-(int)*(short *)(unaff_s0 + 0x22));
      func_0x80083f50(-(int)*(short *)(unaff_s0 + 0x22));
LAB_801364fc:
      *(undefined1 *)(unaff_s5 + 6) = 0;
      FUN_8013f4dc();
      return;
    }
LAB_8012d4f0:
    bVar2 = true;
    if (0x17 < DAT_1f800207) {
      uVar3 = (uint)DAT_800bf816;
      bVar2 = false;
      if (uVar3 == 1) {
        bVar2 = true;
      }
    }
    uVar11 = CONCAT44(uVar3,1);
    if (bVar2) {
      *(undefined1 *)(unaff_s0 + 5) = 1;
      uVar3 = param_1;
LAB_80136598:
      uVar5 = (uint)((ulonglong)uVar11 >> 0x20);
      param_1 = uVar5;
      iVar4 = param_2;
      if ((int)uVar11 == 0) goto LAB_801365b4;
    }
    else {
      uVar3 = (uint)DAT_800e7eaa;
      if (uVar3 == 0x1f) {
        func_0x8007703c();
        unaff_s5 = unaff_s0;
        goto LAB_801364fc;
      }
      if (uVar3 != 0x22) {
        param_1 = unaff_s0;
        func_0x8007778c();
        uVar3 = extraout_v1;
      }
      if ((*(char *)(unaff_s0 + 1) != '\0') &&
         (param_1 = unaff_s0, func_0x800517f8(), uVar3 = extraout_v1_00, DAT_800bf809 == '\0')) {
        iVar4 = (int)unaff_s1;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (iVar4 < 0x100) {
          uVar3 = *(uint *)(unaff_s0 + 0x68);
          uVar11 = func_0x80074af0();
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
  }
  else if (uVar3 == 2) goto LAB_8012d318;
  uVar5 = uVar3;
  uVar3 = param_1;
  iVar4 = unaff_s7;
  unaff_s7 = param_2;
LAB_801365b4:
  uVar6 = uVar5;
  iVar10 = iVar4;
  if (unaff_s8 < iVar4) {
    uVar6 = in_t0;
    iVar10 = unaff_s8;
    in_t0 = uVar5;
    unaff_s8 = iVar4;
  }
  uVar5 = uVar3;
  iVar4 = unaff_s7;
  if (unaff_s8 < unaff_s7) {
    uVar5 = in_t0;
    in_t0 = uVar3;
    iVar4 = unaff_s8;
    unaff_s8 = unaff_s7;
  }
  iVar7 = iVar4 - iVar10;
  iVar8 = unaff_s8 - iVar10;
  if (iVar4 == iVar10) {
    if ((int)uVar6 < (int)uVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_8013f608();
    return;
  }
  if (iVar7 == 0) {
    trap(0x1c00);
  }
  if ((iVar7 == -1) && ((uVar5 - uVar6 & 0xffff) == 0x8000)) {
    trap(0x1800);
  }
  if (iVar4 == unaff_s8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_s8 == iVar4) {
    trap(0x1c00);
  }
  if ((unaff_s8 - iVar4 == -1) && ((in_t0 - uVar5 & 0xffff) == 0x8000)) {
    trap(0x1800);
  }
  if (iVar8 == 0) {
    trap(0x1c00);
  }
  if ((iVar8 == -1) && ((in_t0 - uVar6 & 0xffff) == 0x8000)) {
    trap(0x1800);
  }
  if ((int)(-iVar8 * (uVar5 - uVar6) + (in_t0 - uVar6) * iVar7) < 1) {
    for (; iVar10 < iVar4; iVar10 = iVar10 + 1) {
      if ((-1 < iVar10) && (iVar10 < *(short *)(unaff_s4 + 10))) {
        FUN_8013f988();
        return;
      }
    }
    for (; iVar10 <= unaff_s8; iVar10 = iVar10 + 1) {
      if ((-1 < iVar10) && (iVar10 < *(short *)(unaff_s4 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  else {
    for (; iVar10 < iVar4; iVar10 = iVar10 + 1) {
      if ((-1 < iVar10) && (iVar10 < *(short *)(unaff_s4 + 10))) {
        FUN_8013f788();
        return;
      }
    }
    if (iVar10 <= unaff_s8) {
      while ((iVar10 < 0 || (*(short *)(unaff_s4 + 10) <= iVar10))) {
        iVar10 = iVar10 + 1;
        if (unaff_s8 < iVar10) {
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

