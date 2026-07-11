// FUN_0801d76c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0801d76c(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_zero;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  
  puVar9 = _DAT_800bf544;
  puVar11 = param_1;
  if (param_3 != 0) {
    puVar10 = param_1 + 4;
    puVar8 = _DAT_800bf544 + 0xc;
    do {
      iVar6 = param_3 + -1;
      setCopReg(2,in_zero,puVar11[5]);
      setCopReg(2,0x800,puVar11[6]);
      setCopReg(2,0x1800,puVar11[6] >> 0x10);
      setCopReg(2,param_3,puVar11[7]);
      setCopReg(2,param_1,puVar11[8]);
      setCopReg(2,0x2800,puVar11[9]);
      uVar4 = *puVar11;
      puVar8[-0xb] = uVar4 & 0xfff0f0f0;
      copFunction(2,0x280030);
      puVar8[-8] = (uVar4 & 0xf0f0f) << 4;
      uVar4 = puVar10[-3];
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        puVar8[-9] = puVar10[-2];
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar2 = getCopReg(2,0xc);
          puVar9[2] = uVar2;
          uVar2 = getCopReg(2,0xd);
          puVar9[5] = uVar2;
          uVar2 = getCopReg(2,0xe);
          puVar9[8] = uVar2;
          setCopReg(2,in_zero,puVar11[10]);
          setCopReg(2,0x800,puVar11[9] >> 0x10);
          puVar8[-5] = uVar4 & 0xf0f0f0;
          copFunction(2,0x180001);
          puVar8[-2] = (uVar4 & 0xf0f0f) << 4;
          puVar8[-6] = puVar10[-1];
          _DAT_1f800000 = getCopControlWord(2,0xf800);
          if (-1 < _DAT_1f800000) {
            uVar2 = getCopReg(2,0xe);
            puVar9[0xb] = uVar2;
            if ((((((ushort)puVar8[-10] < 0x140) || ((ushort)puVar8[-7] < 0x140)) ||
                 ((ushort)puVar8[-4] < 0x140)) || ((ushort)puVar8[-1] < 0x140)) &&
               (((*(ushort *)((int)puVar8 + -0x26) < 0xf0 ||
                 (*(ushort *)((int)puVar8 + -0x1a) < 0xf0)) ||
                ((*(ushort *)((int)puVar8 + -0xe) < 0xf0 || (*(ushort *)((int)puVar8 + -2) < 0xf0)))
                ))) {
              puVar8[-6] = puVar10[-1];
              if (uVar4 >> 0x18 != 0) {
                iVar6 = getCopReg(2,0x10);
                iVar7 = getCopReg(2,0x11);
                iVar3 = getCopReg(2,0x12);
                iVar5 = getCopReg(2,0x13);
                if (uVar4 >> 0x18 == 1) {
                  if (iVar7 < iVar6) {
                    iVar7 = iVar6;
                  }
                  bVar1 = iVar5 < iVar7;
                  if (iVar5 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                }
                else {
                  if (iVar6 < iVar7) {
                    iVar7 = iVar6;
                  }
                  bVar1 = iVar7 < iVar5;
                  if (iVar3 < iVar5) {
                    bVar1 = iVar7 < iVar3;
                    iVar5 = iVar3;
                  }
                }
                if (bVar1) {
                  iVar5 = iVar7;
                }
                _DAT_1f800004 = iVar5 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              copFunction(2,0x168002e);
              iVar7 = getCopReg(2,7);
              _DAT_1f800004 = (iVar7 >> (iVar7 >> 10 & 0x1fU)) + (iVar7 >> 10) * 0x200;
              if (0x7fb < _DAT_1f800004 - 4U) {
                _DAT_1f800004 = -1;
              }
              param_1 = (uint *)(_DAT_1f800004 * 4);
              if (-1 < _DAT_1f800004) {
                param_1 = (uint *)(param_2 + (int)param_1);
                *puVar9 = *param_1 | 0xc000000;
                *param_1 = (uint)puVar9;
                setCopReg(2,0x4000,_DAT_1f800004 << 1);
                setCopReg(2,0x3000,puVar8[-0xb]);
                copFunction(2,0x780010);
                uVar4 = getCopReg(2,0x16);
                puVar9[1] = uVar4;
                setCopReg(2,0x4000,_DAT_1f800004 << 1);
                setCopReg(2,0x3000,puVar8[-8]);
                copFunction(2,0x780010);
                uVar4 = getCopReg(2,0x16);
                puVar9[4] = uVar4;
                setCopReg(2,0x4000,_DAT_1f800004 << 1);
                setCopReg(2,0x3000,puVar8[-5]);
                copFunction(2,0x780010);
                uVar4 = getCopReg(2,0x16);
                puVar9[7] = uVar4;
                setCopReg(2,0x4000,_DAT_1f800004 << 1);
                setCopReg(2,0x3000,puVar8[-2]);
                copFunction(2,0x780010);
                uVar4 = getCopReg(2,0x16);
                puVar9[10] = uVar4;
                uVar4 = *puVar10;
                puVar9 = puVar9 + 0xd;
                puVar8[-3] = uVar4;
                *puVar8 = uVar4 >> 0x10;
                puVar8 = puVar8 + 0xd;
              }
            }
          }
        }
      }
      puVar10 = puVar10 + 0xb;
      puVar11 = puVar11 + 0xb;
      param_3 = iVar6;
    } while (iVar6 != 0);
  }
  _DAT_800bf544 = puVar9;
  return puVar11;
}

