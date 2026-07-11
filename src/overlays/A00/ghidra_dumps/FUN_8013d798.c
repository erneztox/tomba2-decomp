// FUN_8013d798

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8013d798(undefined4 param_1,int param_2)

{
  undefined4 in_zero;
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *in_t0;
  uint *puVar6;
  int in_t1;
  uint *in_t2;
  uint in_t3;
  uint uVar7;
  uint uVar8;
  int in_t5;
  uint uVar9;
  uint uVar10;
  int in_t7;
  
  do {
    iVar2 = in_t5;
    do {
      iVar1 = iVar2 >> 2;
      if (-1 < iVar2 - in_t7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      while( true ) {
        while( true ) {
          iVar2 = (iVar1 >> (iVar1 >> 10 & 0x1fU)) + (iVar1 >> 10) * 0x200;
          puVar6 = in_t0;
          if ((iVar2 + -0x7ff < 0) && (0 < iVar2 + -4)) {
            puVar3 = (uint *)(param_2 + iVar2 * 4);
            uVar5 = *puVar3;
            *puVar3 = (uint)in_t2;
            *in_t2 = uVar5 | 0x9000000;
            in_t2 = in_t2 + 10;
          }
          do {
            do {
              do {
                do {
                  in_t1 = in_t1 + -1;
                  in_t0 = puVar6 + 9;
                  if (in_t1 == 0) {
                    _DAT_800bf544 = in_t2;
                    return in_t0;
                  }
                  setCopReg(2,in_zero,puVar6[0xd]);
                  uVar5 = puVar6[0xe];
                  setCopReg(2,uVar5,puVar6[0xf]);
                  setCopReg(2,0x800,uVar5);
                  setCopReg(2,param_1,puVar6[0x10]);
                  setCopReg(2,0x1800,uVar5 >> 0x10);
                  setCopReg(2,0x2800,puVar6[0x11]);
                  in_t2[9] = puVar6[0x11] >> 0x10;
                  copFunction(2,0x280030);
                  uVar5 = puVar6[0xc];
                  uVar8 = *in_t0;
                  uVar9 = puVar6[10];
                  iVar2 = getCopControlWord(2,0xf800);
                  in_t2[3] = puVar6[0xb];
                  in_t2[6] = uVar5;
                  puVar6 = in_t0;
                } while (iVar2 < 0);
                uVar4 = getCopReg(2,0x6000);
                uVar5 = getCopReg(2,0xc);
                in_t2[2] = uVar5;
                uVar7 = getCopReg(2,0x6800);
                uVar5 = getCopReg(2,0xd);
                in_t2[5] = uVar5;
                uVar10 = getCopReg(2,0x7000);
                uVar5 = getCopReg(2,0xe);
                in_t2[8] = uVar5;
              } while (((0xefffff < uVar4) && (0xefffff < uVar7)) && (0xefffff < uVar10));
            } while (((0x13fffff < uVar4 << 0x10) && (0x13fffff < uVar7 << 0x10)) &&
                    (0x13fffff < uVar10 << 0x10));
            copFunction(2,0x1400006);
            in_t2[4] = uVar9 & in_t3;
            in_t2[1] = uVar8;
            iVar2 = getCopReg(2,0xc000);
            in_t2[7] = uVar9 << 4 & in_t3;
          } while (iVar2 < 1);
          if (uVar9 >> 0x18 != 0) break;
          copFunction(2,0x158002d);
          iVar1 = getCopReg(2,0x3800);
        }
        iVar2 = getCopReg(2,0x8800);
        in_t5 = getCopReg(2,0x9000);
        in_t7 = getCopReg(2,0x9800);
        if ((uVar9 >> 0x18 & 2) != 0) break;
        if (iVar2 - in_t5 < 1) {
          iVar2 = in_t5;
        }
        iVar1 = iVar2 >> 2;
        if (iVar2 - in_t7 < 1) {
          halt_baddata();
        }
      }
    } while (iVar2 - in_t5 < 0);
  } while( true );
}

