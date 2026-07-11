// FUN_0803bbd8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0803bbd8(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_zero;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  
  puVar10 = _DAT_800bf544;
  puVar12 = param_1;
  if (param_3 != 0) {
    puVar11 = param_1 + 4;
    puVar9 = _DAT_800bf544 + 0xc;
    do {
      iVar7 = param_3 + -1;
      setCopReg(2,in_zero,puVar12[5]);
      setCopReg(2,0x800,puVar12[6]);
      setCopReg(2,0x1800,puVar12[6] >> 0x10);
      setCopReg(2,param_3,puVar12[7]);
      setCopReg(2,param_1,puVar12[8]);
      setCopReg(2,0x2800,puVar12[9]);
      uVar4 = *puVar12;
      puVar9[-0xb] = uVar4 & 0xfff0f0f0;
      copFunction(2,0x280030);
      puVar9[-8] = (uVar4 & 0xf0f0f) << 4;
      uVar4 = puVar11[-3];
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        puVar9[-9] = puVar11[-2];
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar5 = getCopReg(2,0xc);
          puVar10[2] = uVar5;
          uVar5 = getCopReg(2,0xd);
          puVar10[5] = uVar5;
          uVar5 = getCopReg(2,0xe);
          puVar10[8] = uVar5;
          setCopReg(2,in_zero,puVar12[10]);
          setCopReg(2,0x800,puVar12[9] >> 0x10);
          puVar9[-5] = uVar4 & 0xf0f0f0;
          copFunction(2,0x180001);
          puVar9[-2] = (uVar4 & 0xf0f0f) << 4;
          puVar9[-6] = puVar11[-1];
          _DAT_1f800000 = getCopControlWord(2,0xf800);
          if (-1 < _DAT_1f800000) {
            uVar5 = getCopReg(2,0xe);
            puVar10[0xb] = uVar5;
            if ((((((ushort)puVar9[-10] < 0x140) || ((ushort)puVar9[-7] < 0x140)) ||
                 ((ushort)puVar9[-4] < 0x140)) || ((ushort)puVar9[-1] < 0x140)) &&
               (((*(ushort *)((int)puVar9 + -0x26) < 0xf0 ||
                 (*(ushort *)((int)puVar9 + -0x1a) < 0xf0)) ||
                ((*(ushort *)((int)puVar9 + -0xe) < 0xf0 || (*(ushort *)((int)puVar9 + -2) < 0xf0)))
                ))) {
              iVar1 = getCopReg(2,0x10);
              iVar8 = getCopReg(2,0x11);
              iVar2 = getCopReg(2,0x12);
              iVar6 = getCopReg(2,0x13);
              uVar5 = uVar4 >> 0x18 & 3;
              if (uVar5 == 2) {
                if (iVar1 < iVar8) {
                  iVar8 = iVar1;
                }
                if (iVar2 < iVar6) {
                  iVar6 = iVar2;
                }
                if (iVar8 < iVar6) {
                  iVar6 = iVar8;
                }
                _DAT_1f800004 = iVar6 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (uVar5 < 3) {
                if (uVar5 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
LAB_0803bdf0:
                if (iVar8 < iVar1) {
                  iVar8 = iVar1;
                }
                if (iVar6 < iVar2) {
                  iVar6 = iVar2;
                }
                if (iVar6 < iVar8) {
                  iVar6 = iVar8;
                }
                _DAT_1f800004 = iVar6 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (uVar5 == 3) goto LAB_0803bdf0;
              copFunction(2,0x168002e);
              _DAT_1f800004 = getCopReg(2,7);
              if (_DAT_1f800004 + 399U < 0x1b7) {
                _DAT_1f800004 = 0x28;
              }
              _DAT_1f800004 =
                   (_DAT_1f800004 >> (_DAT_1f800004 >> 10 & 0x1fU)) + (_DAT_1f800004 >> 10) * 0x200;
              if (0x7fb < _DAT_1f800004 - 4U) {
                _DAT_1f800004 = -1;
              }
              if ((uVar4 >> 0x18 & 4) != 0) {
                _DAT_1f800004 = _DAT_1f800004 + -10;
              }
              param_1 = (uint *)0xc000000;
              if (-1 < _DAT_1f800004) {
                uVar4 = *puVar11;
                puVar9[-3] = uVar4;
                *puVar9 = uVar4 >> 0x10;
                puVar3 = (uint *)(param_2 + _DAT_1f800004 * 4);
                *puVar10 = *puVar3 | 0xc000000;
                *puVar3 = (uint)puVar10;
                puVar9 = puVar9 + 0xd;
                puVar10 = puVar10 + 0xd;
              }
            }
          }
        }
      }
      puVar11 = puVar11 + 0xb;
      puVar12 = puVar12 + 0xb;
      param_3 = iVar7;
    } while (iVar7 != 0);
  }
  _DAT_800bf544 = puVar10;
  return puVar12;
}

