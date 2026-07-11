// FUN_80134780

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_80134780(undefined4 param_1,int param_2)

{
  undefined4 in_zero;
  byte bVar1;
  int in_v0;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *in_t0;
  uint *puVar6;
  int in_t1;
  uint *in_t2;
  uint in_t3;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int in_t8;
  
  *(short *)(unaff_s0 + 8) = *(short *)(unaff_s0 + 8) + 0x80 + (short)(in_v0 >> 9);
  if (-1 < *(char *)(unaff_s0 + 5)) {
    *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
  }
  uVar2 = (uint)(*(short *)(unaff_s2 + 2) < -1000);
  if (uVar2 == 0) {
    *(undefined2 *)(unaff_s1 + 0x2e) = *(undefined2 *)(unaff_s2 + 0x30);
    *(char *)(unaff_s1 + 7) = *(char *)(unaff_s0 + 4) << 5;
    bVar1 = *(char *)(unaff_s0 + 4) + 1;
    *(byte *)(unaff_s0 + 4) = bVar1;
    if (5 < bVar1) {
      *(undefined1 *)(unaff_s0 + 4) = 0;
    }
    func_0x8002b278();
    iVar3 = (int)*(short *)(unaff_s2 + 0x16);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    *(short *)(unaff_s1 + 0x4a) = *(short *)(unaff_s1 + 0x4a) + (short)(iVar3 >> 2);
    _DAT_800bf544 = in_t2;
    return in_t0;
  }
  do {
    iVar3 = (int)uVar2 >> 2;
    if (in_t8 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    while( true ) {
      while( true ) {
        iVar3 = (iVar3 >> (iVar3 >> 10 & 0x1fU)) + (iVar3 >> 10) * 0x200;
        puVar6 = in_t0;
        if ((iVar3 + -0x7ff < 0) && (0 < iVar3 + -4)) {
          puVar4 = (uint *)(param_2 + iVar3 * 4);
          uVar2 = *puVar4;
          *puVar4 = (uint)in_t2;
          *in_t2 = uVar2 | 0x9000000;
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
                uVar2 = puVar6[0xe];
                setCopReg(2,uVar2,puVar6[0xf]);
                setCopReg(2,0x800,uVar2);
                setCopReg(2,param_1,puVar6[0x10]);
                setCopReg(2,0x1800,uVar2 >> 0x10);
                setCopReg(2,0x2800,puVar6[0x11]);
                in_t2[9] = puVar6[0x11] >> 0x10;
                copFunction(2,0x280030);
                uVar2 = puVar6[0xc];
                uVar8 = *in_t0;
                uVar9 = puVar6[10];
                iVar3 = getCopControlWord(2,0xf800);
                in_t2[3] = puVar6[0xb];
                in_t2[6] = uVar2;
                puVar6 = in_t0;
              } while (iVar3 < 0);
              uVar5 = getCopReg(2,0x6000);
              uVar2 = getCopReg(2,0xc);
              in_t2[2] = uVar2;
              uVar7 = getCopReg(2,0x6800);
              uVar2 = getCopReg(2,0xd);
              in_t2[5] = uVar2;
              uVar10 = getCopReg(2,0x7000);
              uVar2 = getCopReg(2,0xe);
              in_t2[8] = uVar2;
            } while (((0xefffff < uVar5) && (0xefffff < uVar7)) && (0xefffff < uVar10));
          } while (((0x13fffff < uVar5 << 0x10) && (0x13fffff < uVar7 << 0x10)) &&
                  (0x13fffff < uVar10 << 0x10));
          copFunction(2,0x1400006);
          in_t2[4] = uVar9 & in_t3;
          in_t2[1] = uVar8;
          iVar3 = getCopReg(2,0xc000);
          in_t2[7] = uVar9 << 4 & in_t3;
        } while (iVar3 < 1);
        if (uVar9 >> 0x18 != 0) break;
        copFunction(2,0x158002d);
        iVar3 = getCopReg(2,0x3800);
      }
      uVar2 = getCopReg(2,0x8800);
      uVar8 = getCopReg(2,0x9000);
      iVar11 = getCopReg(2,0x9800);
      if ((uVar9 >> 0x18 & 2) == 0) break;
      if (-1 < (int)(uVar2 - uVar8)) {
        uVar2 = uVar8;
      }
      iVar3 = (int)uVar2 >> 2;
      if (-1 < (int)(uVar2 - iVar11)) {
        halt_baddata();
      }
    }
    if ((int)(uVar2 - uVar8) < 1) {
      uVar2 = uVar8;
    }
    in_t8 = uVar2 - iVar11;
  } while( true );
}

