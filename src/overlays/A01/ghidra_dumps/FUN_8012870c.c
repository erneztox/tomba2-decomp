// FUN_8012870c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8012870c(uint *param_1,int param_2,int param_3,int param_4)

{
  undefined4 in_zero;
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  undefined4 local_30 [2];
  
  local_30[0] = 0x34808080;
  setCopReg(2,0x3000,local_30);
  puVar10 = _DAT_800bf544;
  puVar12 = param_1;
  if (param_3 != 0) {
    puVar9 = param_1 + 8;
    puVar8 = _DAT_800bf544 + 7;
    iVar6 = param_2;
    do {
      iVar11 = param_3 + -1;
      setCopReg(2,in_zero,puVar12[4]);
      setCopReg(2,param_3,puVar12[6]);
      setCopReg(2,0x800,puVar12[5]);
      setCopReg(2,param_1,puVar12[7]);
      setCopReg(2,0x1800,puVar12[5] >> 0x10);
      setCopReg(2,iVar6,puVar12[8]);
      puVar8[-6] = *puVar12;
      copFunction(2,0x280030);
      puVar8[-4] = puVar9[-6];
      puVar8[-1] = puVar9[-5];
      param_1 = (uint *)puVar9[-7];
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        puVar8[-3] = (uint)param_1 & 0xf0f0f0;
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar7 = getCopReg(2,0xc);
          puVar10[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          puVar10[5] = uVar7;
          uVar7 = getCopReg(2,0xe);
          puVar10[8] = uVar7;
          if (((((ushort)puVar8[-5] < 0x140) || ((ushort)puVar8[-2] < 0x140)) ||
              ((ushort)puVar8[1] < 0x140)) &&
             (((*(ushort *)((int)puVar8 + -0x12) < 0xf0 || (*(ushort *)((int)puVar8 + -6) < 0xf0))
              || (*(ushort *)((int)puVar8 + 6) < 0xf0)))) {
            *puVar8 = ((uint)param_1 & 0xf0f0f) << 4;
            _DAT_1f800084 = getCopReg(2,0x11);
            _DAT_1f800088 = getCopReg(2,0x12);
            _DAT_1f80008c = getCopReg(2,0x13);
            uVar7 = (uint)param_1 >> 0x18;
            if (((uVar7 & 0x40) == 0) || (_DAT_1f80009c == 0)) {
              uVar5 = uVar7 & 3;
              if (uVar5 == 2) {
                if (_DAT_1f800084 < _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (_DAT_1f80008c <= _DAT_1f800088) {
                  _DAT_1f800004 = _DAT_1f80008c >> 2;
                  halt_baddata();
                }
                _DAT_1f800004 = _DAT_1f800088 >> 2;
                halt_baddata();
              }
              if (uVar5 < 3) {
                if (uVar5 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
LAB_80128930:
                if (_DAT_1f800084 <= _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                if (_DAT_1f800084 <= _DAT_1f80008c) {
                  _DAT_1f800004 = _DAT_1f80008c >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (uVar5 == 3) goto LAB_80128930;
              copFunction(2,0x158002d);
              _DAT_1f800004 = getCopReg(2,7);
              if (((uVar7 & 8) != 0) &&
                 (_DAT_1f800004 = _DAT_1f800004 + 0x80, 0x7ff < _DAT_1f800004)) {
                _DAT_1f800004 = 0x7ff;
              }
              _DAT_1f800004 =
                   (_DAT_1f800004 >> (_DAT_1f800004 >> 10 & 0x1fU)) + (_DAT_1f800004 >> 10) * 0x200;
              if (0x7fb < _DAT_1f800004 - 4U) {
                _DAT_1f800004 = -1;
              }
              if (-1 < _DAT_1f800004) {
                *(short *)(puVar8 + 2) = *(short *)((int)puVar9 + 2);
                if (param_4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                iVar1 = func_0x80078240((int)(short)puVar9[-4] - (int)_DAT_1f800160,
                                        (int)*(short *)((int)puVar9 + -0xe) - (int)_DAT_1f800162,
                                        (int)(short)puVar9[-3] - (int)_DAT_1f800164);
                iVar1 = iVar1 << 1;
                iVar2 = func_0x80078240((int)(short)puVar9[-2] - (int)_DAT_1f800160,
                                        (int)*(short *)((int)puVar9 + -6) - (int)_DAT_1f800162,
                                        (int)*(short *)((int)puVar9 + -10) - (int)_DAT_1f800164);
                iVar2 = iVar2 << 1;
                iVar6 = (int)*(short *)((int)puVar9 + -2) - (int)_DAT_1f800162;
                iVar3 = func_0x80078240((int)(short)puVar9[-1] - (int)_DAT_1f800160,iVar6,
                                        (int)(short)*puVar9 - (int)_DAT_1f800164);
                iVar3 = iVar3 << 1;
                if (0x4000 < iVar1) {
                  iVar1 = 0x4000;
                }
                if (0x4000 < iVar2) {
                  iVar2 = 0x4000;
                }
                if (0x4000 < iVar3) {
                  iVar3 = 0x4000;
                }
                setCopReg(2,0x4000,iVar1);
                setCopReg(2,0x3000,puVar8[-6]);
                copFunction(2,0x780010);
                uVar7 = getCopReg(2,0x16);
                puVar10[1] = uVar7;
                setCopReg(2,0x4000,iVar2);
                setCopReg(2,0x3000,puVar8[-3]);
                copFunction(2,0x780010);
                uVar7 = getCopReg(2,0x16);
                puVar10[4] = uVar7;
                setCopReg(2,0x4000,iVar3);
                setCopReg(2,0x3000,*puVar8);
                copFunction(2,0x780010);
                uVar7 = getCopReg(2,0x16);
                *puVar8 = uVar7;
                puVar4 = (uint *)(param_2 + _DAT_1f800004 * 4);
                param_1 = (uint *)0x9000000;
                *puVar10 = *puVar4 | 0x9000000;
                *puVar4 = (uint)puVar10;
                puVar8 = puVar8 + 10;
                puVar10 = puVar10 + 10;
              }
            }
          }
        }
      }
      puVar9 = puVar9 + 9;
      puVar12 = puVar12 + 9;
      param_3 = iVar11;
    } while (iVar11 != 0);
  }
  _DAT_800bf544 = puVar10;
  return puVar12;
}

