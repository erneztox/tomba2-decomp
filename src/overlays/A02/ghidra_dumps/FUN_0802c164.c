// FUN_0802c164

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0802c164(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_zero;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  
  puVar10 = _DAT_800bf544;
  puVar12 = param_1;
  if (param_3 != 0) {
    puVar11 = param_1 + 4;
    puVar7 = _DAT_800bf544 + 0xc;
    do {
      param_3 = param_3 + -1;
      setCopReg(2,in_zero,puVar12[10]);
      setCopReg(2,0x800,puVar12[9] >> 0x10);
      uVar9 = puVar11[-3];
      puVar7[-5] = uVar9 & 0xfff0f0f0;
      copFunction(2,0x180001);
      uVar5 = puVar11[-1];
      puVar7[-2] = (uVar9 & 0xfff0f0f) << 4;
      puVar7[-6] = uVar5;
      _DAT_1f800080 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800080) {
        uVar5 = getCopReg(2,0xe);
        puVar10[0xb] = uVar5;
        setCopReg(2,in_zero,puVar12[5]);
        setCopReg(2,0x800,puVar12[6]);
        setCopReg(2,0x1800,puVar12[6] >> 0x10);
        setCopReg(2,puVar10 + 0xb,puVar12[7]);
        setCopReg(2,param_1,puVar12[8]);
        setCopReg(2,0x2800,puVar12[9]);
        uVar5 = *puVar12;
        puVar7[-0xb] = uVar5 & 0xfff0f0f0;
        copFunction(2,0x280030);
        puVar7[-8] = (uVar5 & 0xfff0f0f) << 4;
        _DAT_1f800080 = getCopControlWord(2,0xf800);
        if (-1 < _DAT_1f800080) {
          copFunction(2,0x1400006);
          puVar7[-9] = puVar11[-2];
          _DAT_1f800080 = getCopReg(2,0x18);
          if (0 < _DAT_1f800080) {
            uVar5 = getCopReg(2,0xc);
            puVar10[2] = uVar5;
            uVar5 = getCopReg(2,0xd);
            puVar10[5] = uVar5;
            uVar5 = getCopReg(2,0xe);
            puVar10[8] = uVar5;
            if ((((((ushort)puVar7[-10] < 0x140) || ((ushort)puVar7[-7] < 0x140)) ||
                 ((ushort)puVar7[-4] < 0x140)) || ((ushort)puVar7[-1] < 0x140)) &&
               (((*(ushort *)((int)puVar7 + -0x26) < 0xf0 ||
                 (*(ushort *)((int)puVar7 + -0x1a) < 0xf0)) ||
                ((*(ushort *)((int)puVar7 + -0xe) < 0xf0 || (*(ushort *)((int)puVar7 + -2) < 0xf0)))
                ))) {
              uVar9 = uVar9 >> 0x18;
              if ((uVar9 & 3) != 0) {
                iVar2 = getCopReg(2,0x10);
                iVar8 = getCopReg(2,0x11);
                iVar3 = getCopReg(2,0x12);
                iVar6 = getCopReg(2,0x13);
                if ((uVar9 & 3) == 1) {
                  if (iVar8 < iVar2) {
                    iVar8 = iVar2;
                  }
                  bVar1 = iVar6 < iVar8;
                  if (iVar6 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                }
                else {
                  if (iVar2 < iVar8) {
                    iVar8 = iVar2;
                  }
                  bVar1 = iVar8 < iVar6;
                  if (iVar3 < iVar6) {
                    bVar1 = iVar8 < iVar3;
                    iVar6 = iVar3;
                  }
                }
                if (bVar1) {
                  iVar6 = iVar8;
                }
                _DAT_1f800084 = iVar6 >> 2;
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
                uVar5 = *puVar11;
                puVar7[-3] = uVar5;
                *puVar7 = uVar5 >> 0x10;
                if ((uVar9 & 0x10) != 0) {
                  *(char *)(puVar7 + -9) = (char)puVar7[-9] + (char)(_DAT_8012c92c >> 4);
                  *(char *)(puVar7 + -6) = (char)puVar7[-6] + (char)(_DAT_8012c92c >> 4);
                  *(char *)(puVar7 + -3) = (char)puVar7[-3] + (char)(_DAT_8012c92c >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if ((uVar9 & 8) != 0) {
                  *(char *)(puVar7 + -9) = (char)puVar7[-9] + (char)(_DAT_8012c92a >> 4);
                  *(char *)(puVar7 + -6) = (char)puVar7[-6] + (char)(_DAT_8012c92a >> 4);
                  *(char *)(puVar7 + -3) = (char)puVar7[-3] + (char)(_DAT_8012c92a >> 4);
                  halt_baddata();
                }
                if ((uVar9 & 4) != 0) {
                  *(char *)(puVar7 + -9) = (char)puVar7[-9] + (char)(_DAT_8012c928 >> 4);
                  *(char *)(puVar7 + -6) = (char)puVar7[-6] + (char)(_DAT_8012c928 >> 4);
                  *(char *)(puVar7 + -3) = (char)puVar7[-3] + (char)(_DAT_8012c928 >> 4);
                  *(char *)puVar7 = (char)*puVar7 + (char)(_DAT_8012c928 >> 4);
                }
                puVar4 = (uint *)(param_2 + _DAT_1f800084 * 4);
                param_1 = (uint *)0xc000000;
                *puVar10 = *puVar4 | 0xc000000;
                *puVar4 = (uint)puVar10;
                puVar7 = puVar7 + 0xd;
                puVar10 = puVar10 + 0xd;
              }
            }
          }
        }
      }
      puVar11 = puVar11 + 0xb;
      puVar12 = puVar12 + 0xb;
    } while (param_3 != 0);
  }
  _DAT_800bf544 = puVar10;
  return puVar12;
}

