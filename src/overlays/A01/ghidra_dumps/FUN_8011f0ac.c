// FUN_8011f0ac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8011f0ac(undefined4 param_1,int param_2,int param_3,char *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 in_zero;
  uint *puVar3;
  char in_v1;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *in_t1;
  uint *in_t2;
  int iVar7;
  int in_t5;
  uint *in_t6;
  int *in_t7;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  uint in_t8;
  
  *(undefined1 *)(unaff_s0 + 0xbf) = 3;
  param_4[-0x25] = in_v1 + '\x03';
  param_4[-0x24] = param_4[-0x24] + DAT_8011799a;
  param_4[-0x19] = param_4[-0x19] + *(char *)(param_2 + -0x7714);
  param_4[-0x18] = param_4[-0x18] + DAT_8011799a;
  param_4[-0xd] = param_4[-0xd] + *(char *)(param_2 + -0x7714);
  param_4[-0xc] = param_4[-0xc] + DAT_8011799a;
  param_4[-1] = param_4[-1] + *(char *)(param_2 + -0x7714);
  *param_4 = *param_4 + DAT_8011799a;
  puVar3 = (uint *)(unaff_s3 + *in_t1 * 4);
  *in_t2 = *puVar3 | 0xc000000;
  *puVar3 = (uint)in_t2;
  do {
    do {
      do {
        do {
          puVar3 = in_t6;
          iVar6 = in_t5;
          in_t5 = iVar6 + 0x2c;
          in_t6 = puVar3 + 0xb;
          iVar5 = param_3 + -1;
          if (param_3 == 0) {
            _DAT_800bf544 = in_t2 + 0xd;
            return in_t6;
          }
          setCopReg(2,in_zero,puVar3[0x10]);
          setCopReg(2,0x800,puVar3[0x11]);
          setCopReg(2,0x1800,puVar3[0x11] >> 0x10);
          setCopReg(2,param_3,puVar3[0x12]);
          setCopReg(2,0xc000000,puVar3[0x13]);
          setCopReg(2,0x2800,puVar3[0x14]);
          uVar4 = *in_t6;
          *(uint *)(param_4 + 7) = uVar4 & 0xfff0f0f0;
          copFunction(2,0x280030);
          *(uint *)(param_4 + 0x13) = uVar4 << 4 & in_t8;
          uVar4 = *(uint *)(iVar6 + 0x20);
          iVar7 = getCopControlWord(2,0xf800);
          *in_t7 = iVar7;
          param_3 = iVar5;
        } while (*in_t7 < 0);
        copFunction(2,0x1400006);
        *(undefined4 *)(param_4 + 0xf) = *(undefined4 *)(iVar6 + 0x24);
        iVar5 = getCopReg(2,0x18);
        *in_t7 = iVar5;
      } while (*in_t7 < 1);
      uVar2 = getCopReg(2,0xc);
      in_t2[0xf] = uVar2;
      uVar2 = getCopReg(2,0xd);
      in_t2[0x12] = uVar2;
      uVar2 = getCopReg(2,0xe);
      in_t2[0x15] = uVar2;
      setCopReg(2,in_zero,puVar3[0x15]);
      setCopReg(2,0x800,puVar3[0x14] >> 0x10);
      *(uint *)(param_4 + 0x1f) = uVar4 & in_t8;
      copFunction(2,0x180001);
      *(uint *)(param_4 + 0x2b) = uVar4 << 4 & in_t8;
      *(undefined4 *)(param_4 + 0x1b) = *(undefined4 *)(iVar6 + 0x28);
      iVar5 = getCopControlWord(2,0xf800);
      *in_t7 = iVar5;
    } while (*in_t7 < 0);
    uVar2 = getCopReg(2,0xe);
    in_t2[0x18] = uVar2;
  } while ((((((0x13f < *(ushort *)(param_4 + 0xb)) && (0x13f < *(ushort *)(param_4 + 0x17))) &&
             (0x13f < *(ushort *)(param_4 + 0x23))) && (0x13f < *(ushort *)(param_4 + 0x2f))) ||
           (((0xef < *(ushort *)(param_4 + 0xd) && (0xef < *(ushort *)(param_4 + 0x19))) &&
            ((0xef < *(ushort *)(param_4 + 0x25) && (0xef < *(ushort *)(param_4 + 0x31))))))) ||
          (((uVar4 >> 0x18 & 0x40) != 0 && (_DAT_1f80009c != 0))));
  _DAT_1f800084 = getCopReg(2,0x10);
  _DAT_1f800088 = getCopReg(2,0x11);
  _DAT_1f80008c = getCopReg(2,0x12);
  _DAT_1f800090 = getCopReg(2,0x13);
  uVar4 = uVar4 >> 0x18 & 3;
  iVar5 = _DAT_1f800090;
  if (uVar4 == 1) {
    iVar6 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s1 + 0x88) < *(int *)(unaff_s2 + 0x84)) {
      iVar6 = *(int *)(unaff_s2 + 0x84);
    }
    bVar1 = _DAT_1f800090 < iVar6;
    if (_DAT_1f800090 < *(int *)(unaff_s0 + 0x8c)) {
      puVar3 = (uint *)FUN_80131074();
      return puVar3;
    }
  }
  else {
    if (uVar4 != 2) {
      halt_baddata();
    }
    iVar6 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s2 + 0x84) < *(int *)(unaff_s1 + 0x88)) {
      iVar6 = *(int *)(unaff_s2 + 0x84);
    }
    iVar7 = *(int *)(unaff_s0 + 0x8c);
    bVar1 = iVar6 < _DAT_1f800090;
    if (iVar7 < _DAT_1f800090) {
      bVar1 = iVar6 < iVar7;
      iVar5 = iVar7;
    }
  }
  if (bVar1) {
    iVar5 = iVar6;
  }
  *in_t1 = iVar5 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

