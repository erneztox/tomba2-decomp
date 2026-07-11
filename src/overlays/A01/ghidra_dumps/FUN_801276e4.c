// FUN_801276e4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_801276e4(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_zero;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_v1;
  int iVar7;
  char *in_t0;
  uint *in_t1;
  uint in_t2;
  int iVar8;
  int *in_t5;
  int in_t7;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  undefined4 unaff_s7;
  uint *in_t8;
  int *in_t9;
  
  setCopReg(2,0x3000,unaff_s7);
  copFunction(2,0x780010);
  uVar3 = getCopReg(2,0x16);
  *in_v1 = uVar3;
  setCopReg(2,0x4000,*(int *)(unaff_s1 + 0x88) >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x21));
  copFunction(2,0x780010);
  uVar5 = getCopReg(2,0x16);
  in_t1[4] = uVar5;
  setCopReg(2,0x4000,*(int *)(unaff_s0 + 0x8c) >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x15));
  copFunction(2,0x780010);
  uVar5 = getCopReg(2,0x16);
  in_t1[7] = uVar5;
  setCopReg(2,0x4000,*(int *)(param_2 + 0x90) >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -9));
  copFunction(2,0x780010);
  uVar5 = getCopReg(2,0x16);
  in_t1[10] = uVar5;
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
  puVar4 = (uint *)(unaff_s6 + *in_t5 * 4);
  *in_t1 = *puVar4 | 0xc000000;
  *puVar4 = (uint)in_t1;
  do {
    do {
      do {
        do {
          puVar4 = in_t8;
          iVar6 = in_t7;
          in_t7 = iVar6 + 0x2c;
          in_t8 = puVar4 + 0xb;
          iVar7 = param_3 + -1;
          if (param_3 == 0) {
            _DAT_800bf544 = in_t1 + 0xd;
            return in_t8;
          }
          setCopReg(2,in_zero,puVar4[0x10]);
          setCopReg(2,0x800,puVar4[0x11]);
          setCopReg(2,0x1800,puVar4[0x11] >> 0x10);
          setCopReg(2,param_3,puVar4[0x12]);
          setCopReg(2,0xc000000,puVar4[0x13]);
          setCopReg(2,0x2800,puVar4[0x14]);
          uVar5 = *in_t8;
          *(uint *)(in_t0 + 7) = uVar5 & 0xfff0f0f0;
          copFunction(2,0x280030);
          *(uint *)(in_t0 + 0x13) = uVar5 << 4 & unaff_s3;
          uVar5 = *(uint *)(iVar6 + 0x20);
          iVar8 = getCopControlWord(2,0xf800);
          *in_t9 = iVar8;
          param_3 = iVar7;
        } while (*in_t9 < 0);
        copFunction(2,0x1400006);
        *(undefined4 *)(in_t0 + 0xf) = *(undefined4 *)(iVar6 + 0x24);
        iVar7 = getCopReg(2,0x18);
        *in_t9 = iVar7;
      } while (*in_t9 < 1);
      uVar2 = getCopReg(2,0xc);
      in_t1[0xf] = uVar2;
      uVar2 = getCopReg(2,0xd);
      in_t1[0x12] = uVar2;
      uVar2 = getCopReg(2,0xe);
      in_t1[0x15] = uVar2;
      setCopReg(2,in_zero,puVar4[0x15]);
      setCopReg(2,0x800,puVar4[0x14] >> 0x10);
      *(uint *)(in_t0 + 0x1f) = uVar5 & unaff_s3;
      copFunction(2,0x180001);
      *(uint *)(in_t0 + 0x2b) = uVar5 << 4 & unaff_s3;
      *(undefined4 *)(in_t0 + 0x1b) = *(undefined4 *)(iVar6 + 0x28);
      iVar7 = getCopControlWord(2,0xf800);
      *in_t9 = iVar7;
    } while (*in_t9 < 0);
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
  uVar5 = uVar5 >> 0x18 & 3;
  if (uVar5 == 1) {
    iVar7 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s1 + 0x88) < *(int *)(unaff_s2 + 0x84)) {
      iVar7 = *(int *)(unaff_s2 + 0x84);
    }
    iVar6 = *(int *)(param_2 + 0x90);
    bVar1 = iVar6 < iVar7;
    if (iVar6 < *(int *)(unaff_s0 + 0x8c)) {
      puVar4 = (uint *)FUN_801302f0();
      return puVar4;
    }
  }
  else {
    if (uVar5 != 2) {
      halt_baddata();
    }
    iVar7 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s2 + 0x84) < *(int *)(unaff_s1 + 0x88)) {
      iVar7 = *(int *)(unaff_s2 + 0x84);
    }
    iVar6 = *(int *)(param_2 + 0x90);
    iVar8 = *(int *)(unaff_s0 + 0x8c);
    bVar1 = iVar7 < iVar6;
    if (iVar8 < iVar6) {
      bVar1 = iVar7 < iVar8;
      iVar6 = iVar8;
    }
  }
  if (bVar1) {
    iVar6 = iVar7;
  }
  *in_t5 = iVar6 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

