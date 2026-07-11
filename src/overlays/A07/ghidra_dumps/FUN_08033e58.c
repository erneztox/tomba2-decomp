// FUN_08033e58

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_08033e58(uint *param_1,int param_2,int param_3,int param_4)

{
  undefined4 in_zero;
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  undefined4 local_30 [2];
  
  local_30[0] = 0x34808080;
  setCopReg(2,0x3000,local_30);
  puVar9 = _DAT_800bf544;
  puVar11 = param_1;
  if (param_3 != 0) {
    puVar8 = param_1 + 8;
    puVar7 = _DAT_800bf544 + 7;
    iVar6 = param_2;
    do {
      iVar10 = param_3 + -1;
      setCopReg(2,in_zero,puVar11[4]);
      setCopReg(2,param_3,puVar11[6]);
      setCopReg(2,0x800,puVar11[5]);
      setCopReg(2,param_1,puVar11[7]);
      setCopReg(2,0x1800,puVar11[5] >> 0x10);
      setCopReg(2,iVar6,puVar11[8]);
      puVar7[-6] = *puVar11;
      copFunction(2,0x280030);
      puVar7[-4] = puVar8[-6];
      puVar7[-1] = puVar8[-5];
      param_1 = (uint *)puVar8[-7];
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        puVar7[-3] = (uint)param_1 & 0xf0f0f0;
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar5 = getCopReg(2,0xc);
          puVar9[2] = uVar5;
          uVar5 = getCopReg(2,0xd);
          puVar9[5] = uVar5;
          uVar5 = getCopReg(2,0xe);
          puVar9[8] = uVar5;
          if (((((ushort)puVar7[-5] < 0x140) || ((ushort)puVar7[-2] < 0x140)) ||
              ((ushort)puVar7[1] < 0x140)) &&
             (((*(ushort *)((int)puVar7 + -0x12) < 0xf0 || (*(ushort *)((int)puVar7 + -6) < 0xf0))
              || (*(ushort *)((int)puVar7 + 6) < 0xf0)))) {
            *puVar7 = ((uint)param_1 & 0xf0f0f) << 4;
            _DAT_1f800084 = getCopReg(2,0x11);
            _DAT_1f800088 = getCopReg(2,0x12);
            _DAT_1f80008c = getCopReg(2,0x13);
            uVar5 = (uint)param_1 >> 0x18 & 3;
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
LAB_08034060:
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
            if (uVar5 == 3) goto LAB_08034060;
            copFunction(2,0x158002d);
            iVar1 = getCopReg(2,7);
            _DAT_1f800004 = (iVar1 >> (iVar1 >> 10 & 0x1fU)) + (iVar1 >> 10) * 0x200;
            if (0x7fb < _DAT_1f800004 - 4U) {
              _DAT_1f800004 = -1;
            }
            if (-1 < _DAT_1f800004) {
              *(short *)(puVar7 + 2) = *(short *)((int)puVar8 + 2);
              if (param_4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              iVar1 = func_0x00078240((int)(short)puVar8[-4] - (int)_DAT_1f800160,
                                      (int)*(short *)((int)puVar8 + -0xe) - (int)_DAT_1f800162,
                                      (int)(short)puVar8[-3] - (int)_DAT_1f800164);
              iVar1 = iVar1 << 1;
              iVar2 = func_0x00078240((int)(short)puVar8[-2] - (int)_DAT_1f800160,
                                      (int)*(short *)((int)puVar8 + -6) - (int)_DAT_1f800162,
                                      (int)*(short *)((int)puVar8 + -10) - (int)_DAT_1f800164);
              iVar2 = iVar2 << 1;
              iVar6 = (int)*(short *)((int)puVar8 + -2) - (int)_DAT_1f800162;
              iVar3 = func_0x00078240((int)(short)puVar8[-1] - (int)_DAT_1f800160,iVar6,
                                      (int)(short)*puVar8 - (int)_DAT_1f800164);
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
              setCopReg(2,0x3000,puVar7[-6]);
              copFunction(2,0x780010);
              uVar5 = getCopReg(2,0x16);
              puVar9[1] = uVar5;
              setCopReg(2,0x4000,iVar2);
              setCopReg(2,0x3000,puVar7[-3]);
              copFunction(2,0x780010);
              uVar5 = getCopReg(2,0x16);
              puVar9[4] = uVar5;
              setCopReg(2,0x4000,iVar3);
              setCopReg(2,0x3000,*puVar7);
              copFunction(2,0x780010);
              uVar5 = getCopReg(2,0x16);
              *puVar7 = uVar5;
              puVar4 = (uint *)(param_2 + _DAT_1f800004 * 4);
              param_1 = (uint *)0x9000000;
              *puVar9 = *puVar4 | 0x9000000;
              *puVar4 = (uint)puVar9;
              puVar7 = puVar7 + 10;
              puVar9 = puVar9 + 10;
            }
          }
        }
      }
      puVar8 = puVar8 + 9;
      puVar11 = puVar11 + 9;
      param_3 = iVar10;
    } while (iVar10 != 0);
  }
  _DAT_800bf544 = puVar9;
  return puVar11;
}

