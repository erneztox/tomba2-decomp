// FUN_8011e4dc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8011e4dc(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 in_zero;
  int in_v0;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int in_t0;
  uint *in_t1;
  uint in_t2;
  int in_t3;
  int *in_t5;
  int in_t6;
  int in_t7;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s6;
  uint *in_t8;
  
  if (in_v0 != 0) {
    iVar3 = *(int *)(unaff_s0 + 0x8c);
    uVar6 = *(int *)(in_t3 + 0x80) * in_t6 + 0x3039;
    *(uint *)(in_t3 + 0x80) = uVar6;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    setCopReg(2,0x4000,(iVar3 >> 2) + (uVar6 >> 0x16));
    setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x15));
    copFunction(2,0x780010);
    uVar6 = getCopReg(2,0x16);
    in_t1[7] = uVar6;
  }
  if ((in_t2 & 0x40) != 0) {
    iVar3 = *(int *)(param_2 + 0x90);
    uVar6 = *(int *)(in_t3 + 0x80) * in_t6 + 0x3039;
    *(uint *)(in_t3 + 0x80) = uVar6;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    setCopReg(2,0x4000,(iVar3 >> 2) + (uVar6 >> 0x16));
    setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -9));
    copFunction(2,0x780010);
    uVar6 = getCopReg(2,0x16);
    in_t1[10] = uVar6;
    puVar4 = (uint *)FUN_801307c4();
    return puVar4;
  }
  puVar4 = (uint *)(unaff_s6 + *in_t5 * 4);
  *in_t1 = *puVar4 | 0xc000000;
  *puVar4 = (uint)in_t1;
  do {
    do {
      do {
        do {
          puVar4 = in_t8;
          iVar5 = in_t7;
          in_t7 = iVar5 + 0x2c;
          in_t8 = puVar4 + 0xb;
          iVar3 = param_3 + -1;
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
          uVar6 = *in_t8;
          *(uint *)(in_t0 + 7) = uVar6 & 0xfff0f0f0;
          copFunction(2,0x280030);
          *(uint *)(in_t0 + 0x13) = uVar6 << 4 & unaff_s3;
          uVar6 = *(uint *)(iVar5 + 0x20);
          _FUN_8011e4dc = getCopControlWord(2,0xf800);
          param_3 = iVar3;
        } while (_FUN_8011e4dc < 0);
        copFunction(2,0x1400006);
        *(undefined4 *)(in_t0 + 0xf) = *(undefined4 *)(iVar5 + 0x24);
        _FUN_8011e4dc = getCopReg(2,0x18);
      } while (_FUN_8011e4dc < 1);
      uVar2 = getCopReg(2,0xc);
      in_t1[0xf] = uVar2;
      uVar2 = getCopReg(2,0xd);
      in_t1[0x12] = uVar2;
      uVar2 = getCopReg(2,0xe);
      in_t1[0x15] = uVar2;
      setCopReg(2,in_zero,puVar4[0x15]);
      setCopReg(2,0x800,puVar4[0x14] >> 0x10);
      *(uint *)(in_t0 + 0x1f) = uVar6 & unaff_s3;
      copFunction(2,0x180001);
      *(uint *)(in_t0 + 0x2b) = uVar6 << 4 & unaff_s3;
      *(undefined4 *)(in_t0 + 0x1b) = *(undefined4 *)(iVar5 + 0x28);
      _FUN_8011e4dc = getCopControlWord(2,0xf800);
    } while (_FUN_8011e4dc < 0);
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
  uVar6 = uVar6 >> 0x18 & 3;
  if (uVar6 == 1) {
    iVar3 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s1 + 0x88) < *(int *)(unaff_s2 + 0x84)) {
      iVar3 = *(int *)(unaff_s2 + 0x84);
    }
    iVar5 = *(int *)(param_2 + 0x90);
    bVar1 = iVar5 < iVar3;
    if (iVar5 < *(int *)(unaff_s0 + 0x8c)) {
      puVar4 = (uint *)FUN_801302f0();
      return puVar4;
    }
  }
  else {
    if (uVar6 != 2) {
      halt_baddata();
    }
    iVar3 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s2 + 0x84) < *(int *)(unaff_s1 + 0x88)) {
      iVar3 = *(int *)(unaff_s2 + 0x84);
    }
    iVar5 = *(int *)(param_2 + 0x90);
    iVar7 = *(int *)(unaff_s0 + 0x8c);
    bVar1 = iVar3 < iVar5;
    if (iVar7 < iVar5) {
      bVar1 = iVar3 < iVar7;
      iVar5 = iVar7;
    }
  }
  if (bVar1) {
    iVar5 = iVar3;
  }
  *in_t5 = iVar5 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

