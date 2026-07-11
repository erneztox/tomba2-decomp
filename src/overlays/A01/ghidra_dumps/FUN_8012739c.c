// FUN_8012739c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8012739c(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 in_zero;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  char *in_t0;
  uint *in_t1;
  uint in_t2;
  int in_t3;
  int *in_t5;
  int in_t6;
  uint *in_t7;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint *in_t8;
  uint *puVar8;
  
  *in_t5 = -1;
  if (-1 < *in_t5) {
    uVar3 = *in_t7;
    *(uint *)(in_t0 + -0xd) = uVar3;
    *(uint *)(in_t0 + -1) = uVar3 >> 0x10;
    if ((in_t2 & 0x80) == 0) {
      if ((in_t2 & 0x40) != 0) {
        if (_DAT_1f80009c == 0) {
          puVar5 = (uint *)FUN_8013071c();
          return puVar5;
        }
        goto LAB_80127854;
      }
      if ((in_t2 & 4) != 0) {
        iVar4 = *(int *)(unaff_s2 + 0x84);
        uVar3 = *(int *)(in_t3 + 0x80) * in_t6 + 0x3039;
        *(uint *)(in_t3 + 0x80) = uVar3;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        setCopReg(2,0x4000,(iVar4 >> 2) + (uVar3 >> 0x16));
        setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x2d));
        copFunction(2,0x780010);
        uVar3 = getCopReg(2,0x16);
        in_t1[1] = uVar3;
        iVar4 = *(int *)(unaff_s1 + 0x88);
        uVar3 = *(int *)(in_t3 + 0x80) * in_t6 + 0x3039;
        *(uint *)(in_t3 + 0x80) = uVar3;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        setCopReg(2,0x4000,(iVar4 >> 2) + (uVar3 >> 0x16));
        setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x21));
        copFunction(2,0x780010);
        uVar3 = getCopReg(2,0x16);
        in_t1[4] = uVar3;
        iVar4 = *(int *)(unaff_s0 + 0x8c);
        uVar3 = *(int *)(in_t3 + 0x80) * in_t6 + 0x3039;
        *(uint *)(in_t3 + 0x80) = uVar3;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        setCopReg(2,0x4000,(iVar4 >> 2) + (uVar3 >> 0x16));
        setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x15));
        copFunction(2,0x780010);
        uVar3 = getCopReg(2,0x16);
        in_t1[7] = uVar3;
        iVar4 = *(int *)(param_2 + 0x90);
        uVar3 = *(int *)(in_t3 + 0x80) * in_t6 + 0x3039;
        *(uint *)(in_t3 + 0x80) = uVar3;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        setCopReg(2,0x4000,(iVar4 >> 2) + (uVar3 >> 0x16));
        setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -9));
        copFunction(2,0x780010);
        uVar3 = getCopReg(2,0x16);
        in_t1[10] = uVar3;
        puVar5 = (uint *)FUN_8013071c();
        return puVar5;
      }
      setCopReg(2,0x4000,*(int *)(unaff_s2 + 0x84) >> 2);
      setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x2d));
      copFunction(2,0x780010);
      uVar3 = getCopReg(2,0x16);
      in_t1[1] = uVar3;
      setCopReg(2,0x4000,*(int *)(unaff_s1 + 0x88) >> 2);
      setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x21));
      copFunction(2,0x780010);
      uVar3 = getCopReg(2,0x16);
      in_t1[4] = uVar3;
      setCopReg(2,0x4000,*(int *)(unaff_s0 + 0x8c) >> 2);
      setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x15));
      copFunction(2,0x780010);
      uVar3 = getCopReg(2,0x16);
      in_t1[7] = uVar3;
      setCopReg(2,0x4000,*(int *)(param_2 + 0x90) >> 2);
      setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -9));
      copFunction(2,0x780010);
      uVar3 = getCopReg(2,0x16);
      in_t1[10] = uVar3;
      if ((in_t2 & 0x10) != 0) {
        in_t0[-0x25] = in_t0[-0x25] + *(char *)(unaff_s5 + -0x7714);
        in_t0[-0x24] = in_t0[-0x24] + (&DAT_ffff88ee)[unaff_s4];
        in_t0[-0x19] = in_t0[-0x19] + *(char *)(unaff_s5 + -0x7714);
        in_t0[-0x18] = in_t0[-0x18] + (&DAT_ffff88ee)[unaff_s4];
        in_t0[-0xd] = in_t0[-0xd] + *(char *)(unaff_s5 + -0x7714);
        in_t0[-0xc] = in_t0[-0xc] + (&DAT_ffff88ee)[unaff_s4];
        in_t0[-1] = in_t0[-1] + *(char *)(unaff_s5 + -0x7714);
        *in_t0 = *in_t0 + (&DAT_ffff88ee)[unaff_s4];
      }
    }
    else {
      if ((in_t2 & 8) != 0) {
        iVar4 = *(int *)(unaff_s2 + 0x84);
        uVar3 = *(int *)(in_t3 + 0x80) * in_t6 + 0x3039;
        *(uint *)(in_t3 + 0x80) = uVar3;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        setCopReg(2,0x4000,(iVar4 >> 2) + (uVar3 >> 0x16));
        setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x2d));
        copFunction(2,0x780010);
        uVar3 = getCopReg(2,0x16);
        in_t1[1] = uVar3;
      }
      if ((in_t2 & 0x10) != 0) {
        iVar4 = *(int *)(unaff_s1 + 0x88);
        uVar3 = *(int *)(in_t3 + 0x80) * in_t6 + 0x3039;
        *(uint *)(in_t3 + 0x80) = uVar3;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        setCopReg(2,0x4000,(iVar4 >> 2) + (uVar3 >> 0x16));
        setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x21));
        copFunction(2,0x780010);
        uVar3 = getCopReg(2,0x16);
        in_t1[4] = uVar3;
      }
      if ((in_t2 & 0x20) != 0) {
        iVar4 = *(int *)(unaff_s0 + 0x8c);
        uVar3 = *(int *)(in_t3 + 0x80) * in_t6 + 0x3039;
        *(uint *)(in_t3 + 0x80) = uVar3;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        setCopReg(2,0x4000,(iVar4 >> 2) + (uVar3 >> 0x16));
        setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x15));
        copFunction(2,0x780010);
        uVar3 = getCopReg(2,0x16);
        in_t1[7] = uVar3;
      }
      if ((in_t2 & 0x40) != 0) {
        iVar4 = *(int *)(param_2 + 0x90);
        uVar3 = *(int *)(in_t3 + 0x80) * in_t6 + 0x3039;
        *(uint *)(in_t3 + 0x80) = uVar3;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        setCopReg(2,0x4000,(iVar4 >> 2) + (uVar3 >> 0x16));
        setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -9));
        copFunction(2,0x780010);
        uVar3 = getCopReg(2,0x16);
        in_t1[10] = uVar3;
        puVar5 = (uint *)FUN_801307c4();
        return puVar5;
      }
    }
    puVar5 = (uint *)(unaff_s6 + *in_t5 * 4);
    param_1 = 0xc000000;
    *in_t1 = *puVar5 | 0xc000000;
    *puVar5 = (uint)in_t1;
    in_t0 = in_t0 + 0x34;
    in_t1 = in_t1 + 0xd;
  }
LAB_80127854:
  do {
    do {
      do {
        do {
          puVar8 = in_t8;
          puVar5 = in_t7;
          in_t7 = puVar5 + 0xb;
          in_t8 = puVar8 + 0xb;
          iVar4 = param_3 + -1;
          if (param_3 == 0) {
            _DAT_800bf544 = in_t1;
            return in_t8;
          }
          setCopReg(2,in_zero,puVar8[0x10]);
          setCopReg(2,0x800,puVar8[0x11]);
          setCopReg(2,0x1800,puVar8[0x11] >> 0x10);
          setCopReg(2,param_3,puVar8[0x12]);
          setCopReg(2,param_1,puVar8[0x13]);
          setCopReg(2,0x2800,puVar8[0x14]);
          uVar3 = *in_t8;
          *(uint *)(in_t0 + -0x2d) = uVar3 & 0xfff0f0f0;
          copFunction(2,0x280030);
          *(uint *)(in_t0 + -0x21) = uVar3 << 4 & unaff_s3;
          uVar3 = puVar5[8];
          _FUN_8012739c = getCopControlWord(2,0xf800);
          param_3 = iVar4;
        } while (_FUN_8012739c < 0);
        copFunction(2,0x1400006);
        *(uint *)(in_t0 + -0x25) = puVar5[9];
        _FUN_8012739c = getCopReg(2,0x18);
      } while (_FUN_8012739c < 1);
      uVar2 = getCopReg(2,0xc);
      in_t1[2] = uVar2;
      uVar2 = getCopReg(2,0xd);
      in_t1[5] = uVar2;
      uVar2 = getCopReg(2,0xe);
      in_t1[8] = uVar2;
      setCopReg(2,in_zero,puVar8[0x15]);
      setCopReg(2,0x800,puVar8[0x14] >> 0x10);
      *(uint *)(in_t0 + -0x15) = uVar3 & unaff_s3;
      copFunction(2,0x180001);
      *(uint *)(in_t0 + -9) = uVar3 << 4 & unaff_s3;
      *(uint *)(in_t0 + -0x19) = puVar5[10];
      _FUN_8012739c = getCopControlWord(2,0xf800);
    } while (_FUN_8012739c < 0);
    uVar2 = getCopReg(2,0xe);
    in_t1[0xb] = uVar2;
  } while (((((0x13f < *(ushort *)(in_t0 + -0x29)) && (0x13f < *(ushort *)(in_t0 + -0x1d))) &&
            (0x13f < *(ushort *)(in_t0 + -0x11))) && (0x13f < *(ushort *)(in_t0 + -5))) ||
          (((0xef < *(ushort *)(in_t0 + -0x27) && (0xef < *(ushort *)(in_t0 + -0x1b))) &&
           ((0xef < *(ushort *)(in_t0 + -0xf) && (0xef < *(ushort *)(in_t0 + -3)))))));
  _DAT_1f800084 = getCopReg(2,0x10);
  _DAT_1f800088 = getCopReg(2,0x11);
  _DAT_1f80008c = getCopReg(2,0x12);
  _DAT_1f800090 = getCopReg(2,0x13);
  uVar3 = uVar3 >> 0x18 & 3;
  if (uVar3 == 1) {
    iVar4 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s1 + 0x88) < *(int *)(unaff_s2 + 0x84)) {
      iVar4 = *(int *)(unaff_s2 + 0x84);
    }
    iVar6 = *(int *)(param_2 + 0x90);
    bVar1 = iVar6 < iVar4;
    if (iVar6 < *(int *)(unaff_s0 + 0x8c)) {
      puVar5 = (uint *)FUN_801302f0();
      return puVar5;
    }
  }
  else {
    if (uVar3 != 2) {
      halt_baddata();
    }
    iVar4 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s2 + 0x84) < *(int *)(unaff_s1 + 0x88)) {
      iVar4 = *(int *)(unaff_s2 + 0x84);
    }
    iVar6 = *(int *)(param_2 + 0x90);
    iVar7 = *(int *)(unaff_s0 + 0x8c);
    bVar1 = iVar4 < iVar6;
    if (iVar7 < iVar6) {
      bVar1 = iVar4 < iVar7;
      iVar6 = iVar7;
    }
  }
  if (bVar1) {
    iVar6 = iVar4;
  }
  *in_t5 = iVar6 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

