// FUN_0801e660

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0801e660(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 in_zero;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 *puVar8;
  uint *puVar9;
  
  puVar7 = _DAT_800bf544;
  puVar9 = param_1;
  if (param_3 != 0) {
    puVar8 = (undefined2 *)((int)param_1 + 0x22);
    puVar6 = _DAT_800bf544 + 9;
    do {
      iVar5 = param_3 + -1;
      setCopReg(2,in_zero,puVar9[4]);
      setCopReg(2,param_3,puVar9[6]);
      setCopReg(2,0x800,puVar9[5]);
      setCopReg(2,param_1,puVar9[7]);
      setCopReg(2,0x1800,puVar9[5] >> 0x10);
      setCopReg(2,0x1f800000,puVar9[8]);
      puVar6[-8] = *puVar9;
      copFunction(2,0x280030);
      puVar6[-6] = *(uint *)(puVar8 + -0xd);
      puVar6[-3] = *(uint *)(puVar8 + -0xb);
      uVar4 = *(uint *)(puVar8 + -0xf);
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        puVar6[-5] = uVar4 & 0xf0f0f0;
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar1 = getCopReg(2,0xc);
          puVar7[2] = uVar1;
          uVar1 = getCopReg(2,0xd);
          puVar7[5] = uVar1;
          uVar1 = getCopReg(2,0xe);
          puVar7[8] = uVar1;
          puVar6[-2] = (uVar4 & 0xf0f0f) << 4;
          uVar4 = uVar4 >> 0x18;
          if ((uVar4 & 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (((uVar4 & 0x20) == 0) || (_DAT_1f80009c == 0)) {
            _DAT_1f800080 = getCopReg(2,0x11);
            _DAT_1f800084 = getCopReg(2,0x12);
            _DAT_1f800088 = getCopReg(2,0x13);
            if ((uVar4 & 3) == 1) {
              if (_DAT_1f800080 <= _DAT_1f800084) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (_DAT_1f800080 <= _DAT_1f800088) {
                _DAT_1f800004 = _DAT_1f800088 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if ((uVar4 & 3) == 2) {
              if (_DAT_1f800080 < _DAT_1f800084) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (_DAT_1f800088 <= _DAT_1f800084) {
                _DAT_1f800004 = _DAT_1f800088 >> 2;
                halt_baddata();
              }
              _DAT_1f800004 = _DAT_1f800084 >> 2;
              halt_baddata();
            }
            copFunction(2,0x158002d);
            iVar2 = getCopReg(2,7);
            _DAT_1f800004 = (iVar2 >> (iVar2 >> 10 & 0x1fU)) + (iVar2 >> 10) * 0x200;
            if (0x7fb < _DAT_1f800004 - 4U) {
              _DAT_1f800004 = -1;
            }
            param_1 = (uint *)0x9000000;
            if (-1 < _DAT_1f800004) {
              *(undefined2 *)puVar6 = *puVar8;
              puVar3 = (uint *)(param_2 + _DAT_1f800004 * 4);
              *puVar7 = *puVar3 | 0x9000000;
              *puVar3 = (uint)puVar7;
              puVar6 = puVar6 + 10;
              puVar7 = puVar7 + 10;
            }
          }
        }
      }
      puVar8 = puVar8 + 0x12;
      puVar9 = puVar9 + 9;
      param_3 = iVar5;
    } while (iVar5 != 0);
  }
  _DAT_800bf544 = puVar7;
  return puVar9;
}

