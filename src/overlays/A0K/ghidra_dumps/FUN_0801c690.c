// FUN_0801c690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0801c690(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 in_zero;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  short *psVar13;
  uint *puVar14;
  
  puVar14 = param_1;
  if (param_3 != 0) {
    psVar13 = (short *)((int)param_1 + 0x26);
    puVar12 = _DAT_800bf544 + 10;
    do {
      iVar9 = param_3 + -1;
      setCopReg(2,in_zero,puVar14[5]);
      setCopReg(2,0x800,puVar14[6]);
      setCopReg(2,0x1800,puVar14[6] >> 0x10);
      setCopReg(2,param_3,puVar14[7]);
      setCopReg(2,param_1,puVar14[8]);
      setCopReg(2,0x2800,puVar14[9]);
      uVar5 = *puVar14;
      puVar12[-9] = uVar5 & 0xfff0f0f0;
      copFunction(2,0x280030);
      puVar12[-6] = (uVar5 & 0xf0f0f) << 4;
      uVar5 = *(uint *)(psVar13 + -0x11);
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        puVar12[-7] = *(uint *)(psVar13 + -0xf);
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar1 = getCopReg(2,0xc);
          _DAT_800bf544[2] = uVar1;
          uVar1 = getCopReg(2,0xd);
          _DAT_800bf544[5] = uVar1;
          uVar1 = getCopReg(2,0xe);
          _DAT_800bf544[8] = uVar1;
          setCopReg(2,in_zero,puVar14[10]);
          setCopReg(2,0x800,puVar14[9] >> 0x10);
          puVar12[-3] = uVar5 & 0xf0f0f0;
          copFunction(2,0x180001);
          *puVar12 = (uVar5 & 0xf0f0f) << 4;
          puVar12[-4] = *(uint *)(psVar13 + -0xd);
          _DAT_1f800000 = getCopControlWord(2,0xf800);
          if (-1 < _DAT_1f800000) {
            uVar5 = getCopReg(2,0xe);
            _DAT_800bf544[0xb] = uVar5;
            if ((((((ushort)puVar12[-8] < 0x140) || ((ushort)puVar12[-5] < 0x140)) ||
                 ((ushort)puVar12[-2] < 0x140)) || ((ushort)puVar12[1] < 0x140)) &&
               (((*(ushort *)((int)puVar12 + -0x1e) < 0xf0 ||
                 (*(ushort *)((int)puVar12 + -0x12) < 0xf0)) ||
                ((*(ushort *)((int)puVar12 + -6) < 0xf0 || (*(ushort *)((int)puVar12 + 6) < 0xf0))))
               )) {
              puVar4 = (uint *)getCopReg(2,0x10);
              puVar10 = (uint *)getCopReg(2,0x11);
              param_1 = (uint *)getCopReg(2,0x12);
              puVar6 = (uint *)getCopReg(2,0x13);
              if ((int)puVar10 < (int)puVar4) {
                puVar10 = puVar4;
              }
              if ((int)puVar6 < (int)param_1) {
                puVar6 = param_1;
              }
              if ((int)puVar6 < (int)puVar10) {
                puVar6 = puVar10;
              }
              _DAT_1f800004 = (int)puVar6 >> 2;
              if (_DAT_1f800004 + 399U < 0x1b7) {
                _DAT_1f800004 = 0x28;
              }
              _DAT_1f800004 =
                   (_DAT_1f800004 >> (_DAT_1f800004 >> 10 & 0x1fU)) + (_DAT_1f800004 >> 10) * 0x200;
              if (0x7fb < _DAT_1f800004 - 4U) {
                _DAT_1f800004 = -1;
              }
              if (-1 < _DAT_1f800004) {
                uVar5 = *(uint *)(psVar13 + -0xb);
                puVar12[-1] = uVar5;
                puVar12[2] = uVar5 >> 0x10;
                iVar8 = (int)_DAT_1f8000c2;
                iVar11 = (int)_DAT_1f8000c0;
                iVar2 = -((int)psVar13[-9] - (int)_DAT_1f800160) * iVar11 +
                        ((int)psVar13[-7] - (int)_DAT_1f800164) * iVar8 >> 0xc;
                iVar3 = iVar2 << 1;
                iVar7 = (((int)psVar13[-9] - (int)_DAT_1f800160) * iVar8 +
                         ((int)psVar13[-7] - (int)_DAT_1f800164) * iVar11 >> 0xc) * 2;
                if (iVar3 < 0) {
                  iVar3 = iVar2 << 2;
                }
                iVar2 = iVar7 * iVar8 - iVar3 * iVar11 >> 0xc;
                iVar3 = iVar7 * iVar11 + iVar3 * iVar8 >> 0xc;
                if (iVar2 < 0) {
                  iVar2 = -iVar2;
                }
                if (iVar3 < 0) {
                  iVar3 = -iVar3;
                }
                iVar7 = iVar2;
                if (iVar2 < iVar3) {
                  iVar7 = iVar3;
                  iVar3 = iVar2;
                }
                iVar3 = iVar3 + (iVar3 >> 1);
                iVar3 = ((iVar7 - (iVar7 >> 5)) - (iVar7 >> 7)) + (iVar3 >> 2) + (iVar3 >> 6);
                iVar2 = ((int)psVar13[-8] - (int)_DAT_1f800162) + -0x100;
                if (iVar2 < 0) {
                  iVar2 = -iVar2;
                }
                iVar2 = (iVar3 - (iVar3 >> 2)) + iVar2;
                if (iVar2 < 0) {
                  iVar2 = 0;
                }
                setCopReg(2,0x4000,iVar2);
                setCopReg(2,0x3000,puVar12[-9]);
                copFunction(2,0x780010);
                uVar5 = getCopReg(2,0x16);
                _DAT_800bf544[1] = uVar5;
                iVar8 = (int)_DAT_1f8000c2;
                iVar11 = (int)_DAT_1f8000c0;
                iVar2 = -((int)psVar13[-5] - (int)_DAT_1f800160) * iVar11 +
                        ((int)psVar13[-6] - (int)_DAT_1f800164) * iVar8 >> 0xc;
                iVar3 = iVar2 << 1;
                iVar7 = (((int)psVar13[-5] - (int)_DAT_1f800160) * iVar8 +
                         ((int)psVar13[-6] - (int)_DAT_1f800164) * iVar11 >> 0xc) * 2;
                if (iVar3 < 0) {
                  iVar3 = iVar2 << 2;
                }
                iVar2 = iVar7 * iVar8 - iVar3 * iVar11 >> 0xc;
                iVar3 = iVar7 * iVar11 + iVar3 * iVar8 >> 0xc;
                if (iVar2 < 0) {
                  iVar2 = -iVar2;
                }
                if (iVar3 < 0) {
                  iVar3 = -iVar3;
                }
                iVar7 = iVar2;
                if (iVar2 < iVar3) {
                  iVar7 = iVar3;
                  iVar3 = iVar2;
                }
                iVar3 = iVar3 + (iVar3 >> 1);
                iVar3 = ((iVar7 - (iVar7 >> 5)) - (iVar7 >> 7)) + (iVar3 >> 2) + (iVar3 >> 6);
                iVar2 = ((int)psVar13[-4] - (int)_DAT_1f800162) + -0x100;
                if (iVar2 < 0) {
                  iVar2 = -iVar2;
                }
                iVar2 = (iVar3 - (iVar3 >> 2)) + iVar2;
                if (iVar2 < 0) {
                  iVar2 = 0;
                }
                setCopReg(2,0x4000,iVar2);
                setCopReg(2,0x3000,puVar12[-6]);
                copFunction(2,0x780010);
                uVar5 = getCopReg(2,0x16);
                _DAT_800bf544[4] = uVar5;
                iVar8 = (int)_DAT_1f8000c2;
                iVar11 = (int)_DAT_1f8000c0;
                iVar2 = -((int)psVar13[-3] - (int)_DAT_1f800160) * iVar11 +
                        ((int)psVar13[-1] - (int)_DAT_1f800164) * iVar8 >> 0xc;
                iVar3 = iVar2 << 1;
                iVar7 = (((int)psVar13[-3] - (int)_DAT_1f800160) * iVar8 +
                         ((int)psVar13[-1] - (int)_DAT_1f800164) * iVar11 >> 0xc) * 2;
                if (iVar3 < 0) {
                  iVar3 = iVar2 << 2;
                }
                iVar2 = iVar7 * iVar8 - iVar3 * iVar11 >> 0xc;
                iVar3 = iVar7 * iVar11 + iVar3 * iVar8 >> 0xc;
                if (iVar2 < 0) {
                  iVar2 = -iVar2;
                }
                if (iVar3 < 0) {
                  iVar3 = -iVar3;
                }
                iVar7 = iVar2;
                if (iVar2 < iVar3) {
                  iVar7 = iVar3;
                  iVar3 = iVar2;
                }
                iVar3 = iVar3 + (iVar3 >> 1);
                iVar3 = ((iVar7 - (iVar7 >> 5)) - (iVar7 >> 7)) + (iVar3 >> 2) + (iVar3 >> 6);
                iVar2 = ((int)psVar13[-2] - (int)_DAT_1f800162) + -0x100;
                if (iVar2 < 0) {
                  iVar2 = -iVar2;
                }
                iVar2 = (iVar3 - (iVar3 >> 2)) + iVar2;
                if (iVar2 < 0) {
                  iVar2 = 0;
                }
                setCopReg(2,0x4000,iVar2);
                setCopReg(2,0x3000,puVar12[-3]);
                copFunction(2,0x780010);
                uVar5 = getCopReg(2,0x16);
                _DAT_800bf544[7] = uVar5;
                iVar8 = (int)_DAT_1f8000c2;
                iVar11 = (int)_DAT_1f8000c0;
                iVar2 = -((int)psVar13[1] - (int)_DAT_1f800160) * iVar11 +
                        ((int)*psVar13 - (int)_DAT_1f800164) * iVar8 >> 0xc;
                iVar3 = iVar2 << 1;
                iVar7 = (((int)psVar13[1] - (int)_DAT_1f800160) * iVar8 +
                         ((int)*psVar13 - (int)_DAT_1f800164) * iVar11 >> 0xc) * 2;
                if (iVar3 < 0) {
                  iVar3 = iVar2 << 2;
                }
                iVar2 = iVar7 * iVar8 - iVar3 * iVar11 >> 0xc;
                iVar3 = iVar7 * iVar11 + iVar3 * iVar8 >> 0xc;
                if (iVar2 < 0) {
                  iVar2 = -iVar2;
                }
                if (iVar3 < 0) {
                  iVar3 = -iVar3;
                }
                iVar7 = iVar2;
                if (iVar2 < iVar3) {
                  iVar7 = iVar3;
                  iVar3 = iVar2;
                }
                iVar3 = iVar3 + (iVar3 >> 1);
                iVar3 = ((iVar7 - (iVar7 >> 5)) - (iVar7 >> 7)) + (iVar3 >> 2) + (iVar3 >> 6);
                iVar2 = ((int)psVar13[2] - (int)_DAT_1f800162) + -0x100;
                if (iVar2 < 0) {
                  iVar2 = -iVar2;
                }
                iVar2 = (iVar3 - (iVar3 >> 2)) + iVar2;
                if (iVar2 < 0) {
                  iVar2 = 0;
                }
                setCopReg(2,0x4000,iVar2);
                setCopReg(2,0x3000,*puVar12);
                copFunction(2,0x780010);
                uVar5 = getCopReg(2,0x16);
                *puVar12 = uVar5;
                puVar4 = (uint *)(param_2 + _DAT_1f800004 * 4);
                param_1 = (uint *)0xc000000;
                *_DAT_800bf544 = *puVar4 | 0xc000000;
                *puVar4 = (uint)_DAT_800bf544;
                puVar12 = puVar12 + 0xd;
                _DAT_800bf544 = _DAT_800bf544 + 0xd;
              }
            }
          }
        }
      }
      psVar13 = psVar13 + 0x16;
      puVar14 = puVar14 + 0xb;
      param_3 = iVar9;
    } while (iVar9 != 0);
  }
  return puVar14;
}

