// FUN_801345ec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_801345ec(int param_1,int param_2)

{
  undefined4 in_zero;
  byte bVar1;
  short sVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  char cVar7;
  uint uVar8;
  uint *in_t0;
  int in_t1;
  uint *in_t2;
  uint in_t3;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar14 = *(int *)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return (uint *)0x0;
      }
      do {
        puVar3 = in_t0 + 9;
        if (in_t1 == 0) {
          _DAT_800bf544 = in_t2;
          return puVar3;
        }
        setCopReg(2,in_zero,in_t0[0xd]);
        uVar4 = in_t0[0xe];
        setCopReg(2,uVar4,in_t0[0xf]);
        setCopReg(2,0x800,uVar4);
        setCopReg(2,1,in_t0[0x10]);
        setCopReg(2,0x1800,uVar4 >> 0x10);
        setCopReg(2,0x2800,in_t0[0x11]);
        in_t2[9] = in_t0[0x11] >> 0x10;
        copFunction(2,0x280030);
        uVar4 = in_t0[0xc];
        uVar10 = *puVar3;
        uVar11 = in_t0[10];
        iVar14 = getCopControlWord(2,0xf800);
        in_t2[3] = in_t0[0xb];
        in_t2[6] = uVar4;
        if (-1 < iVar14) {
          uVar8 = getCopReg(2,0x6000);
          uVar4 = getCopReg(2,0xc);
          in_t2[2] = uVar4;
          uVar9 = getCopReg(2,0x6800);
          uVar4 = getCopReg(2,0xd);
          in_t2[5] = uVar4;
          uVar12 = getCopReg(2,0x7000);
          uVar4 = getCopReg(2,0xe);
          in_t2[8] = uVar4;
          if (((uVar8 < 0xf00000) || (uVar9 < 0xf00000)) || (uVar12 < 0xf00000)) {
            if (((uVar8 << 0x10 < 0x1400000) || (uVar9 << 0x10 < 0x1400000)) ||
               (uVar12 << 0x10 < 0x1400000)) {
              copFunction(2,0x1400006);
              in_t2[4] = uVar11 & in_t3;
              in_t2[1] = uVar10;
              iVar14 = getCopReg(2,0xc000);
              in_t2[7] = uVar11 << 4 & in_t3;
              if (0 < iVar14) {
                if (uVar11 >> 0x18 == 0) {
                  copFunction(2,0x158002d);
                  iVar14 = getCopReg(2,0x3800);
                }
                else {
                  iVar5 = getCopReg(2,0x8800);
                  iVar14 = getCopReg(2,0x9000);
                  iVar13 = getCopReg(2,0x9800);
                  if ((uVar11 >> 0x18 & 2) == 0) {
                    if (iVar5 - iVar14 < 1) {
                      iVar5 = iVar14;
                    }
                    iVar14 = iVar5 >> 2;
                    if (iVar5 - iVar13 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                  }
                  else {
                    if (-1 < iVar5 - iVar14) {
                      iVar5 = iVar14;
                    }
                    iVar14 = iVar5 >> 2;
                    if (-1 < iVar5 - iVar13) {
                      halt_baddata();
                    }
                  }
                }
                iVar14 = (iVar14 >> (iVar14 >> 10 & 0x1fU)) + (iVar14 >> 10) * 0x200;
                if ((iVar14 + -0x7ff < 0) && (0 < iVar14 + -4)) {
                  puVar6 = (uint *)(param_2 + iVar14 * 4);
                  uVar4 = *puVar6;
                  *puVar6 = (uint)in_t2;
                  *in_t2 = uVar4 | 0x9000000;
                  in_t2 = in_t2 + 10;
                }
              }
            }
          }
        }
        in_t1 = in_t1 + -1;
        in_t0 = puVar3;
      } while( true );
    }
    if (bVar1 != 0) {
      _DAT_800bf544 = in_t2;
      return in_t0;
    }
    *(undefined4 *)(param_1 + 0x50) = 0x8014afc0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 0x55) = 0x20;
    *(undefined1 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x5a) = 0x100;
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  bVar1 = *(char *)(param_1 + 0x5c) - 1;
  *(byte *)(param_1 + 0x5c) = bVar1;
  if ((int)((uint)bVar1 << 0x18) < 1) {
    puVar3 = (uint *)func_0x80074590(0x1b,0xc,0x24);
    return puVar3;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    iVar14 = func_0x80083e80((int)*(short *)(param_1 + 0x58));
    *(short *)(param_1 + 0x56) = (short)(iVar14 >> 10) + 0xa0;
    puVar3 = (uint *)func_0x8009a450();
    return puVar3;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      puVar3 = (uint *)FUN_8013d798();
      return puVar3;
    }
    if (-1 < *(char *)(param_1 + 0x55)) {
      *(char *)(param_1 + 0x55) = *(char *)(param_1 + 0x55) + '\x01';
    }
    sVar2 = *(short *)(param_1 + 0x56) + 2;
    *(short *)(param_1 + 0x56) = sVar2;
    if (sVar2 < 0xa0) {
      puVar3 = (uint *)FUN_8013d798();
      return puVar3;
    }
FUN_801347e4:
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    puVar3 = (uint *)FUN_8013d798();
    return puVar3;
  }
  if (bVar1 == 2) {
    cVar7 = *(char *)(param_1 + 0x55) + -1;
    *(char *)(param_1 + 0x55) = cVar7;
    *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 10;
    if (cVar7 == '\0') goto FUN_801347e4;
  }
  else {
    if (bVar1 != 3) {
      puVar3 = (uint *)FUN_8013d798();
      return puVar3;
    }
    *(undefined1 *)(param_1 + 4) = 2;
  }
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar14 + 0x30);
  *(char *)(param_1 + 7) = *(char *)(param_1 + 0x54) << 5;
  bVar1 = *(char *)(param_1 + 0x54) + 1;
  *(byte *)(param_1 + 0x54) = bVar1;
  if (5 < bVar1) {
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  func_0x8002b278(param_1);
  iVar14 = (int)*(short *)(iVar14 + 0x16);
  if (iVar14 < 0) {
    iVar14 = iVar14 + 3;
  }
  *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + (short)(iVar14 >> 2);
  _DAT_800bf544 = in_t2;
  return in_t0;
}

