// FUN_80124c00

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8012de38) */
/* WARNING: Removing unreachable block (ram,0x8012de44) */
/* WARNING: Removing unreachable block (ram,0x8012de4c) */
/* WARNING: Removing unreachable block (ram,0x8012df54) */
/* WARNING: Removing unreachable block (ram,0x8012df5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_80124c00(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 in_zero;
  int iVar3;
  int extraout_v1;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_t0;
  int *in_t1;
  int in_t2;
  int in_t3;
  uint in_t4;
  uint *in_t5;
  int *in_t6;
  uint in_t7;
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 5) = 1;
  iVar7 = 0xf;
  *(undefined4 *)(unaff_s0 + 0x3c) = _DAT_800ecf80;
  iVar6 = unaff_s0;
  func_0x80077b38();
  *(undefined2 *)(unaff_s0 + 0x60) = 0x40;
  iVar3 = -0x20;
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
  *(undefined2 *)(unaff_s0 + 100) = 0xffe0;
  if (extraout_v1 == 0) {
    iVar3 = FUN_80136f08();
    iVar6 = unaff_s0;
  }
  do {
    setCopReg(2,in_zero,in_t5[5]);
    setCopReg(2,0x800,in_t4);
    setCopReg(2,0x1800,in_t4 >> 0x10);
    setCopReg(2,iVar3,in_t5[7]);
    setCopReg(2,iVar6,in_t5[8]);
    setCopReg(2,0x2800,in_t5[9]);
    uVar4 = *in_t5;
    *(uint *)(in_t0 + -0x2c) = uVar4 & 0xfff0f0f0;
    copFunction(2,0x280030);
    *(uint *)(in_t0 + -0x20) = uVar4 << 4 & in_t7;
    uVar4 = *(uint *)(in_t3 + -0xc);
    iVar3 = getCopControlWord(2,0xf800);
    *in_t6 = iVar3;
    if (-1 < *in_t6) {
      copFunction(2,0x1400006);
      *(undefined4 *)(in_t0 + -0x24) = *(undefined4 *)(in_t3 + -8);
      iVar3 = getCopReg(2,0x18);
      *in_t6 = iVar3;
      if (0 < *in_t6) {
        uVar2 = getCopReg(2,0xc);
        *(undefined4 *)(in_t2 + 8) = uVar2;
        uVar2 = getCopReg(2,0xd);
        *(undefined4 *)(in_t2 + 0x14) = uVar2;
        uVar2 = getCopReg(2,0xe);
        *(undefined4 *)(in_t2 + 0x20) = uVar2;
        setCopReg(2,in_zero,in_t5[10]);
        setCopReg(2,0x800,in_t5[9] >> 0x10);
        *(uint *)(in_t0 + -0x14) = uVar4 & in_t7;
        copFunction(2,0x180001);
        *(uint *)(in_t0 + -8) = uVar4 << 4 & in_t7;
        *(undefined4 *)(in_t0 + -0x18) = *(undefined4 *)(in_t3 + -4);
        iVar3 = getCopControlWord(2,0xf800);
        *in_t6 = iVar3;
        if (-1 < *in_t6) {
          uVar2 = getCopReg(2,0xe);
          *(undefined4 *)(in_t2 + 0x2c) = uVar2;
          if (((((*(ushort *)(in_t0 + -0x28) < 0x140) || (*(ushort *)(in_t0 + -0x1c) < 0x140)) ||
               (*(ushort *)(in_t0 + -0x10) < 0x140)) || (*(ushort *)(in_t0 + -4) < 0x140)) &&
             (((*(ushort *)(in_t0 + -0x26) < 0xf0 || (*(ushort *)(in_t0 + -0x1a) < 0xf0)) ||
              ((*(ushort *)(in_t0 + -0xe) < 0xf0 || (*(ushort *)(in_t0 + -2) < 0xf0)))))) {
            uVar4 = uVar4 >> 0x18 & 3;
            if (uVar4 == 1) {
              iVar3 = getCopReg(2,0x10);
              iVar6 = getCopReg(2,0x11);
              iVar7 = getCopReg(2,0x12);
              iVar5 = getCopReg(2,0x13);
              if (iVar6 < iVar3) {
                iVar6 = iVar3;
              }
              bVar1 = iVar5 < iVar6;
              if (iVar5 < iVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else {
              if (uVar4 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              iVar3 = getCopReg(2,0x10);
              iVar6 = getCopReg(2,0x11);
              iVar7 = getCopReg(2,0x12);
              iVar5 = getCopReg(2,0x13);
              if (iVar3 < iVar6) {
                iVar6 = iVar3;
              }
              bVar1 = iVar6 < iVar5;
              if (iVar7 < iVar5) {
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
        }
      }
    }
    in_t3 = in_t3 + 0x2c;
    if (iVar7 == 0) {
      _DAT_800bf544 = in_t2;
      return in_t5 + 0xb;
    }
    in_t4 = in_t5[0x11];
    iVar3 = iVar7;
    iVar7 = iVar7 + -1;
    in_t5 = in_t5 + 0xb;
  } while( true );
}

