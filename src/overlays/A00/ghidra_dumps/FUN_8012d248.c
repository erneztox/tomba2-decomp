// FUN_8012d248

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012d248(void)

{
  ushort uVar1;
  bool bVar2;
  undefined1 in_v0;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *extraout_v1;
  undefined1 *extraout_v1_00;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 *in_t0;
  undefined1 *unaff_s0;
  short unaff_s1;
  undefined1 unaff_s2;
  undefined2 uVar11;
  int unaff_s4;
  undefined1 *unaff_s5;
  uint unaff_s7;
  uint unaff_s8;
  undefined8 uVar12;
  
  *unaff_s0 = in_v0;
  func_0x80048750();
  uVar11 = _DAT_1f8001a0;
  puVar6 = (undefined1 *)(uint)*(ushort *)(unaff_s0 + 0x32);
  uVar7 = (uint)*(ushort *)(unaff_s0 + 0x36);
  *(undefined2 *)(unaff_s0 + 0x54) = 0;
  *(undefined2 *)(unaff_s0 + 0x58) = 0;
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  unaff_s0[4] = unaff_s2;
  unaff_s0[5] = 0;
  *(undefined4 *)(unaff_s0 + 0x68) = 0;
  *(undefined2 *)(unaff_s0 + 0x56) = uVar11;
  *(undefined2 *)(unaff_s0 + 0x90) = *(undefined2 *)(unaff_s0 + 0x2e);
  *(ushort *)(unaff_s0 + 0x92) = *(ushort *)(unaff_s0 + 0x32);
  *(ushort *)(unaff_s0 + 0x94) = *(ushort *)(unaff_s0 + 0x36);
  puVar3 = (undefined1 *)(uint)(byte)unaff_s0[5];
  if (puVar3 < (undefined1 *)0x2) {
    bVar2 = true;
    if ((0x17 < DAT_1f800207) && (bVar2 = false, DAT_800bf816 == 1)) {
      bVar2 = true;
    }
    if (bVar2) {
      return;
    }
    *(undefined2 *)(unaff_s0 + 0x44) = 0;
    puVar3 = *(undefined1 **)(unaff_s0 + 0xc0);
    *(undefined2 *)(unaff_s0 + 0x40) = 0;
    *(undefined2 *)(unaff_s0 + 100) = *(undefined2 *)(unaff_s0 + 0x44);
    *(undefined2 *)(puVar3 + 0xc) = 0x100;
    unaff_s0[5] = 2;
LAB_8012d318:
    if (DAT_800bf809 == '\0') {
      iVar9 = (int)*(short *)(unaff_s0 + 0x44);
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
        if (unaff_s0[0x29] != '\x01') {
          iVar10 = (int)(short)*(ushort *)(*(int *)(unaff_s0 + 0xc0) + 0xc);
          if (iVar10 < 0) {
            iVar10 = iVar10 + 7;
          }
          iVar9 = iVar9 - (iVar10 >> 3);
          unaff_s1 = (short)iVar9;
          iVar9 = iVar9 * 0x10000;
          iVar10 = (uint)*(ushort *)(*(int *)(unaff_s0 + 0xc0) + 0xc) + (iVar9 >> 0x18);
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
          uVar1 = *(ushort *)(unaff_s0 + 0x36);
          iVar9 = func_0x80083e80(iVar4 >> 0x10);
          puVar6 = (undefined1 *)((uint)*(ushort *)(unaff_s0 + 0x94) + (iVar9 * 0x340 >> 0xc));
          puVar3 = (undefined1 *)(uint)(byte)unaff_s0[0x29];
          *(short *)(unaff_s0 + 0x36) = (short)puVar6;
          if (puVar3 == (undefined1 *)0x1) {
            puVar6 = puVar6 + -(uint)uVar1;
            puVar3 = puVar6 + _DAT_800e7eb6;
            _DAT_800e7eb6 = (ushort)puVar3;
          }
          *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0xc) = uVar11;
          *(short *)(unaff_s0 + 0x44) = unaff_s1;
          unaff_s0[0x29] = 0;
          goto LAB_8012d4f0;
        }
        *(undefined2 *)(unaff_s0 + 0x40) = 0;
      }
      else {
        iVar10 = (iVar9 + -0x20) * 0x10000 >> 0x10;
        if ((iVar10 < 0x4001) && (iVar9 = iVar9 + -0x20, -1 < iVar10)) goto LAB_8012d3b0;
LAB_8013634c:
        func_0x80083e80();
        func_0x80083f50();
      }
      func_0x80083e80((int)*(short *)(unaff_s0 + 0x20));
      func_0x80083e80(-(int)*(short *)(unaff_s0 + 0x22));
      func_0x80083f50(-(int)*(short *)(unaff_s0 + 0x22));
LAB_801364fc:
      unaff_s5[6] = 0;
      FUN_8013f4dc();
      return;
    }
LAB_8012d4f0:
    bVar2 = true;
    if (0x17 < DAT_1f800207) {
      puVar3 = (undefined1 *)(uint)DAT_800bf816;
      bVar2 = false;
      if (puVar3 == (undefined1 *)0x1) {
        bVar2 = true;
      }
    }
    uVar12 = CONCAT44(puVar3,1);
    if (bVar2) {
      unaff_s0[5] = 1;
      puVar3 = puVar6;
LAB_80136598:
      puVar5 = (undefined1 *)((ulonglong)uVar12 >> 0x20);
      puVar6 = puVar5;
      uVar8 = uVar7;
      if ((int)uVar12 == 0) goto LAB_801365b4;
    }
    else {
      puVar3 = (undefined1 *)(uint)DAT_800e7eaa;
      if (puVar3 == &DAT_0000001f) {
        func_0x8007703c();
        unaff_s5 = unaff_s0;
        goto LAB_801364fc;
      }
      if (puVar3 != (undefined1 *)0x22) {
        puVar6 = unaff_s0;
        func_0x8007778c();
        puVar3 = extraout_v1;
      }
      if ((unaff_s0[1] != '\0') &&
         (puVar6 = unaff_s0, func_0x800517f8(), puVar3 = extraout_v1_00, DAT_800bf809 == '\0')) {
        iVar9 = (int)unaff_s1;
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        if (iVar9 < 0x100) {
          puVar3 = *(undefined1 **)(unaff_s0 + 0x68);
          uVar12 = func_0x80074af0();
          *(undefined4 *)(unaff_s0 + 0x68) = 0;
          goto LAB_80136598;
        }
        iVar9 = (int)*(short *)(unaff_s0 + 100);
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        if (iVar9 < 0x100) {
          func_0x80074af0(*(undefined4 *)(unaff_s0 + 0x68));
          func_0x80074590(0x81,0,0);
          return;
        }
      }
      *(short *)(unaff_s0 + 100) = unaff_s1;
    }
  }
  else if (puVar3 == (undefined1 *)0x2) goto LAB_8012d318;
  puVar5 = puVar3;
  puVar3 = puVar6;
  uVar8 = unaff_s7;
  unaff_s7 = uVar7;
LAB_801365b4:
  puVar6 = puVar5;
  uVar7 = uVar8;
  if ((int)unaff_s8 < (int)uVar8) {
    puVar6 = in_t0;
    uVar7 = unaff_s8;
    in_t0 = puVar5;
    unaff_s8 = uVar8;
  }
  puVar5 = puVar3;
  uVar8 = unaff_s7;
  if ((int)unaff_s8 < (int)unaff_s7) {
    puVar5 = in_t0;
    in_t0 = puVar3;
    uVar8 = unaff_s8;
    unaff_s8 = unaff_s7;
  }
  iVar9 = uVar8 - uVar7;
  iVar10 = unaff_s8 - uVar7;
  if (uVar8 == uVar7) {
    if ((int)puVar6 < (int)puVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_8013f608();
    return;
  }
  if (iVar9 == 0) {
    trap(0x1c00);
  }
  if ((iVar9 == -1) && (((int)puVar5 - (int)puVar6 & 0xffffU) == 0x8000)) {
    trap(0x1800);
  }
  if (uVar8 == unaff_s8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_s8 == uVar8) {
    trap(0x1c00);
  }
  if ((unaff_s8 - uVar8 == -1) && (((int)in_t0 - (int)puVar5 & 0xffffU) == 0x8000)) {
    trap(0x1800);
  }
  if (iVar10 == 0) {
    trap(0x1c00);
  }
  if ((iVar10 == -1) && (((int)in_t0 - (int)puVar6 & 0xffffU) == 0x8000)) {
    trap(0x1800);
  }
  if (-iVar10 * ((int)puVar5 - (int)puVar6) + ((int)in_t0 - (int)puVar6) * iVar9 < 1) {
    for (; (int)uVar7 < (int)uVar8; uVar7 = uVar7 + 1) {
      if ((-1 < (int)uVar7) && ((int)uVar7 < (int)*(short *)(unaff_s4 + 10))) {
        FUN_8013f988();
        return;
      }
    }
    for (; (int)uVar7 <= (int)unaff_s8; uVar7 = uVar7 + 1) {
      if ((-1 < (int)uVar7) && ((int)uVar7 < (int)*(short *)(unaff_s4 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  else {
    for (; (int)uVar7 < (int)uVar8; uVar7 = uVar7 + 1) {
      if ((-1 < (int)uVar7) && ((int)uVar7 < (int)*(short *)(unaff_s4 + 10))) {
        FUN_8013f788();
        return;
      }
    }
    if ((int)uVar7 <= (int)unaff_s8) {
      while (((int)uVar7 < 0 || ((int)*(short *)(unaff_s4 + 10) <= (int)uVar7))) {
        uVar7 = uVar7 + 1;
        if ((int)unaff_s8 < (int)uVar7) {
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

