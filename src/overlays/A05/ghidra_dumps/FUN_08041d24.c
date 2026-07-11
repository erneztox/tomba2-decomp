// FUN_08041d24

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_08041d24(undefined4 param_1,int param_2)

{
  undefined4 in_zero;
  uint in_v0;
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *in_t0;
  int in_t1;
  uint *in_t2;
  uint in_t3;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  do {
    setCopReg(2,0x1800,in_v0 >> 0x10);
    setCopReg(2,0x2800,in_t0[8]);
    in_t2[9] = in_t0[8] >> 0x10;
    copFunction(2,0x280030);
    uVar4 = in_t0[1];
    uVar5 = *in_t0;
    uVar6 = in_t0[3];
    iVar1 = getCopControlWord(2,0xf800);
    in_t2[3] = in_t0[2];
    in_t2[6] = uVar6;
    if (-1 < iVar1) {
      copFunction(2,0x1400006);
      setCopReg(2,0xa000,uVar5);
      setCopReg(2,0x3000,uVar5);
      setCopReg(2,0xa800,uVar4 & in_t3);
      setCopReg(2,0xb000,uVar4 << 4 & in_t3);
      iVar1 = getCopReg(2,0xc000);
      if (0 < iVar1) {
        uVar5 = getCopReg(2,0x6000);
        uVar6 = getCopReg(2,0x6800);
        uVar8 = getCopReg(2,0x7000);
        if (((uVar5 < 0xf00000) || (uVar6 < 0xf00000)) || (uVar8 < 0xf00000)) {
          if (((uVar5 << 0x10 < 0x1400000) || (uVar6 << 0x10 < 0x1400000)) ||
             (uVar8 << 0x10 < 0x1400000)) {
            uVar5 = getCopReg(2,0xc);
            in_t2[2] = uVar5;
            uVar5 = getCopReg(2,0xd);
            in_t2[5] = uVar5;
            uVar5 = getCopReg(2,0xe);
            in_t2[8] = uVar5;
            copFunction(2,0x158002d);
            iVar1 = getCopReg(2,0x3800);
            if (0 < iVar1) {
              iVar1 = iVar1 * 4 + -0x40;
              if (iVar1 < 1) {
                iVar1 = 0;
              }
              if (-1 < iVar1 + -0x1000) {
                iVar1 = 0x1000;
              }
              setCopReg(2,0x4000,iVar1);
              copFunction(2,0xf8002a);
              uVar5 = getCopReg(2,0x14);
              in_t2[1] = uVar5;
              uVar5 = getCopReg(2,0x15);
              in_t2[4] = uVar5;
              uVar5 = getCopReg(2,0x16);
              in_t2[7] = uVar5;
              uVar4 = uVar4 >> 0x18;
              if ((uVar4 & 4) != 0) {
                uVar4 = in_t0[1];
                in_t2[1] = *in_t0;
                in_t2[4] = uVar4 & in_t3;
                in_t2[7] = uVar4 << 4 & in_t3;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (uVar4 == 0) {
                iVar1 = getCopReg(2,0x3800);
              }
              else {
                iVar2 = getCopReg(2,0x8800);
                iVar1 = getCopReg(2,0x9000);
                iVar7 = getCopReg(2,0x9800);
                if ((uVar4 & 2) == 0) {
                  if (iVar2 - iVar1 < 1) {
                    iVar2 = iVar1;
                  }
                  iVar1 = iVar2 >> 2;
                  if (iVar2 - iVar7 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                }
                else {
                  if (-1 < iVar2 - iVar1) {
                    iVar2 = iVar1;
                  }
                  iVar1 = iVar2 >> 2;
                  if (-1 < iVar2 - iVar7) {
                    halt_baddata();
                  }
                }
              }
              iVar1 = (iVar1 >> (iVar1 >> 10 & 0x1fU)) + (iVar1 >> 10) * 0x200;
              if ((iVar1 + -0x7ff < 0) && (0 < iVar1 + -4)) {
                puVar3 = (uint *)(param_2 + iVar1 * 4);
                uVar4 = *puVar3;
                *puVar3 = (uint)in_t2;
                *in_t2 = uVar4 | 0x9000000;
                in_t2 = in_t2 + 10;
              }
            }
          }
        }
      }
    }
    in_t1 = in_t1 + -1;
    if (in_t1 == 0) {
      _DAT_800bf544 = in_t2;
      return in_t0 + 9;
    }
    setCopReg(2,in_zero,in_t0[0xd]);
    in_v0 = in_t0[0xe];
    setCopReg(2,in_v0,in_t0[0xf]);
    setCopReg(2,0x800,in_v0);
    setCopReg(2,param_1,in_t0[0x10]);
    in_t0 = in_t0 + 9;
  } while( true );
}

