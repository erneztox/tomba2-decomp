// FUN_80120850

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_80120850(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_zero;
  undefined4 in_v0;
  int iVar4;
  uint *puVar5;
  undefined4 *in_v1;
  uint uVar6;
  int iVar7;
  undefined2 *in_t0;
  uint *in_t1;
  int *in_t2;
  undefined2 *in_t3;
  undefined2 *puVar8;
  int iVar9;
  undefined4 *in_t5;
  undefined4 *puVar10;
  int *in_t6;
  uint in_t7;
  int unaff_s0;
  int iStackX_4;
  int iStackX_8;
  
  *(short *)(unaff_s0 + 0x72) = (short)in_v0;
  setCopReg(2,0x4000,in_v0);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x10));
  copFunction(2,0x780010);
  uVar3 = getCopReg(2,0x16);
  *in_v1 = uVar3;
  setCopReg(2,0x4000,iStackX_4 >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -10));
  copFunction(2,0x780010);
  uVar6 = getCopReg(2,0x16);
  in_t1[4] = uVar6;
  setCopReg(2,0x4000,iStackX_8 >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -4));
  copFunction(2,0x780010);
  uVar6 = getCopReg(2,0x16);
  in_t1[7] = uVar6;
  *in_t0 = *in_t3;
  puVar5 = (uint *)(param_2 + *in_t2 * 4);
  *in_t1 = *puVar5 | 0x9000000;
  *puVar5 = (uint)in_t1;
  do {
    do {
      do {
        puVar8 = in_t3 + 0x12;
        puVar10 = in_t5 + 9;
        iVar7 = param_3 + -1;
        if (param_3 == 0) {
          _DAT_800bf544 = in_t1 + 10;
          return puVar10;
        }
        setCopReg(2,in_zero,in_t5[0xd]);
        setCopReg(2,param_3,in_t5[0xf]);
        setCopReg(2,0x800,in_t5[0xe]);
        setCopReg(2,0x9000000,in_t5[0x10]);
        setCopReg(2,0x1800,(uint)in_t5[0xe] >> 0x10);
        setCopReg(2,param_2,in_t5[0x11]);
        *(undefined4 *)(in_t0 + 4) = *puVar10;
        copFunction(2,0x280030);
        *(undefined4 *)(in_t0 + 8) = *(undefined4 *)(in_t3 + 5);
        *(undefined4 *)(in_t0 + 0xe) = *(undefined4 *)(in_t3 + 7);
        uVar6 = *(uint *)(in_t3 + 3);
        iVar9 = getCopControlWord(2,0xf800);
        *in_t6 = iVar9;
        param_3 = iVar7;
        in_t3 = puVar8;
        in_t5 = puVar10;
      } while (*in_t6 < 0);
      copFunction(2,0x1400006);
      *(uint *)(in_t0 + 10) = uVar6 & in_t7;
      iVar7 = getCopReg(2,0x18);
      *in_t6 = iVar7;
    } while (*in_t6 < 1);
    uVar1 = getCopReg(2,0xc);
    in_t1[0xc] = uVar1;
    uVar1 = getCopReg(2,0xd);
    in_t1[0xf] = uVar1;
    uVar1 = getCopReg(2,0xe);
    in_t1[0x12] = uVar1;
  } while ((((0x13f < (ushort)in_t0[6]) && (0x13f < (ushort)in_t0[0xc])) &&
           (0x13f < (ushort)in_t0[0x12])) ||
          (((0xef < (ushort)in_t0[7] && (0xef < (ushort)in_t0[0xd])) && (0xef < (ushort)in_t0[0x13])
           )));
  *(uint *)(in_t0 + 0x10) = uVar6 << 4 & in_t7;
  iVar7 = getCopReg(2,0x11);
  iVar9 = getCopReg(2,0x12);
  iVar2 = getCopReg(2,0x13);
  iVar4 = iVar2 >> 2;
  if (uVar6 >> 0x18 == 1) {
    if (iVar7 <= iVar9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar2 < iVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (uVar6 >> 0x18 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar7 < iVar9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar9 < iVar2) {
      iVar4 = iVar9 >> 2;
    }
  }
  *in_t2 = iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

