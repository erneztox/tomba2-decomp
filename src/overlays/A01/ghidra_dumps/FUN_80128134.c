// FUN_80128134

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_80128134(undefined4 param_1,int param_2,int param_3,char *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 in_zero;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int *in_t1;
  uint *in_t2;
  uint in_t3;
  int iVar7;
  uint *in_t5;
  uint *in_t6;
  uint *puVar8;
  int *in_t7;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint in_t8;
  
  uVar3 = *in_t5;
  *(uint *)(param_4 + -0xd) = uVar3;
  *(uint *)(param_4 + -1) = uVar3 >> 0x10;
  if ((in_t3 & 0x10) != 0) {
    param_4[-0x25] = param_4[-0x25] + *(char *)(param_2 + -0x7714);
    param_4[-0x24] = param_4[-0x24] + DAT_80120a22;
    param_4[-0x19] = param_4[-0x19] + *(char *)(param_2 + -0x7714);
    param_4[-0x18] = param_4[-0x18] + DAT_80120a22;
    param_4[-0xd] = param_4[-0xd] + *(char *)(param_2 + -0x7714);
    param_4[-0xc] = param_4[-0xc] + DAT_80120a22;
    param_4[-1] = param_4[-1] + *(char *)(param_2 + -0x7714);
    *param_4 = *param_4 + DAT_80120a22;
  }
  puVar4 = (uint *)(unaff_s3 + *in_t1 * 4);
  *in_t2 = *puVar4 | 0xc000000;
  *puVar4 = (uint)in_t2;
  do {
    do {
      do {
        do {
          puVar8 = in_t6;
          puVar4 = in_t5;
          in_t5 = puVar4 + 0xb;
          in_t6 = puVar8 + 0xb;
          iVar6 = param_3 + -1;
          if (param_3 == 0) {
            _DAT_800bf544 = in_t2 + 0xd;
            return in_t6;
          }
          setCopReg(2,in_zero,puVar8[0x10]);
          setCopReg(2,0x800,puVar8[0x11]);
          setCopReg(2,0x1800,puVar8[0x11] >> 0x10);
          setCopReg(2,param_3,puVar8[0x12]);
          setCopReg(2,0xc000000,puVar8[0x13]);
          setCopReg(2,0x2800,puVar8[0x14]);
          uVar3 = *in_t6;
          *(uint *)(param_4 + 7) = uVar3 & 0xfff0f0f0;
          copFunction(2,0x280030);
          *(uint *)(param_4 + 0x13) = uVar3 << 4 & in_t8;
          uVar3 = puVar4[8];
          iVar7 = getCopControlWord(2,0xf800);
          *in_t7 = iVar7;
          param_3 = iVar6;
        } while (*in_t7 < 0);
        copFunction(2,0x1400006);
        *(uint *)(param_4 + 0xf) = puVar4[9];
        iVar6 = getCopReg(2,0x18);
        *in_t7 = iVar6;
      } while (*in_t7 < 1);
      uVar2 = getCopReg(2,0xc);
      in_t2[0xf] = uVar2;
      uVar2 = getCopReg(2,0xd);
      in_t2[0x12] = uVar2;
      uVar2 = getCopReg(2,0xe);
      in_t2[0x15] = uVar2;
      setCopReg(2,in_zero,puVar8[0x15]);
      setCopReg(2,0x800,puVar8[0x14] >> 0x10);
      *(uint *)(param_4 + 0x1f) = uVar3 & in_t8;
      copFunction(2,0x180001);
      *(uint *)(param_4 + 0x2b) = uVar3 << 4 & in_t8;
      *(uint *)(param_4 + 0x1b) = puVar4[10];
      iVar6 = getCopControlWord(2,0xf800);
      *in_t7 = iVar6;
    } while (*in_t7 < 0);
    uVar2 = getCopReg(2,0xe);
    in_t2[0x18] = uVar2;
  } while ((((((0x13f < *(ushort *)(param_4 + 0xb)) && (0x13f < *(ushort *)(param_4 + 0x17))) &&
             (0x13f < *(ushort *)(param_4 + 0x23))) && (0x13f < *(ushort *)(param_4 + 0x2f))) ||
           (((0xef < *(ushort *)(param_4 + 0xd) && (0xef < *(ushort *)(param_4 + 0x19))) &&
            ((0xef < *(ushort *)(param_4 + 0x25) && (0xef < *(ushort *)(param_4 + 0x31))))))) ||
          (((uVar3 >> 0x18 & 0x40) != 0 && (_DAT_1f80009c != 0))));
  _DAT_1f800084 = getCopReg(2,0x10);
  _DAT_1f800088 = getCopReg(2,0x11);
  _DAT_1f80008c = getCopReg(2,0x12);
  _DAT_1f800090 = getCopReg(2,0x13);
  uVar3 = uVar3 >> 0x18 & 3;
  iVar6 = _DAT_1f800090;
  if (uVar3 == 1) {
    iVar7 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s1 + 0x88) < *(int *)(unaff_s2 + 0x84)) {
      iVar7 = *(int *)(unaff_s2 + 0x84);
    }
    bVar1 = _DAT_1f800090 < iVar7;
    if (_DAT_1f800090 < *(int *)(unaff_s0 + 0x8c)) {
      puVar4 = (uint *)FUN_80131074();
      return puVar4;
    }
  }
  else {
    if (uVar3 != 2) {
      halt_baddata();
    }
    iVar7 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s2 + 0x84) < *(int *)(unaff_s1 + 0x88)) {
      iVar7 = *(int *)(unaff_s2 + 0x84);
    }
    iVar5 = *(int *)(unaff_s0 + 0x8c);
    bVar1 = iVar7 < _DAT_1f800090;
    if (iVar5 < _DAT_1f800090) {
      bVar1 = iVar7 < iVar5;
      iVar6 = iVar5;
    }
  }
  if (bVar1) {
    iVar6 = iVar7;
  }
  *in_t1 = iVar6 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

