// FUN_80137178

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_80137178(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_zero;
  int in_v0;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *in_t0;
  int *in_t1;
  uint *in_t2;
  uint *in_t3;
  int iVar8;
  uint *in_t5;
  uint *puVar9;
  int *in_t6;
  uint in_t7;
  
  iVar4 = (in_v0 >> (in_v0 >> 10 & 0x1fU)) + (in_v0 >> 10) * 0x200;
  *in_t1 = iVar4;
  if (0x7fb < iVar4 - 4U) {
    *in_t1 = -1;
  }
  if (-1 < *in_t1) {
    uVar5 = *in_t3;
    in_t0[-3] = uVar5;
    *in_t0 = uVar5 >> 0x10;
    puVar6 = (uint *)(param_2 + *in_t1 * 4);
    *in_t2 = *puVar6 | 0xc000000;
    *puVar6 = (uint)in_t2;
    in_t0 = in_t0 + 0xd;
    in_t2 = in_t2 + 0xd;
  }
  do {
    do {
      do {
        do {
          puVar9 = in_t5;
          puVar6 = in_t3;
          in_t3 = puVar6 + 0xb;
          in_t5 = puVar9 + 0xb;
          iVar4 = param_3 + -1;
          if (param_3 == 0) {
            _DAT_800bf544 = in_t2;
            return in_t5;
          }
          setCopReg(2,in_zero,puVar9[0x10]);
          setCopReg(2,0x800,puVar9[0x11]);
          setCopReg(2,0x1800,puVar9[0x11] >> 0x10);
          setCopReg(2,param_3,puVar9[0x12]);
          setCopReg(2,0xc000000,puVar9[0x13]);
          setCopReg(2,0x2800,puVar9[0x14]);
          uVar5 = *in_t5;
          in_t0[-0xb] = uVar5 & 0xfff0f0f0;
          copFunction(2,0x280030);
          in_t0[-8] = uVar5 << 4 & in_t7;
          uVar5 = puVar6[8];
          iVar8 = getCopControlWord(2,0xf800);
          *in_t6 = iVar8;
          param_3 = iVar4;
        } while (*in_t6 < 0);
        copFunction(2,0x1400006);
        in_t0[-9] = puVar6[9];
        iVar4 = getCopReg(2,0x18);
        *in_t6 = iVar4;
      } while (*in_t6 < 1);
      uVar2 = getCopReg(2,0xc);
      in_t2[2] = uVar2;
      uVar2 = getCopReg(2,0xd);
      in_t2[5] = uVar2;
      uVar2 = getCopReg(2,0xe);
      in_t2[8] = uVar2;
      setCopReg(2,in_zero,puVar9[0x15]);
      setCopReg(2,0x800,puVar9[0x14] >> 0x10);
      in_t0[-5] = uVar5 & in_t7;
      copFunction(2,0x180001);
      in_t0[-2] = uVar5 << 4 & in_t7;
      in_t0[-6] = puVar6[10];
      iVar4 = getCopControlWord(2,0xf800);
      *in_t6 = iVar4;
    } while (*in_t6 < 0);
    uVar2 = getCopReg(2,0xe);
    in_t2[0xb] = uVar2;
  } while (((((0x13f < (ushort)in_t0[-10]) && (0x13f < (ushort)in_t0[-7])) &&
            (0x13f < (ushort)in_t0[-4])) && (0x13f < (ushort)in_t0[-1])) ||
          (((0xef < *(ushort *)((int)in_t0 + -0x26) && (0xef < *(ushort *)((int)in_t0 + -0x1a))) &&
           ((0xef < *(ushort *)((int)in_t0 + -0xe) && (0xef < *(ushort *)((int)in_t0 + -2)))))));
  uVar5 = uVar5 >> 0x18 & 3;
  if (uVar5 == 1) {
    iVar4 = getCopReg(2,0x10);
    iVar8 = getCopReg(2,0x11);
    iVar3 = getCopReg(2,0x12);
    iVar7 = getCopReg(2,0x13);
    if (iVar8 < iVar4) {
      iVar8 = iVar4;
    }
    bVar1 = iVar7 < iVar8;
    if (iVar7 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (uVar5 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = getCopReg(2,0x10);
    iVar8 = getCopReg(2,0x11);
    iVar3 = getCopReg(2,0x12);
    iVar7 = getCopReg(2,0x13);
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
    bVar1 = iVar8 < iVar7;
    if (iVar3 < iVar7) {
      bVar1 = iVar8 < iVar3;
      iVar7 = iVar3;
    }
  }
  if (bVar1) {
    iVar7 = iVar8;
  }
  *in_t1 = iVar7 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

