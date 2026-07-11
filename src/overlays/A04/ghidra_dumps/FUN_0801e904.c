// FUN_0801e904

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0801e904(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 in_zero;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  
  puVar8 = _DAT_800bf544;
  puVar10 = param_1;
  if (param_3 != 0) {
    puVar9 = param_1 + 4;
    puVar7 = _DAT_800bf544 + 0xc;
    do {
      iVar5 = param_3 + -1;
      setCopReg(2,in_zero,puVar10[5]);
      setCopReg(2,0x800,puVar10[6]);
      setCopReg(2,0x1800,puVar10[6] >> 0x10);
      setCopReg(2,param_3,puVar10[7]);
      setCopReg(2,param_1,puVar10[8]);
      setCopReg(2,0x2800,puVar10[9]);
      uVar4 = *puVar10;
      puVar7[-0xb] = uVar4 & 0xfff0f0f0;
      copFunction(2,0x280030);
      puVar7[-8] = (uVar4 & 0xf0f0f) << 4;
      uVar4 = puVar9[-3];
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        puVar7[-9] = puVar9[-2];
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar2 = getCopReg(2,0xc);
          puVar8[2] = uVar2;
          uVar2 = getCopReg(2,0xd);
          puVar8[5] = uVar2;
          uVar2 = getCopReg(2,0xe);
          puVar8[8] = uVar2;
          setCopReg(2,in_zero,puVar10[10]);
          setCopReg(2,0x800,puVar10[9] >> 0x10);
          puVar7[-5] = uVar4 & 0xf0f0f0;
          copFunction(2,0x180001);
          puVar7[-2] = (uVar4 & 0xf0f0f) << 4;
          puVar7[-6] = puVar9[-1];
          _DAT_1f800000 = getCopControlWord(2,0xf800);
          if (-1 < _DAT_1f800000) {
            uVar2 = getCopReg(2,0xe);
            puVar8[0xb] = uVar2;
            if ((((((ushort)puVar7[-10] < 0x140) || ((ushort)puVar7[-7] < 0x140)) ||
                 ((ushort)puVar7[-4] < 0x140)) || ((ushort)puVar7[-1] < 0x140)) &&
               (((*(ushort *)((int)puVar7 + -0x26) < 0xf0 ||
                 (*(ushort *)((int)puVar7 + -0x1a) < 0xf0)) ||
                ((*(ushort *)((int)puVar7 + -0xe) < 0xf0 || (*(ushort *)((int)puVar7 + -2) < 0xf0)))
                ))) {
              uVar4 = uVar4 >> 0x18;
              if ((uVar4 & 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (((uVar4 & 0x20) == 0) || (_DAT_1f80009c == 0)) {
                if ((uVar4 & 3) != 0) {
                  _DAT_1f800080 = getCopReg(2,0x10);
                  _DAT_1f800084 = getCopReg(2,0x11);
                  _DAT_1f800088 = getCopReg(2,0x12);
                  _DAT_1f80008c = getCopReg(2,0x13);
                  iVar5 = _DAT_1f80008c;
                  iVar6 = _DAT_1f800084;
                  if ((uVar4 & 3) == 1) {
                    if (_DAT_1f800084 < _DAT_1f800080) {
                      iVar6 = _DAT_1f800080;
                    }
                    bVar1 = _DAT_1f80008c < iVar6;
                    if (_DAT_1f80008c < _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                  }
                  else {
                    if (_DAT_1f800080 < _DAT_1f800084) {
                      iVar6 = _DAT_1f800080;
                    }
                    bVar1 = iVar6 < _DAT_1f80008c;
                    if (_DAT_1f800088 < _DAT_1f80008c) {
                      bVar1 = iVar6 < _DAT_1f800088;
                      iVar5 = _DAT_1f800088;
                    }
                  }
                  if (bVar1) {
                    iVar5 = iVar6;
                  }
                  _DAT_1f800004 = iVar5 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                copFunction(2,0x168002e);
                iVar6 = getCopReg(2,7);
                _DAT_1f800004 = (iVar6 >> (iVar6 >> 10 & 0x1fU)) + (iVar6 >> 10) * 0x200;
                if (0x7fb < _DAT_1f800004 - 4U) {
                  _DAT_1f800004 = -1;
                }
                param_1 = (uint *)0xc000000;
                if (-1 < _DAT_1f800004) {
                  uVar4 = *puVar9;
                  puVar7[-3] = uVar4;
                  *puVar7 = uVar4 >> 0x10;
                  puVar3 = (uint *)(param_2 + _DAT_1f800004 * 4);
                  *puVar8 = *puVar3 | 0xc000000;
                  *puVar3 = (uint)puVar8;
                  puVar7 = puVar7 + 0xd;
                  puVar8 = puVar8 + 0xd;
                }
              }
            }
          }
        }
      }
      puVar9 = puVar9 + 0xb;
      puVar10 = puVar10 + 0xb;
      param_3 = iVar5;
    } while (iVar5 != 0);
  }
  _DAT_800bf544 = puVar8;
  return puVar10;
}

