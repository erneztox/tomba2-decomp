// FUN_8011e6d0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8011e6d0(undefined1 param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_zero;
  int in_v0;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *in_t0;
  uint *in_t1;
  uint in_t2;
  int *in_t5;
  int in_t7;
  int iVar11;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint *in_t8;
  int *in_t9;
  
  *(undefined1 *)(in_v0 + -0x7f82) = param_1;
  iVar8 = 0;
  iVar9 = 0;
  func_0x80074590(0x84);
  puVar6 = (undefined4 *)(((_DAT_1f80017c & 3) - 2) * 0xc);
  *(short *)(*(int *)(unaff_s0 + 0xc0) + 2) = (short)puVar6;
  sVar1 = *(short *)(unaff_s0 + 0x42);
  *(short *)(unaff_s0 + 0x42) = sVar1 + -1;
  if (sVar1 != 1) {
    return (uint *)0x0;
  }
  DAT_800e807e = 0;
  setCopReg(2,0x4000,0);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x2d));
  copFunction(2,0x780010);
  uVar4 = getCopReg(2,0x16);
  *puVar6 = uVar4;
  setCopReg(2,0x4000,*(int *)(unaff_s1 + 0x88) >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x21));
  copFunction(2,0x780010);
  uVar7 = getCopReg(2,0x16);
  in_t1[4] = uVar7;
  setCopReg(2,0x4000,*(int *)(unaff_s0 + 0x8c) >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x15));
  copFunction(2,0x780010);
  uVar7 = getCopReg(2,0x16);
  in_t1[7] = uVar7;
  setCopReg(2,0x4000,*(int *)(iVar8 + 0x90) >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -9));
  copFunction(2,0x780010);
  uVar7 = getCopReg(2,0x16);
  in_t1[10] = uVar7;
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
  puVar5 = (uint *)(unaff_s6 + *in_t5 * 4);
  *in_t1 = *puVar5 | 0xc000000;
  *puVar5 = (uint)in_t1;
  do {
    do {
      do {
        do {
          puVar5 = in_t8;
          iVar11 = in_t7;
          in_t7 = iVar11 + 0x2c;
          in_t8 = puVar5 + 0xb;
          iVar10 = iVar9 + -1;
          if (iVar9 == 0) {
            _DAT_800bf544 = in_t1 + 0xd;
            return in_t8;
          }
          setCopReg(2,in_zero,puVar5[0x10]);
          setCopReg(2,0x800,puVar5[0x11]);
          setCopReg(2,0x1800,puVar5[0x11] >> 0x10);
          setCopReg(2,iVar9,puVar5[0x12]);
          setCopReg(2,0xc000000,puVar5[0x13]);
          setCopReg(2,0x2800,puVar5[0x14]);
          uVar7 = *in_t8;
          *(uint *)(in_t0 + 7) = uVar7 & 0xfff0f0f0;
          copFunction(2,0x280030);
          *(uint *)(in_t0 + 0x13) = uVar7 << 4 & unaff_s3;
          uVar7 = *(uint *)(iVar11 + 0x20);
          iVar9 = getCopControlWord(2,0xf800);
          *in_t9 = iVar9;
          iVar9 = iVar10;
        } while (*in_t9 < 0);
        copFunction(2,0x1400006);
        *(undefined4 *)(in_t0 + 0xf) = *(undefined4 *)(iVar11 + 0x24);
        iVar10 = getCopReg(2,0x18);
        *in_t9 = iVar10;
      } while (*in_t9 < 1);
      uVar3 = getCopReg(2,0xc);
      in_t1[0xf] = uVar3;
      uVar3 = getCopReg(2,0xd);
      in_t1[0x12] = uVar3;
      uVar3 = getCopReg(2,0xe);
      in_t1[0x15] = uVar3;
      setCopReg(2,in_zero,puVar5[0x15]);
      setCopReg(2,0x800,puVar5[0x14] >> 0x10);
      *(uint *)(in_t0 + 0x1f) = uVar7 & unaff_s3;
      copFunction(2,0x180001);
      *(uint *)(in_t0 + 0x2b) = uVar7 << 4 & unaff_s3;
      *(undefined4 *)(in_t0 + 0x1b) = *(undefined4 *)(iVar11 + 0x28);
      iVar10 = getCopControlWord(2,0xf800);
      *in_t9 = iVar10;
    } while (*in_t9 < 0);
    uVar3 = getCopReg(2,0xe);
    in_t1[0x18] = uVar3;
  } while (((((0x13f < *(ushort *)(in_t0 + 0xb)) && (0x13f < *(ushort *)(in_t0 + 0x17))) &&
            (0x13f < *(ushort *)(in_t0 + 0x23))) && (0x13f < *(ushort *)(in_t0 + 0x2f))) ||
          (((0xef < *(ushort *)(in_t0 + 0xd) && (0xef < *(ushort *)(in_t0 + 0x19))) &&
           ((0xef < *(ushort *)(in_t0 + 0x25) && (0xef < *(ushort *)(in_t0 + 0x31)))))));
  _DAT_1f800084 = getCopReg(2,0x10);
  _DAT_1f800088 = getCopReg(2,0x11);
  _DAT_1f80008c = getCopReg(2,0x12);
  _DAT_1f800090 = getCopReg(2,0x13);
  uVar7 = uVar7 >> 0x18 & 3;
  if (uVar7 == 1) {
    iVar9 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s1 + 0x88) < *(int *)(unaff_s2 + 0x84)) {
      iVar9 = *(int *)(unaff_s2 + 0x84);
    }
    iVar8 = *(int *)(iVar8 + 0x90);
    bVar2 = iVar8 < iVar9;
    if (iVar8 < *(int *)(unaff_s0 + 0x8c)) {
      puVar5 = (uint *)FUN_801302f0();
      return puVar5;
    }
  }
  else {
    if (uVar7 != 2) {
      halt_baddata();
    }
    iVar9 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s2 + 0x84) < *(int *)(unaff_s1 + 0x88)) {
      iVar9 = *(int *)(unaff_s2 + 0x84);
    }
    iVar8 = *(int *)(iVar8 + 0x90);
    iVar10 = *(int *)(unaff_s0 + 0x8c);
    bVar2 = iVar9 < iVar8;
    if (iVar10 < iVar8) {
      bVar2 = iVar9 < iVar10;
      iVar8 = iVar10;
    }
  }
  if (bVar2) {
    iVar8 = iVar9;
  }
  *in_t5 = iVar8 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

