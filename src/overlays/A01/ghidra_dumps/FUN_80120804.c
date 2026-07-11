// FUN_80120804

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_80120804(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_zero;
  undefined4 *in_v0;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined2 *in_t0;
  uint *in_t1;
  int *in_t2;
  undefined2 *in_t3;
  undefined2 *puVar9;
  int iVar10;
  undefined4 *in_t5;
  undefined4 *puVar11;
  int *in_t6;
  uint in_t7;
  int unaff_s0;
  int iStackX_4;
  int iStackX_8;
  
  if (in_v0 != (undefined4 *)0x0) {
    in_v0[7] = 0x80127e94;
    *(undefined1 *)((int)in_v0 + 2) = 0x16;
    uVar1 = *(undefined1 *)(unaff_s0 + 3);
    in_v0[4] = unaff_s0;
    *(undefined1 *)((int)in_v0 + 3) = uVar1;
    *(undefined1 *)((int)in_v0 + 0x2a) = *(undefined1 *)(unaff_s0 + 0x2a);
  }
  *(undefined2 *)(unaff_s0 + 0x76) = 1;
  *(undefined2 *)(unaff_s0 + 0x74) = 0xffff;
  *(undefined2 *)(unaff_s0 + 0x72) = 7;
  setCopReg(2,0x4000,7);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x10));
  copFunction(2,0x780010);
  uVar4 = getCopReg(2,0x16);
  *in_v0 = uVar4;
  setCopReg(2,0x4000,iStackX_4 >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -10));
  copFunction(2,0x780010);
  uVar7 = getCopReg(2,0x16);
  in_t1[4] = uVar7;
  setCopReg(2,0x4000,iStackX_8 >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -4));
  copFunction(2,0x780010);
  uVar7 = getCopReg(2,0x16);
  in_t1[7] = uVar7;
  *in_t0 = *in_t3;
  puVar6 = (uint *)(param_2 + *in_t2 * 4);
  *in_t1 = *puVar6 | 0x9000000;
  *puVar6 = (uint)in_t1;
  iVar10 = 0;
  do {
    do {
      do {
        puVar9 = in_t3 + 0x12;
        puVar11 = in_t5 + 9;
        iVar8 = iVar10 + -1;
        if (iVar10 == 0) {
          _DAT_800bf544 = in_t1 + 10;
          return puVar11;
        }
        setCopReg(2,in_zero,in_t5[0xd]);
        setCopReg(2,iVar10,in_t5[0xf]);
        setCopReg(2,0x800,in_t5[0xe]);
        setCopReg(2,0x9000000,in_t5[0x10]);
        setCopReg(2,0x1800,(uint)in_t5[0xe] >> 0x10);
        setCopReg(2,param_2,in_t5[0x11]);
        *(undefined4 *)(in_t0 + 4) = *puVar11;
        copFunction(2,0x280030);
        *(undefined4 *)(in_t0 + 8) = *(undefined4 *)(in_t3 + 5);
        *(undefined4 *)(in_t0 + 0xe) = *(undefined4 *)(in_t3 + 7);
        uVar7 = *(uint *)(in_t3 + 3);
        iVar10 = getCopControlWord(2,0xf800);
        *in_t6 = iVar10;
        iVar10 = iVar8;
        in_t3 = puVar9;
        in_t5 = puVar11;
      } while (*in_t6 < 0);
      copFunction(2,0x1400006);
      *(uint *)(in_t0 + 10) = uVar7 & in_t7;
      iVar8 = getCopReg(2,0x18);
      *in_t6 = iVar8;
    } while (*in_t6 < 1);
    uVar2 = getCopReg(2,0xc);
    in_t1[0xc] = uVar2;
    uVar2 = getCopReg(2,0xd);
    in_t1[0xf] = uVar2;
    uVar2 = getCopReg(2,0xe);
    in_t1[0x12] = uVar2;
  } while ((((0x13f < (ushort)in_t0[6]) && (0x13f < (ushort)in_t0[0xc])) &&
           (0x13f < (ushort)in_t0[0x12])) ||
          (((0xef < (ushort)in_t0[7] && (0xef < (ushort)in_t0[0xd])) && (0xef < (ushort)in_t0[0x13])
           )));
  *(uint *)(in_t0 + 0x10) = uVar7 << 4 & in_t7;
  iVar10 = getCopReg(2,0x11);
  iVar8 = getCopReg(2,0x12);
  iVar3 = getCopReg(2,0x13);
  iVar5 = iVar3 >> 2;
  if (uVar7 >> 0x18 == 1) {
    if (iVar10 <= iVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar3 < iVar10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (uVar7 >> 0x18 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar10 < iVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar8 < iVar3) {
      iVar5 = iVar8 >> 2;
    }
  }
  *in_t2 = iVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

