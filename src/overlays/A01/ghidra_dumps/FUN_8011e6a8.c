// FUN_8011e6a8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8011e6a8(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 in_zero;
  int in_v0;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *in_t0;
  uint *in_t1;
  uint in_t2;
  int *in_t5;
  int in_t7;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint *in_t8;
  
  *(char *)(unaff_s0 + 7) = (char)in_v0;
  *(char *)(unaff_s0 + 0xbf) = (char)in_v0;
  setCopReg(2,0x4000,in_v0 >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x2d));
  copFunction(2,0x780010);
  uVar4 = getCopReg(2,0x16);
  in_t1[1] = uVar4;
  setCopReg(2,0x4000,*(int *)(unaff_s1 + 0x88) >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x21));
  copFunction(2,0x780010);
  uVar4 = getCopReg(2,0x16);
  in_t1[4] = uVar4;
  setCopReg(2,0x4000,*(int *)(unaff_s0 + 0x8c) >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x15));
  copFunction(2,0x780010);
  uVar4 = getCopReg(2,0x16);
  in_t1[7] = uVar4;
  setCopReg(2,0x4000,*(int *)(param_2 + 0x90) >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -9));
  copFunction(2,0x780010);
  uVar4 = getCopReg(2,0x16);
  in_t1[10] = uVar4;
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
  puVar3 = (uint *)(unaff_s6 + *in_t5 * 4);
  *in_t1 = *puVar3 | 0xc000000;
  *puVar3 = (uint)in_t1;
  do {
    do {
      do {
        do {
          puVar3 = in_t8;
          iVar5 = in_t7;
          in_t7 = iVar5 + 0x2c;
          in_t8 = puVar3 + 0xb;
          iVar7 = param_3 + -1;
          if (param_3 == 0) {
            _DAT_800bf544 = in_t1 + 0xd;
            return in_t8;
          }
          setCopReg(2,in_zero,puVar3[0x10]);
          setCopReg(2,0x800,puVar3[0x11]);
          setCopReg(2,0x1800,puVar3[0x11] >> 0x10);
          setCopReg(2,param_3,puVar3[0x12]);
          setCopReg(2,0xc000000,puVar3[0x13]);
          setCopReg(2,0x2800,puVar3[0x14]);
          uVar4 = *in_t8;
          *(uint *)(in_t0 + 7) = uVar4 & 0xfff0f0f0;
          copFunction(2,0x280030);
          *(uint *)(in_t0 + 0x13) = uVar4 << 4 & unaff_s3;
          uVar4 = *(uint *)(iVar5 + 0x20);
          _FUN_8011e6a8 = getCopControlWord(2,0xf800);
          param_3 = iVar7;
        } while (_FUN_8011e6a8 < 0);
        copFunction(2,0x1400006);
        *(undefined4 *)(in_t0 + 0xf) = *(undefined4 *)(iVar5 + 0x24);
        _FUN_8011e6a8 = getCopReg(2,0x18);
      } while (_FUN_8011e6a8 < 1);
      uVar2 = getCopReg(2,0xc);
      in_t1[0xf] = uVar2;
      uVar2 = getCopReg(2,0xd);
      in_t1[0x12] = uVar2;
      uVar2 = getCopReg(2,0xe);
      in_t1[0x15] = uVar2;
      setCopReg(2,in_zero,puVar3[0x15]);
      setCopReg(2,0x800,puVar3[0x14] >> 0x10);
      *(uint *)(in_t0 + 0x1f) = uVar4 & unaff_s3;
      copFunction(2,0x180001);
      *(uint *)(in_t0 + 0x2b) = uVar4 << 4 & unaff_s3;
      *(undefined4 *)(in_t0 + 0x1b) = *(undefined4 *)(iVar5 + 0x28);
      _FUN_8011e6a8 = getCopControlWord(2,0xf800);
    } while (_FUN_8011e6a8 < 0);
    uVar2 = getCopReg(2,0xe);
    in_t1[0x18] = uVar2;
  } while (((((0x13f < *(ushort *)(in_t0 + 0xb)) && (0x13f < *(ushort *)(in_t0 + 0x17))) &&
            (0x13f < *(ushort *)(in_t0 + 0x23))) && (0x13f < *(ushort *)(in_t0 + 0x2f))) ||
          (((0xef < *(ushort *)(in_t0 + 0xd) && (0xef < *(ushort *)(in_t0 + 0x19))) &&
           ((0xef < *(ushort *)(in_t0 + 0x25) && (0xef < *(ushort *)(in_t0 + 0x31)))))));
  _DAT_1f800084 = getCopReg(2,0x10);
  _DAT_1f800088 = getCopReg(2,0x11);
  _DAT_1f80008c = getCopReg(2,0x12);
  _DAT_1f800090 = getCopReg(2,0x13);
  uVar4 = uVar4 >> 0x18 & 3;
  if (uVar4 == 1) {
    iVar7 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s1 + 0x88) < *(int *)(unaff_s2 + 0x84)) {
      iVar7 = *(int *)(unaff_s2 + 0x84);
    }
    iVar5 = *(int *)(param_2 + 0x90);
    bVar1 = iVar5 < iVar7;
    if (iVar5 < *(int *)(unaff_s0 + 0x8c)) {
      puVar3 = (uint *)FUN_801302f0();
      return puVar3;
    }
  }
  else {
    if (uVar4 != 2) {
      halt_baddata();
    }
    iVar7 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s2 + 0x84) < *(int *)(unaff_s1 + 0x88)) {
      iVar7 = *(int *)(unaff_s2 + 0x84);
    }
    iVar5 = *(int *)(param_2 + 0x90);
    iVar6 = *(int *)(unaff_s0 + 0x8c);
    bVar1 = iVar7 < iVar5;
    if (iVar6 < iVar5) {
      bVar1 = iVar7 < iVar6;
      iVar5 = iVar6;
    }
  }
  if (bVar1) {
    iVar5 = iVar7;
  }
  *in_t5 = iVar5 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

