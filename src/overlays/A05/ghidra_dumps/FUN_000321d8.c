// FUN_000321d8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000320e0) overlaps instruction at (ram,0x000320dc)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000321d8(undefined4 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 in_zero;
  int in_v0;
  uint *puVar3;
  uint in_v1;
  uint uVar4;
  uint *in_t0;
  int in_t1;
  uint *in_t2;
  uint in_t3;
  uint uVar5;
  int in_t4;
  uint uVar6;
  int in_t6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  do {
    iVar9 = getCopReg(2,0x9800);
    if (in_v1 == 0) {
      if (in_v0 - in_t4 < 1) {
        in_v0 = in_t4;
      }
      if (in_t6 - iVar9 < 1) {
        in_t6 = iVar9;
      }
      iVar9 = in_v0 >> 2;
      if (in_v0 - in_t6 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (-1 < in_v0 - in_t4) {
        in_v0 = in_t4;
      }
      if (-1 < in_t6 - iVar9) {
        in_t6 = iVar9;
      }
      iVar9 = in_v0 >> 2;
      if (-1 < in_v0 - in_t6) {
        halt_baddata();
      }
    }
    while( true ) {
      iVar9 = (iVar9 >> (iVar9 >> 10 & 0x1fU)) + (iVar9 >> 10) * 0x200;
      uVar4 = iVar9 - 0x7ff;
      if (((int)uVar4 < 0) && (0 < iVar9 + -4)) {
        puVar3 = (uint *)(param_2 + iVar9 * 4);
        uVar4 = *puVar3;
        *puVar3 = (uint)in_t2;
        uVar4 = uVar4 | 0xc000000;
        *in_t2 = uVar4;
        in_t2 = in_t2 + 0xd;
      }
      do {
        do {
          do {
            do {
              puVar3 = in_t0;
              in_t1 = in_t1 + -1;
              in_t0 = puVar3 + 0xb;
              if (in_t1 == 0) {
                _DAT_800bf544 = in_t2;
                return CONCAT44(uVar4,in_t0);
              }
              setCopReg(2,in_zero,puVar3[0x10]);
              uVar4 = puVar3[0x11];
              setCopReg(2,uVar4,puVar3[0x12]);
              setCopReg(2,0x800,uVar4);
              setCopReg(2,param_1,puVar3[0x13]);
              setCopReg(2,0x1800,uVar4 >> 0x10);
              setCopReg(2,0x2800,puVar3[0x14]);
              uVar4 = puVar3[0x14] >> 0x10;
              copFunction(2,0x280030);
              uVar5 = *in_t0;
              uVar6 = puVar3[0xc];
              uVar7 = puVar3[0xe];
              iVar9 = getCopControlWord(2,0xf800);
              in_t2[3] = puVar3[0xd];
              in_t2[6] = uVar7;
            } while (iVar9 < 0);
            copFunction(2,0x1400006);
            iVar9 = getCopReg(2,0xc000);
          } while (iVar9 < 1);
          setCopReg(2,in_zero,puVar3[0x15]);
          setCopReg(2,0x800,uVar4);
          uVar7 = getCopReg(2,0x6000);
          uVar4 = getCopReg(2,0xc);
          in_t2[2] = uVar4;
          uVar8 = getCopReg(2,0x6800);
          uVar4 = getCopReg(2,0xd);
          in_t2[5] = uVar4;
          uVar10 = getCopReg(2,0x7000);
          uVar4 = getCopReg(2,0xe);
          in_t2[8] = uVar4;
          bVar1 = false;
          if (((0xefffff < uVar7) && (0xefffff < uVar8)) && (0xefffff < uVar10)) {
            bVar1 = true;
          }
          bVar2 = false;
          if (((0x13fffff < uVar7 << 0x10) && (0x13fffff < uVar8 << 0x10)) &&
             (0x13fffff < uVar10 << 0x10)) {
            bVar2 = true;
          }
          copFunction(2,0x180001);
          uVar4 = puVar3[0xf];
          uVar7 = uVar5 & in_t3;
          setCopReg(2,0xa000,uVar7);
          setCopReg(2,0x3000,uVar7);
          setCopReg(2,0xa800,uVar5 << 4 & in_t3);
          uVar5 = uVar6 & in_t3;
          setCopReg(2,0xb000,uVar5);
          iVar9 = getCopControlWord(2,0xf800);
          in_t2[9] = uVar4;
          in_t2[0xc] = uVar4 >> 0x10;
        } while (iVar9 < 0);
        uVar7 = getCopReg(2,0x7000);
        uVar4 = getCopReg(2,0xe);
        in_t2[0xb] = uVar4;
      } while (((0xefffff < uVar7) && (uVar4 = 0, bVar1)) ||
              ((0x13fffff < uVar7 << 0x10 && (uVar4 = 0, bVar2))));
      copFunction(2,0x158002e);
      iVar9 = getCopReg(2,0x3800);
      iVar9 = iVar9 * 4 + -0x40;
      if (iVar9 < 1) {
        iVar9 = 0;
      }
      if (-1 < iVar9 + -0x1000) {
        iVar9 = 0x1000;
      }
      setCopReg(2,0x4000,iVar9);
      copFunction(2,0xf8002a);
      uVar4 = getCopReg(2,0x14);
      in_t2[1] = uVar4;
      uVar4 = getCopReg(2,0x15);
      in_t2[4] = uVar4;
      uVar4 = getCopReg(2,0x16);
      in_t2[7] = uVar4;
      setCopReg(2,0x3000,uVar6 << 4 & in_t3);
      copFunction(2,0x780010);
      uVar4 = getCopReg(2,0x16);
      in_t2[10] = uVar4;
      uVar5 = uVar5 >> 0x18;
      if ((uVar5 & 4) != 0) {
        uVar4 = *in_t0;
        uVar5 = puVar3[0xc];
        in_t2[1] = uVar4 & in_t3;
        in_t2[4] = uVar4 << 4 & in_t3;
        in_t2[7] = uVar5 & in_t3;
        in_t2[10] = uVar5 << 4 & in_t3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      in_v1 = uVar5 & 2;
      if (uVar5 != 0) break;
      iVar9 = getCopReg(2,0x3800);
    }
    in_v0 = getCopReg(2,0x8000);
    in_t4 = getCopReg(2,0x8800);
    in_t6 = getCopReg(2,0x9000);
  } while( true );
}

