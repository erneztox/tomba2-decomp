// FUN_08044248

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_08044248(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 in_zero;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  
  puVar10 = _DAT_800bf544;
  puVar13 = param_1;
  if (param_3 != 0) {
    puVar12 = param_1 + 4;
    puVar9 = _DAT_800bf544 + 0xc;
    do {
      param_3 = param_3 + -1;
      setCopReg(2,in_zero,puVar13[10]);
      setCopReg(2,0x800,puVar13[9] >> 0x10);
      uVar11 = puVar12[-3];
      puVar9[-5] = uVar11 & 0xfff0f0f0;
      copFunction(2,0x180001);
      uVar6 = puVar12[-1];
      puVar9[-2] = (uVar11 & 0xfff0f0f) << 4;
      puVar9[-6] = uVar6;
      _DAT_1f800080 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800080) {
        uVar6 = getCopReg(2,0xe);
        puVar10[0xb] = uVar6;
        setCopReg(2,in_zero,puVar13[5]);
        setCopReg(2,0x800,puVar13[6]);
        setCopReg(2,0x1800,puVar13[6] >> 0x10);
        setCopReg(2,puVar10 + 0xb,puVar13[7]);
        setCopReg(2,param_1,puVar13[8]);
        setCopReg(2,0x2800,puVar13[9]);
        uVar6 = *puVar13;
        puVar9[-0xb] = uVar6 & 0xfff0f0f0;
        copFunction(2,0x280030);
        puVar9[-8] = (uVar6 & 0xfff0f0f) << 4;
        _DAT_1f800080 = getCopControlWord(2,0xf800);
        if (-1 < _DAT_1f800080) {
          copFunction(2,0x1400006);
          puVar9[-9] = puVar12[-2];
          _DAT_1f800080 = getCopReg(2,0x18);
          if (0 < _DAT_1f800080) {
            uVar6 = getCopReg(2,0xc);
            puVar10[2] = uVar6;
            uVar6 = getCopReg(2,0xd);
            puVar10[5] = uVar6;
            uVar6 = getCopReg(2,0xe);
            puVar10[8] = uVar6;
            if ((((((ushort)puVar9[-10] < 0x140) || ((ushort)puVar9[-7] < 0x140)) ||
                 ((ushort)puVar9[-4] < 0x140)) || ((ushort)puVar9[-1] < 0x140)) &&
               (((*(ushort *)((int)puVar9 + -0x26) < 0xf0 ||
                 (*(ushort *)((int)puVar9 + -0x1a) < 0xf0)) ||
                ((*(ushort *)((int)puVar9 + -0xe) < 0xf0 || (*(ushort *)((int)puVar9 + -2) < 0xf0)))
                ))) {
              uVar6 = uVar11 >> 0x18 & 3;
              if (uVar6 != 0) {
                iVar2 = getCopReg(2,0x10);
                iVar8 = getCopReg(2,0x11);
                iVar3 = getCopReg(2,0x12);
                iVar7 = getCopReg(2,0x13);
                if (uVar6 == 1) {
                  if (iVar8 < iVar2) {
                    iVar8 = iVar2;
                  }
                  bVar1 = iVar7 < iVar8;
                  if (iVar7 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                }
                else {
                  if (iVar2 < iVar8) {
                    iVar8 = iVar2;
                  }
                  bVar1 = iVar8 < iVar7;
                  if (iVar3 < iVar7) {
                    bVar1 = iVar8 < iVar3;
                    iVar7 = iVar3;
                  }
                }
                if (bVar1) {
                  iVar7 = iVar8;
                }
                _DAT_1f800084 = iVar7 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              copFunction(2,0x168002e);
              iVar2 = getCopReg(2,7);
              _DAT_1f800084 = (iVar2 >> (iVar2 >> 10 & 0x1fU)) + (iVar2 >> 10) * 0x200;
              if (0x7fb < _DAT_1f800084 - 4U) {
                _DAT_1f800084 = -1;
              }
              if (-1 < _DAT_1f800084) {
                uVar6 = *puVar12;
                puVar9[-3] = uVar6;
                *puVar9 = uVar6 >> 0x10;
                if ((uVar11 >> 0x18 & 8) != 0) {
                  cVar4 = (char)(_DAT_8014a450 >> 4);
                  *(char *)(puVar9 + -9) = (char)puVar9[-9] + cVar4;
                  *(char *)(puVar9 + -6) = (char)puVar9[-6] + cVar4;
                  *(char *)(puVar9 + -3) = (char)puVar9[-3] + cVar4;
                  *(char *)puVar9 = (char)*puVar9 + cVar4;
                }
                puVar5 = (uint *)(param_2 + _DAT_1f800084 * 4);
                param_1 = (uint *)0xc000000;
                *puVar10 = *puVar5 | 0xc000000;
                *puVar5 = (uint)puVar10;
                puVar9 = puVar9 + 0xd;
                puVar10 = puVar10 + 0xd;
              }
            }
          }
        }
      }
      puVar12 = puVar12 + 0xb;
      puVar13 = puVar13 + 0xb;
    } while (param_3 != 0);
  }
  _DAT_800bf544 = puVar10;
  return puVar13;
}

