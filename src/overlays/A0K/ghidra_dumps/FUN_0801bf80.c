// FUN_0801bf80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0801bf80(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 in_zero;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  
  puVar12 = _DAT_800bf544;
  puVar13 = param_1;
  if (param_3 != 0) {
    puVar11 = param_1 + 8;
    puVar10 = _DAT_800bf544 + 7;
    do {
      iVar7 = param_3 + -1;
      setCopReg(2,in_zero,puVar13[4]);
      setCopReg(2,param_3,puVar13[6]);
      setCopReg(2,0x800,puVar13[5]);
      setCopReg(2,param_1,puVar13[7]);
      setCopReg(2,0x1800,puVar13[5] >> 0x10);
      setCopReg(2,0x1f8000c0,puVar13[8]);
      puVar10[-6] = *puVar13;
      copFunction(2,0x280030);
      puVar10[-4] = puVar11[-6];
      puVar10[-1] = puVar11[-5];
      param_1 = (uint *)puVar11[-7];
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        puVar10[-3] = (uint)param_1 & 0xf0f0f0;
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar1 = getCopReg(2,0xc);
          puVar12[2] = uVar1;
          uVar1 = getCopReg(2,0xd);
          puVar12[5] = uVar1;
          uVar1 = getCopReg(2,0xe);
          puVar12[8] = uVar1;
          if (((((ushort)puVar10[-5] < 0x140) || ((ushort)puVar10[-2] < 0x140)) ||
              ((ushort)puVar10[1] < 0x140)) &&
             (((*(ushort *)((int)puVar10 + -0x12) < 0xf0 || (*(ushort *)((int)puVar10 + -6) < 0xf0))
              || (*(ushort *)((int)puVar10 + 6) < 0xf0)))) {
            *puVar10 = ((uint)param_1 & 0xf0f0f) << 4;
            iVar2 = getCopReg(2,0x11);
            param_1 = (uint *)getCopReg(2,0x12);
            iVar3 = getCopReg(2,0x13);
            iVar5 = iVar3 >> 2;
            if ((int)param_1 < iVar2) {
              if (iVar3 < iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else if (iVar3 < (int)param_1) {
              iVar5 = (int)param_1 >> 2;
            }
            _DAT_1f800004 = iVar5;
            if (iVar5 + 399U < 0x1b7) {
              _DAT_1f800004 = 0x28;
            }
            _DAT_1f800004 =
                 (_DAT_1f800004 >> (_DAT_1f800004 >> 10 & 0x1fU)) + (_DAT_1f800004 >> 10) * 0x200;
            if (0x7fb < _DAT_1f800004 - 4U) {
              _DAT_1f800004 = -1;
            }
            if (-1 < _DAT_1f800004) {
              *(short *)(puVar10 + 2) = *(short *)((int)puVar11 + 2);
              iVar6 = (int)_DAT_1f8000c2;
              iVar5 = (int)(short)puVar11[-4] - (int)_DAT_1f800160;
              iVar9 = (int)_DAT_1f8000c0;
              iVar8 = (int)(short)puVar11[-3] - (int)_DAT_1f800164;
              iVar2 = -iVar5 * iVar9 + iVar8 * iVar6 >> 0xc;
              iVar3 = iVar2 << 1;
              iVar5 = (iVar5 * iVar6 + iVar8 * iVar9 >> 0xc) * 2;
              if (iVar3 < 0) {
                iVar3 = iVar2 << 2;
              }
              iVar2 = iVar5 * iVar6 - iVar3 * iVar9 >> 0xc;
              iVar3 = iVar5 * iVar9 + iVar3 * iVar6 >> 0xc;
              if (iVar2 < 0) {
                iVar2 = -iVar2;
              }
              if (iVar3 < 0) {
                iVar3 = -iVar3;
              }
              iVar5 = iVar2;
              if (iVar2 < iVar3) {
                iVar5 = iVar3;
                iVar3 = iVar2;
              }
              iVar3 = iVar3 + (iVar3 >> 1);
              iVar3 = ((iVar5 - (iVar5 >> 5)) - (iVar5 >> 7)) + (iVar3 >> 2) + (iVar3 >> 6);
              iVar2 = ((int)*(short *)((int)puVar11 + -0xe) - (int)_DAT_1f800162) + -0x100;
              if (iVar2 < 0) {
                iVar2 = -iVar2;
              }
              iVar2 = (iVar3 - (iVar3 >> 2)) + iVar2;
              if (iVar2 < 0) {
                iVar2 = 0;
              }
              setCopReg(2,0x4000,iVar2);
              setCopReg(2,0x3000,puVar10[-6]);
              copFunction(2,0x780010);
              uVar1 = getCopReg(2,0x16);
              puVar12[1] = uVar1;
              iVar6 = (int)_DAT_1f8000c2;
              iVar5 = (int)(short)puVar11[-2] - (int)_DAT_1f800160;
              iVar9 = (int)_DAT_1f8000c0;
              iVar8 = (int)*(short *)((int)puVar11 + -10) - (int)_DAT_1f800164;
              iVar2 = -iVar5 * iVar9 + iVar8 * iVar6 >> 0xc;
              iVar3 = iVar2 << 1;
              iVar5 = (iVar5 * iVar6 + iVar8 * iVar9 >> 0xc) * 2;
              if (iVar3 < 0) {
                iVar3 = iVar2 << 2;
              }
              iVar2 = iVar5 * iVar6 - iVar3 * iVar9 >> 0xc;
              iVar3 = iVar5 * iVar9 + iVar3 * iVar6 >> 0xc;
              if (iVar2 < 0) {
                iVar2 = -iVar2;
              }
              if (iVar3 < 0) {
                iVar3 = -iVar3;
              }
              iVar5 = iVar2;
              if (iVar2 < iVar3) {
                iVar5 = iVar3;
                iVar3 = iVar2;
              }
              iVar3 = iVar3 + (iVar3 >> 1);
              iVar3 = ((iVar5 - (iVar5 >> 5)) - (iVar5 >> 7)) + (iVar3 >> 2) + (iVar3 >> 6);
              iVar2 = ((int)*(short *)((int)puVar11 + -6) - (int)_DAT_1f800162) + -0x100;
              if (iVar2 < 0) {
                iVar2 = -iVar2;
              }
              iVar2 = (iVar3 - (iVar3 >> 2)) + iVar2;
              if (iVar2 < 0) {
                iVar2 = 0;
              }
              setCopReg(2,0x4000,iVar2);
              setCopReg(2,0x3000,puVar10[-3]);
              copFunction(2,0x780010);
              uVar1 = getCopReg(2,0x16);
              puVar12[4] = uVar1;
              iVar6 = (int)_DAT_1f8000c2;
              iVar5 = (int)(short)puVar11[-1] - (int)_DAT_1f800160;
              iVar9 = (int)_DAT_1f8000c0;
              iVar8 = (int)(short)*puVar11 - (int)_DAT_1f800164;
              iVar2 = -iVar5 * iVar9 + iVar8 * iVar6 >> 0xc;
              iVar3 = iVar2 << 1;
              iVar5 = (iVar5 * iVar6 + iVar8 * iVar9 >> 0xc) * 2;
              if (iVar3 < 0) {
                iVar3 = iVar2 << 2;
              }
              iVar2 = iVar5 * iVar6 - iVar3 * iVar9 >> 0xc;
              iVar3 = iVar5 * iVar9 + iVar3 * iVar6 >> 0xc;
              if (iVar2 < 0) {
                iVar2 = -iVar2;
              }
              if (iVar3 < 0) {
                iVar3 = -iVar3;
              }
              iVar5 = iVar2;
              if (iVar2 < iVar3) {
                iVar5 = iVar3;
                iVar3 = iVar2;
              }
              iVar3 = iVar3 + (iVar3 >> 1);
              iVar3 = ((iVar5 - (iVar5 >> 5)) - (iVar5 >> 7)) + (iVar3 >> 2) + (iVar3 >> 6);
              iVar2 = ((int)*(short *)((int)puVar11 + -2) - (int)_DAT_1f800162) + -0x100;
              if (iVar2 < 0) {
                iVar2 = -iVar2;
              }
              iVar2 = (iVar3 - (iVar3 >> 2)) + iVar2;
              if (iVar2 < 0) {
                iVar2 = 0;
              }
              setCopReg(2,0x4000,iVar2);
              setCopReg(2,0x3000,*puVar10);
              copFunction(2,0x780010);
              uVar1 = getCopReg(2,0x16);
              *puVar10 = uVar1;
              puVar4 = (uint *)(param_2 + _DAT_1f800004 * 4);
              param_1 = (uint *)0x9000000;
              *puVar12 = *puVar4 | 0x9000000;
              *puVar4 = (uint)puVar12;
              puVar10 = puVar10 + 10;
              puVar12 = puVar12 + 10;
            }
          }
        }
      }
      puVar11 = puVar11 + 9;
      puVar13 = puVar13 + 9;
      param_3 = iVar7;
    } while (iVar7 != 0);
  }
  _DAT_800bf544 = puVar12;
  return puVar13;
}

