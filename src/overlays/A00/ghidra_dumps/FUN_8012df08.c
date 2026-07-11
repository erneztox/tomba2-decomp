// FUN_8012df08

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8012df08(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_zero;
  int iVar4;
  uint uVar5;
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
  
  if (DAT_800bf809 != '\0') {
    if (*(char *)(unaff_s0 + 1) != '\0') {
      iVar4 = FUN_801389c8();
      goto LAB_80136ef8;
    }
    return (uint *)0x0;
  }
  iVar4 = FUN_80137198();
  in_t2 = *(int *)(iVar4 + -0xabc);
  in_t6 = (int *)&DAT_1f800000;
  if (param_3 != 0) {
    in_t7 = 0xf0f0f0;
    in_t3 = unaff_s0 + 0x10;
    in_t0 = in_t2 + 0x30;
    iVar4 = param_3;
    do {
      param_3 = iVar4 + -1;
      in_t4 = in_t5[6];
LAB_80136ef8:
      setCopReg(2,in_zero,in_t5[5]);
      setCopReg(2,0x800,in_t4);
      setCopReg(2,0x1800,in_t4 >> 0x10);
      setCopReg(2,iVar4,in_t5[7]);
      setCopReg(2,unaff_s0,in_t5[8]);
      setCopReg(2,0x2800,in_t5[9]);
      uVar5 = *in_t5;
      *(uint *)(in_t0 + -0x2c) = uVar5 & 0xfff0f0f0;
      copFunction(2,0x280030);
      *(uint *)(in_t0 + -0x20) = uVar5 << 4 & in_t7;
      uVar5 = *(uint *)(in_t3 + -0xc);
      iVar4 = getCopControlWord(2,0xf800);
      *in_t6 = iVar4;
      if (-1 < *in_t6) {
        copFunction(2,0x1400006);
        *(undefined4 *)(in_t0 + -0x24) = *(undefined4 *)(in_t3 + -8);
        iVar4 = getCopReg(2,0x18);
        *in_t6 = iVar4;
        if (0 < *in_t6) {
          uVar2 = getCopReg(2,0xc);
          *(undefined4 *)(in_t2 + 8) = uVar2;
          uVar2 = getCopReg(2,0xd);
          *(undefined4 *)(in_t2 + 0x14) = uVar2;
          uVar2 = getCopReg(2,0xe);
          *(undefined4 *)(in_t2 + 0x20) = uVar2;
          setCopReg(2,in_zero,in_t5[10]);
          setCopReg(2,0x800,in_t5[9] >> 0x10);
          *(uint *)(in_t0 + -0x14) = uVar5 & in_t7;
          copFunction(2,0x180001);
          *(uint *)(in_t0 + -8) = uVar5 << 4 & in_t7;
          *(undefined4 *)(in_t0 + -0x18) = *(undefined4 *)(in_t3 + -4);
          iVar4 = getCopControlWord(2,0xf800);
          *in_t6 = iVar4;
          if (-1 < *in_t6) {
            uVar2 = getCopReg(2,0xe);
            *(undefined4 *)(in_t2 + 0x2c) = uVar2;
            if (((((*(ushort *)(in_t0 + -0x28) < 0x140) || (*(ushort *)(in_t0 + -0x1c) < 0x140)) ||
                 (*(ushort *)(in_t0 + -0x10) < 0x140)) || (*(ushort *)(in_t0 + -4) < 0x140)) &&
               (((*(ushort *)(in_t0 + -0x26) < 0xf0 || (*(ushort *)(in_t0 + -0x1a) < 0xf0)) ||
                ((*(ushort *)(in_t0 + -0xe) < 0xf0 || (*(ushort *)(in_t0 + -2) < 0xf0)))))) {
              uVar5 = uVar5 >> 0x18 & 3;
              if (uVar5 == 1) {
                iVar4 = getCopReg(2,0x10);
                iVar7 = getCopReg(2,0x11);
                iVar3 = getCopReg(2,0x12);
                iVar6 = getCopReg(2,0x13);
                if (iVar7 < iVar4) {
                  iVar7 = iVar4;
                }
                bVar1 = iVar6 < iVar7;
                if (iVar6 < iVar3) {
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
                iVar7 = getCopReg(2,0x11);
                iVar3 = getCopReg(2,0x12);
                iVar6 = getCopReg(2,0x13);
                if (iVar4 < iVar7) {
                  iVar7 = iVar4;
                }
                bVar1 = iVar7 < iVar6;
                if (iVar3 < iVar6) {
                  bVar1 = iVar7 < iVar3;
                  iVar6 = iVar3;
                }
              }
              if (bVar1) {
                iVar6 = iVar7;
              }
              *in_t1 = iVar6 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
      in_t3 = in_t3 + 0x2c;
      in_t5 = in_t5 + 0xb;
      iVar4 = param_3;
    } while (param_3 != 0);
  }
  _DAT_800bf544 = in_t2;
  return in_t5;
}

