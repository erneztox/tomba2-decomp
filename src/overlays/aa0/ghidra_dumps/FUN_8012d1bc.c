// FUN_8012d1bc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012d1bc(byte *param_1,uint param_2)

{
  ushort uVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  byte *extraout_v1;
  byte *extraout_v1_00;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *in_t0;
  short unaff_s1;
  undefined2 uVar11;
  uint uVar12;
  int unaff_s4;
  byte *unaff_s5;
  uint unaff_s7;
  uint unaff_s8;
  undefined8 uVar13;
  
  pbVar3 = (byte *)(uint)param_1[4];
  pbVar6 = param_1;
  if (pbVar3 == (byte *)0x1) {
LAB_8012d290:
    pbVar3 = (byte *)(uint)param_1[5];
    if (pbVar3 < (byte *)0x2) {
      bVar2 = true;
      if ((0x17 < DAT_1f800207) && (bVar2 = false, DAT_800bf816 == 1)) {
        bVar2 = true;
      }
      if (bVar2) {
        return;
      }
      param_1[0x44] = 0;
      param_1[0x45] = 0;
      pbVar3 = *(byte **)(param_1 + 0xc0);
      param_1[0x40] = 0;
      param_1[0x41] = 0;
      *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x44);
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 1;
      param_1[5] = 2;
    }
    else {
      pbVar7 = pbVar6;
      if (pbVar3 != (byte *)0x2) goto LAB_801365a8;
    }
    if (DAT_800bf809 == '\0') {
      iVar9 = (int)*(short *)(param_1 + 0x44);
      if (iVar9 < 0x501) {
        if (iVar9 < -0x500) {
          iVar10 = (iVar9 + 0x20) * 0x10000 >> 0x10;
          if (iVar10 < -0x4000) goto LAB_8013634c;
          iVar9 = iVar9 + 0x20;
          if (0 < iVar10) {
            iVar9 = 0;
          }
        }
LAB_8012d3b0:
        if (param_1[0x29] != 1) {
          iVar10 = (int)(short)*(ushort *)(*(int *)(param_1 + 0xc0) + 0xc);
          if (iVar10 < 0) {
            iVar10 = iVar10 + 7;
          }
          iVar9 = iVar9 - (iVar10 >> 3);
          unaff_s1 = (short)iVar9;
          iVar9 = iVar9 * 0x10000;
          iVar10 = (uint)*(ushort *)(*(int *)(param_1 + 0xc0) + 0xc) + (iVar9 >> 0x18);
          iVar9 = iVar9 >> 0x10;
          iVar4 = iVar10 * 0x10000 >> 0x10;
          if (iVar4 < -0x400) {
            iVar10 = -0x400;
            uVar11 = 0xfc00;
            if (-1 < iVar9) goto LAB_8012d480;
            if (iVar9 < 0) {
              iVar9 = -iVar9;
            }
            unaff_s1 = (short)(iVar9 >> 2);
            iVar4 = -0x4000000;
            if (0 < (iVar9 >> 2) << 0x10) goto LAB_801364fc;
          }
          else {
            if (0x400 < iVar4) {
              iVar10 = 0x400;
              uVar11 = 0x400;
              if (0 < iVar9) {
                if (iVar9 < 0) {
                  iVar9 = -iVar9;
                }
                unaff_s1 = (short)(-iVar9 >> 2);
                iVar4 = 0x4000000;
                if (-1 < (-iVar9 >> 2) << 0x10) goto LAB_8012d484;
                unaff_s1 = 0;
              }
            }
LAB_8012d480:
            uVar11 = (undefined2)iVar10;
            iVar4 = iVar10 << 0x10;
          }
LAB_8012d484:
          uVar1 = *(ushort *)(param_1 + 0x36);
          iVar9 = func_0x80083e80(iVar4 >> 0x10);
          pbVar6 = (byte *)((uint)*(ushort *)(param_1 + 0x94) + (iVar9 * 0x340 >> 0xc));
          pbVar3 = (byte *)(uint)param_1[0x29];
          *(short *)(param_1 + 0x36) = (short)pbVar6;
          if (pbVar3 == (byte *)0x1) {
            pbVar6 = pbVar6 + -(uint)uVar1;
            pbVar3 = pbVar6 + _DAT_800e7eb6;
            _DAT_800e7eb6 = (ushort)pbVar3;
          }
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = uVar11;
          *(short *)(param_1 + 0x44) = unaff_s1;
          param_1[0x29] = 0;
          goto LAB_8012d4f0;
        }
        param_1[0x40] = 0;
        param_1[0x41] = 0;
      }
      else {
        iVar10 = (iVar9 + -0x20) * 0x10000 >> 0x10;
        if ((iVar10 < 0x4001) && (iVar9 = iVar9 + -0x20, -1 < iVar10)) goto LAB_8012d3b0;
LAB_8013634c:
        func_0x80083e80();
        func_0x80083f50();
      }
      func_0x80083e80((int)*(short *)(param_1 + 0x20));
      func_0x80083e80(-(int)*(short *)(param_1 + 0x22));
      func_0x80083f50(-(int)*(short *)(param_1 + 0x22));
LAB_801364fc:
      unaff_s5[6] = 0;
      FUN_8013f4dc();
      return;
    }
LAB_8012d4f0:
    bVar2 = true;
    if (0x17 < DAT_1f800207) {
      pbVar3 = (byte *)(uint)DAT_800bf816;
      bVar2 = false;
      if (pbVar3 == (byte *)0x1) {
        bVar2 = true;
      }
    }
    uVar13 = CONCAT44(pbVar3,1);
    if (bVar2) {
      param_1[5] = 1;
LAB_80136598:
      pbVar5 = (byte *)((ulonglong)uVar13 >> 0x20);
      pbVar3 = pbVar6;
      pbVar7 = pbVar5;
      uVar8 = param_2;
      if ((int)uVar13 == 0) goto LAB_801365b4;
    }
    else {
      pbVar3 = (byte *)(uint)DAT_800e7eaa;
      if (pbVar3 == &DAT_0000001f) {
        func_0x8007703c();
        unaff_s5 = param_1;
        goto LAB_801364fc;
      }
      if (pbVar3 != (byte *)0x22) {
        pbVar6 = param_1;
        func_0x8007778c();
        pbVar3 = extraout_v1;
      }
      if ((param_1[1] != 0) &&
         (pbVar6 = param_1, func_0x800517f8(), pbVar3 = extraout_v1_00, DAT_800bf809 == '\0')) {
        iVar9 = (int)unaff_s1;
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        if (iVar9 < 0x100) {
          pbVar6 = *(byte **)(param_1 + 0x68);
          uVar13 = func_0x80074af0();
          param_1[0x68] = 0;
          param_1[0x69] = 0;
          param_1[0x6a] = 0;
          param_1[0x6b] = 0;
          goto LAB_80136598;
        }
        iVar9 = (int)*(short *)(param_1 + 100);
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        if (iVar9 < 0x100) {
          func_0x80074af0(*(undefined4 *)(param_1 + 0x68));
          func_0x80074590(0x81,0,0);
          return;
        }
      }
      *(short *)(param_1 + 100) = unaff_s1;
      pbVar7 = pbVar6;
    }
  }
  else if (pbVar3 < (byte *)0x2) {
    pbVar7 = param_1;
    if (pbVar3 == (byte *)0x0) {
      iVar9 = func_0x80051b70(param_1,0xc,6);
      if (iVar9 != 0) {
        return;
      }
      param_1[0x80] = 0x40;
      param_1[0x81] = 2;
      param_1[0x29] = 0;
      param_1[0x82] = 0x80;
      param_1[0x83] = 4;
      *param_1 = *param_1 | 1;
      func_0x8004766c(param_1);
      func_0x80048750(param_1);
      uVar11 = _DAT_1f8001a0;
      pbVar6 = (byte *)(uint)*(ushort *)(param_1 + 0x32);
      param_2 = (uint)*(ushort *)(param_1 + 0x36);
      param_1[0x54] = 0;
      param_1[0x55] = 0;
      param_1[0x58] = 0;
      param_1[0x59] = 0;
      param_1[0x62] = 0;
      param_1[99] = 0;
      param_1[4] = 1;
      param_1[5] = 0;
      param_1[0x68] = 0;
      param_1[0x69] = 0;
      param_1[0x6a] = 0;
      param_1[0x6b] = 0;
      *(undefined2 *)(param_1 + 0x56) = uVar11;
      *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_1 + 0x2e);
      *(ushort *)(param_1 + 0x92) = *(ushort *)(param_1 + 0x32);
      *(ushort *)(param_1 + 0x94) = *(ushort *)(param_1 + 0x36);
      goto LAB_8012d290;
    }
  }
  else {
    bVar2 = pbVar3 < &DAT_00000004;
    pbVar3 = param_1;
    pbVar7 = (byte *)(uint)bVar2;
    if ((byte *)(uint)bVar2 == (byte *)0x0) {
      return;
    }
  }
LAB_801365a8:
  pbVar5 = pbVar3;
  pbVar6 = pbVar7;
  uVar8 = unaff_s7;
  unaff_s7 = param_2;
LAB_801365b4:
  pbVar3 = pbVar5;
  uVar12 = uVar8;
  if ((int)unaff_s8 < (int)uVar8) {
    pbVar3 = in_t0;
    uVar12 = unaff_s8;
    in_t0 = pbVar5;
    unaff_s8 = uVar8;
  }
  pbVar7 = pbVar6;
  uVar8 = unaff_s7;
  if ((int)unaff_s8 < (int)unaff_s7) {
    pbVar7 = in_t0;
    in_t0 = pbVar6;
    uVar8 = unaff_s8;
    unaff_s8 = unaff_s7;
  }
  iVar9 = uVar8 - uVar12;
  iVar10 = unaff_s8 - uVar12;
  if (uVar8 == uVar12) {
    if ((int)pbVar7 <= (int)pbVar3) {
      FUN_8013f608();
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar9 == 0) {
    trap(0x1c00);
  }
  if ((iVar9 == -1) && (((int)pbVar7 - (int)pbVar3 & 0xffffU) == 0x8000)) {
    trap(0x1800);
  }
  if (uVar8 != unaff_s8) {
    if (unaff_s8 == uVar8) {
      trap(0x1c00);
    }
    if ((unaff_s8 - uVar8 == -1) && (((int)in_t0 - (int)pbVar7 & 0xffffU) == 0x8000)) {
      trap(0x1800);
    }
    if (iVar10 == 0) {
      trap(0x1c00);
    }
    if ((iVar10 == -1) && (((int)in_t0 - (int)pbVar3 & 0xffffU) == 0x8000)) {
      trap(0x1800);
    }
    if (-iVar10 * ((int)pbVar7 - (int)pbVar3) + ((int)in_t0 - (int)pbVar3) * iVar9 < 1) {
      for (; (int)uVar12 < (int)uVar8; uVar12 = uVar12 + 1) {
        if ((-1 < (int)uVar12) && ((int)uVar12 < (int)*(short *)(unaff_s4 + 10))) {
          FUN_8013f988();
          return;
        }
      }
      for (; (int)uVar12 <= (int)unaff_s8; uVar12 = uVar12 + 1) {
        if ((-1 < (int)uVar12) && ((int)uVar12 < (int)*(short *)(unaff_s4 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    else {
      for (; (int)uVar12 < (int)uVar8; uVar12 = uVar12 + 1) {
        if ((-1 < (int)uVar12) && ((int)uVar12 < (int)*(short *)(unaff_s4 + 10))) {
          FUN_8013f788();
          return;
        }
      }
      if ((int)uVar12 <= (int)unaff_s8) {
        while (((int)uVar12 < 0 || ((int)*(short *)(unaff_s4 + 10) <= (int)uVar12))) {
          uVar12 = uVar12 + 1;
          if ((int)unaff_s8 < (int)uVar12) {
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
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

