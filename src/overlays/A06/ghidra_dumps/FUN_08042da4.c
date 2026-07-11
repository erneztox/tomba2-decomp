// FUN_08042da4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_08042da4(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_zero;
  uint *puVar4;
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
      uVar5 = *puVar12;
      puVar9[-0xb] = uVar5 & 0xfff0f0f0;
      copFunction(2,0x280030);
      puVar9[-8] = (uVar5 & 0xf0f0f) << 4;
      uVar5 = puVar11[-3];
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        puVar9[-9] = puVar11[-2];
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar2 = getCopReg(2,0xc);
          puVar10[2] = uVar2;
          uVar2 = getCopReg(2,0xd);
          puVar10[5] = uVar2;
          uVar2 = getCopReg(2,0xe);
          puVar10[8] = uVar2;
          setCopReg(2,in_zero,puVar12[10]);
          setCopReg(2,0x800,puVar12[9] >> 0x10);
          puVar9[-5] = uVar5 & 0xf0f0f0;
          copFunction(2,0x180001);
          puVar9[-2] = (uVar5 & 0xf0f0f) << 4;
          puVar9[-6] = puVar11[-1];
          _DAT_1f800000 = getCopControlWord(2,0xf800);
          if (-1 < _DAT_1f800000) {
            uVar2 = getCopReg(2,0xe);
            puVar10[0xb] = uVar2;
            if (((((((ushort)puVar9[-10] < 0x140) || ((ushort)puVar9[-7] < 0x140)) ||
                  ((ushort)puVar9[-4] < 0x140)) || ((ushort)puVar9[-1] < 0x140)) &&
                (((*(ushort *)((int)puVar9 + -0x26) < 0xf0 ||
                  (*(ushort *)((int)puVar9 + -0x1a) < 0xf0)) ||
                 ((*(ushort *)((int)puVar9 + -0xe) < 0xf0 || (*(ushort *)((int)puVar9 + -2) < 0xf0))
                 )))) && (((uVar5 >> 0x18 & 4) == 0 || (_DAT_1f80009c == 0)))) {
              uVar5 = uVar5 >> 0x18 & 3;
              if (uVar5 == 2) {
                iVar7 = getCopReg(2,0x10);
                iVar8 = getCopReg(2,0x11);
                iVar3 = getCopReg(2,0x12);
                iVar6 = getCopReg(2,0x13);
                if (iVar7 < iVar8) {
                  iVar8 = iVar7;
                }
                bVar1 = iVar8 < iVar6;
                if (iVar3 < iVar6) {
                  bVar1 = iVar8 < iVar3;
                  iVar6 = iVar3;
                }
                goto LAB_08043074;
              }
              if (uVar5 < 3) {
                if (uVar5 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else if (uVar5 != 3) {
                copFunction(2,0x168002e);
                iVar8 = getCopReg(2,7);
                _DAT_1f800004 = (iVar8 >> (iVar8 >> 10 & 0x1fU)) + (iVar8 >> 10) * 0x200;
                if (0x7fb < _DAT_1f800004 - 4U) {
                  _DAT_1f800004 = -1;
                }
                param_1 = (uint *)0xc000000;
                if (-1 < _DAT_1f800004) {
                  uVar5 = *puVar11;
                  puVar9[-3] = uVar5;
                  *puVar9 = uVar5 >> 0x10;
                  puVar4 = (uint *)(param_2 + _DAT_1f800004 * 4);
                  *puVar10 = *puVar4 | 0xc000000;
                  *puVar4 = (uint)puVar10;
                  puVar9 = puVar9 + 0xd;
                  puVar10 = puVar10 + 0xd;
                }
                goto LAB_08043114;
              }
              iVar7 = getCopReg(2,0x10);
              iVar8 = getCopReg(2,0x11);
              iVar3 = getCopReg(2,0x12);
              iVar6 = getCopReg(2,0x13);
              if (iVar8 < iVar7) {
                iVar8 = iVar7;
              }
              bVar1 = iVar6 < iVar8;
              if (iVar6 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
LAB_08043074:
              if (bVar1) {
                iVar6 = iVar8;
              }
              _DAT_1f800004 = iVar6 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
LAB_08043114:
      puVar11 = puVar11 + 0xb;
      puVar12 = puVar12 + 0xb;
      param_3 = iVar7;
    } while (iVar7 != 0);
  }
  _DAT_800bf544 = puVar10;
  return puVar12;
}

