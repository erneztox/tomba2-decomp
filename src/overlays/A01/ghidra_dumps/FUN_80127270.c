// FUN_80127270

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_80127270(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 in_zero;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int in_t0;
  int in_t1;
  uint in_t2;
  int iVar7;
  int *in_t5;
  int in_t7;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint *in_t8;
  int *in_t9;
  
  while (iVar7 = param_3, 0xef < *(ushort *)(in_t0 + -3)) {
    do {
      do {
        do {
          do {
            puVar3 = in_t8;
            iVar5 = in_t7;
            in_t7 = iVar5 + 0x2c;
            in_t8 = puVar3 + 0xb;
            param_3 = iVar7 + -1;
            if (iVar7 == 0) {
              _DAT_800bf544 = in_t1;
              return in_t8;
            }
            setCopReg(2,in_zero,puVar3[0x10]);
            setCopReg(2,0x800,puVar3[0x11]);
            setCopReg(2,0x1800,puVar3[0x11] >> 0x10);
            setCopReg(2,iVar7,puVar3[0x12]);
            setCopReg(2,param_1,puVar3[0x13]);
            setCopReg(2,0x2800,puVar3[0x14]);
            uVar4 = *in_t8;
            *(uint *)(in_t0 + -0x2d) = uVar4 & 0xfff0f0f0;
            copFunction(2,0x280030);
            *(uint *)(in_t0 + -0x21) = uVar4 << 4 & unaff_s3;
            uVar4 = *(uint *)(iVar5 + 0x20);
            iVar7 = getCopControlWord(2,0xf800);
            *in_t9 = iVar7;
            iVar7 = param_3;
          } while (*in_t9 < 0);
          copFunction(2,0x1400006);
          *(undefined4 *)(in_t0 + -0x25) = *(undefined4 *)(iVar5 + 0x24);
          iVar6 = getCopReg(2,0x18);
          *in_t9 = iVar6;
        } while (*in_t9 < 1);
        uVar2 = getCopReg(2,0xc);
        *(undefined4 *)(in_t1 + 8) = uVar2;
        uVar2 = getCopReg(2,0xd);
        *(undefined4 *)(in_t1 + 0x14) = uVar2;
        uVar2 = getCopReg(2,0xe);
        *(undefined4 *)(in_t1 + 0x20) = uVar2;
        setCopReg(2,in_zero,puVar3[0x15]);
        setCopReg(2,0x800,puVar3[0x14] >> 0x10);
        *(uint *)(in_t0 + -0x15) = uVar4 & unaff_s3;
        copFunction(2,0x180001);
        *(uint *)(in_t0 + -9) = uVar4 << 4 & unaff_s3;
        *(undefined4 *)(in_t0 + -0x19) = *(undefined4 *)(iVar5 + 0x28);
        iVar5 = getCopControlWord(2,0xf800);
        *in_t9 = iVar5;
      } while (*in_t9 < 0);
      uVar2 = getCopReg(2,0xe);
      *(undefined4 *)(in_t1 + 0x2c) = uVar2;
    } while ((((0x13f < *(ushort *)(in_t0 + -0x29)) && (0x13f < *(ushort *)(in_t0 + -0x1d))) &&
             (0x13f < *(ushort *)(in_t0 + -0x11))) && (0x13f < *(ushort *)(in_t0 + -5)));
    in_t2 = uVar4 >> 0x18;
    if (((*(ushort *)(in_t0 + -0x27) < 0xf0) || (*(ushort *)(in_t0 + -0x1b) < 0xf0)) ||
       (*(ushort *)(in_t0 + -0xf) < 0xf0)) break;
  }
  _DAT_1f800084 = getCopReg(2,0x10);
  _DAT_1f800088 = getCopReg(2,0x11);
  _DAT_1f80008c = getCopReg(2,0x12);
  _DAT_1f800090 = getCopReg(2,0x13);
  if ((in_t2 & 3) == 1) {
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
    if ((in_t2 & 3) != 2) {
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

