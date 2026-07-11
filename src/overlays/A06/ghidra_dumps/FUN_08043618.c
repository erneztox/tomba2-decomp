// FUN_08043618

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_08043618(uint *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 in_zero;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  short *psVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  undefined4 local_30;
  uint local_2c;
  
  local_30 = 0x3c808080;
  setCopReg(2,0x3000,&local_30);
  puVar11 = _DAT_800bf544;
  puVar12 = param_1;
  if (param_3 != 0) {
    local_2c = 0xf0f0f0;
    psVar10 = (short *)((int)param_1 + 0x26);
    puVar9 = _DAT_800bf544 + 10;
    do {
      iVar13 = param_3 + -1;
      setCopReg(2,in_zero,puVar12[5]);
      setCopReg(2,0x800,puVar12[6]);
      setCopReg(2,0x1800,puVar12[6] >> 0x10);
      setCopReg(2,param_3,puVar12[7]);
      setCopReg(2,param_1,puVar12[8]);
      setCopReg(2,0x2800,puVar12[9]);
      uVar8 = *puVar12;
      puVar9[-9] = uVar8 & 0xfff0f0f0;
      copFunction(2,0x280030);
      puVar9[-6] = uVar8 << 4 & local_2c;
      uVar8 = *(uint *)(psVar10 + -0x11);
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        puVar9[-7] = *(uint *)(psVar10 + -0xf);
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar2 = getCopReg(2,0xc);
          puVar11[2] = uVar2;
          uVar2 = getCopReg(2,0xd);
          puVar11[5] = uVar2;
          uVar2 = getCopReg(2,0xe);
          puVar11[8] = uVar2;
          setCopReg(2,in_zero,puVar12[10]);
          setCopReg(2,0x800,puVar12[9] >> 0x10);
          puVar9[-3] = uVar8 & local_2c;
          copFunction(2,0x180001);
          *puVar9 = uVar8 << 4 & local_2c;
          puVar9[-4] = *(uint *)(psVar10 + -0xd);
          _DAT_1f800000 = getCopControlWord(2,0xf800);
          if (-1 < _DAT_1f800000) {
            uVar2 = getCopReg(2,0xe);
            puVar11[0xb] = uVar2;
            if (((((((ushort)puVar9[-8] < 0x140) || ((ushort)puVar9[-5] < 0x140)) ||
                  ((ushort)puVar9[-2] < 0x140)) || ((ushort)puVar9[1] < 0x140)) &&
                (((*(ushort *)((int)puVar9 + -0x1e) < 0xf0 ||
                  (*(ushort *)((int)puVar9 + -0x12) < 0xf0)) ||
                 ((*(ushort *)((int)puVar9 + -6) < 0xf0 || (*(ushort *)((int)puVar9 + 6) < 0xf0)))))
                ) && (((uVar8 >> 0x18 & 4) == 0 || (_DAT_1f80009c == 0)))) {
              _DAT_1f800084 = getCopReg(2,0x10);
              _DAT_1f800088 = getCopReg(2,0x11);
              _DAT_1f80008c = getCopReg(2,0x12);
              _DAT_1f800090 = getCopReg(2,0x13);
              uVar8 = uVar8 >> 0x18 & 3;
              iVar3 = _DAT_1f800090;
              iVar4 = _DAT_1f800088;
              if (uVar8 == 2) {
                if (_DAT_1f800084 < _DAT_1f800088) {
                  iVar4 = _DAT_1f800084;
                }
                bVar1 = iVar4 < _DAT_1f800090;
                if (_DAT_1f80008c < _DAT_1f800090) {
                  bVar1 = iVar4 < _DAT_1f80008c;
                  iVar3 = _DAT_1f80008c;
                }
                goto LAB_08043954;
              }
              if (uVar8 < 3) {
                if (uVar8 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else if (uVar8 != 3) {
                copFunction(2,0x168002e);
                iVar3 = getCopReg(2,7);
                _DAT_1f800004 = (iVar3 >> (iVar3 >> 10 & 0x1fU)) + (iVar3 >> 10) * 0x200;
                if (0x7fb < _DAT_1f800004 - 4U) {
                  _DAT_1f800004 = -1;
                }
                if (-1 < _DAT_1f800004) {
                  uVar8 = *(uint *)(psVar10 + -0xb);
                  puVar9[-1] = uVar8;
                  puVar9[2] = uVar8 >> 0x10;
                  if (param_4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  iVar3 = func_0x00078240((int)psVar10[-9] - (int)_DAT_1f800160,
                                          (int)psVar10[-8] - (int)_DAT_1f800162,
                                          (int)psVar10[-7] - (int)_DAT_1f800164);
                  iVar3 = iVar3 << 1;
                  iVar4 = func_0x00078240((int)psVar10[-5] - (int)_DAT_1f800160,
                                          (int)psVar10[-4] - (int)_DAT_1f800162,
                                          (int)psVar10[-6] - (int)_DAT_1f800164);
                  iVar4 = iVar4 << 1;
                  iVar5 = func_0x00078240((int)psVar10[-3] - (int)_DAT_1f800160,
                                          (int)psVar10[-2] - (int)_DAT_1f800162,
                                          (int)psVar10[-1] - (int)_DAT_1f800164);
                  iVar5 = iVar5 << 1;
                  iVar6 = func_0x00078240((int)psVar10[1] - (int)_DAT_1f800160,
                                          (int)psVar10[2] - (int)_DAT_1f800162,
                                          (int)*psVar10 - (int)_DAT_1f800164);
                  iVar6 = iVar6 << 1;
                  if (0x4000 < iVar3) {
                    iVar3 = 0x4000;
                  }
                  if (0x4000 < iVar4) {
                    iVar4 = 0x4000;
                  }
                  if (0x4000 < iVar5) {
                    iVar5 = 0x4000;
                  }
                  if (0x4000 < iVar6) {
                    iVar6 = 0x4000;
                  }
                  setCopReg(2,0x4000,iVar3);
                  setCopReg(2,0x3000,puVar9[-9]);
                  copFunction(2,0x780010);
                  uVar8 = getCopReg(2,0x16);
                  puVar11[1] = uVar8;
                  setCopReg(2,0x4000,iVar4);
                  setCopReg(2,0x3000,puVar9[-6]);
                  copFunction(2,0x780010);
                  uVar8 = getCopReg(2,0x16);
                  puVar11[4] = uVar8;
                  setCopReg(2,0x4000,iVar5);
                  setCopReg(2,0x3000,puVar9[-3]);
                  copFunction(2,0x780010);
                  uVar8 = getCopReg(2,0x16);
                  puVar11[7] = uVar8;
                  setCopReg(2,0x4000,iVar6);
                  setCopReg(2,0x3000,*puVar9);
                  copFunction(2,0x780010);
                  uVar8 = getCopReg(2,0x16);
                  *puVar9 = uVar8;
                  puVar7 = (uint *)(param_2 + _DAT_1f800004 * 4);
                  param_1 = (uint *)0xc000000;
                  *puVar11 = *puVar7 | 0xc000000;
                  *puVar7 = (uint)puVar11;
                  puVar9 = puVar9 + 0xd;
                  puVar11 = puVar11 + 0xd;
                }
                goto LAB_08043bb4;
              }
              if (_DAT_1f800088 < _DAT_1f800084) {
                iVar4 = _DAT_1f800084;
              }
              bVar1 = _DAT_1f800090 < iVar4;
              if (_DAT_1f800090 < _DAT_1f80008c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
LAB_08043954:
              if (bVar1) {
                iVar3 = iVar4;
              }
              _DAT_1f800004 = iVar3 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
LAB_08043bb4:
      psVar10 = psVar10 + 0x16;
      puVar12 = puVar12 + 0xb;
      param_3 = iVar13;
    } while (iVar13 != 0);
  }
  _DAT_800bf544 = puVar11;
  return puVar12;
}

