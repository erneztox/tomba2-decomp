// FUN_00001da4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00001da4(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_zero;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  
  iVar2 = _DAT_800bf544;
  puVar8 = param_1;
  if (param_3 != 0) {
    puVar7 = param_1 + 4;
    do {
      iVar6 = param_3 + -1;
      setCopReg(2,in_zero,puVar8[5]);
      setCopReg(2,0x800,puVar8[6]);
      setCopReg(2,0x1800,puVar8[6] >> 0x10);
      setCopReg(2,param_3,puVar8[7]);
      setCopReg(2,param_1,puVar8[8]);
      setCopReg(2,0x2800,puVar8[9]);
      uVar4 = *puVar8;
      *(uint *)(iVar2 + 4) = uVar4 & 0xfff0f0f0;
      copFunction(2,0x280030);
      *(uint *)(iVar2 + 0x10) = (uVar4 & 0xf0f0f) << 4;
      uVar4 = puVar7[-3];
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        *(uint *)(iVar2 + 0xc) = puVar7[-2];
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar1 = getCopReg(2,0xc);
          *(undefined4 *)(iVar2 + 8) = uVar1;
          uVar1 = getCopReg(2,0xd);
          *(undefined4 *)(iVar2 + 0x14) = uVar1;
          uVar1 = getCopReg(2,0xe);
          *(undefined4 *)(iVar2 + 0x20) = uVar1;
          setCopReg(2,in_zero,puVar8[10]);
          setCopReg(2,0x800,puVar8[9] >> 0x10);
          *(uint *)(iVar2 + 0x1c) = uVar4 & 0xf0f0f0;
          copFunction(2,0x180001);
          *(uint *)(iVar2 + 0x28) = (uVar4 & 0xf0f0f) << 4;
          *(uint *)(iVar2 + 0x18) = puVar7[-1];
          _DAT_1f800000 = getCopControlWord(2,0xf800);
          if (-1 < _DAT_1f800000) {
            uVar1 = getCopReg(2,0xe);
            *(undefined4 *)(iVar2 + 0x2c) = uVar1;
            if (((((*(ushort *)(iVar2 + 8) < 0x140) || (*(ushort *)(iVar2 + 0x14) < 0x140)) ||
                 (*(ushort *)(iVar2 + 0x20) < 0x140)) || (*(ushort *)(iVar2 + 0x2c) < 0x140)) &&
               (((*(ushort *)(iVar2 + 10) < 0xf0 || (*(ushort *)(iVar2 + 0x16) < 0xf0)) ||
                ((*(ushort *)(iVar2 + 0x22) < 0xf0 || (*(ushort *)(iVar2 + 0x2e) < 0xf0)))))) {
              uVar4 = uVar4 >> 0x18 & 3;
              if (uVar4 == 1) {
                iVar2 = getCopReg(2,0x10);
                iVar6 = getCopReg(2,0x11);
                iVar3 = getCopReg(2,0x12);
                _DAT_1f800004 = getCopReg(2,0x13);
                if (iVar6 < iVar2) {
                  iVar6 = iVar2;
                }
                if (_DAT_1f800004 < iVar3) {
                  _DAT_1f800004 = iVar3;
                }
                if (_DAT_1f800004 < iVar6) {
                  _DAT_1f800004 = iVar6;
                }
                _DAT_1f800004 = _DAT_1f800004 >> 2;
              }
              else {
                if (uVar4 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                iVar2 = getCopReg(2,0x10);
                iVar6 = getCopReg(2,0x11);
                iVar3 = getCopReg(2,0x12);
                iVar5 = getCopReg(2,0x13);
                if (iVar6 < iVar2) {
                  iVar6 = iVar2;
                }
                if (iVar5 < iVar3) {
                  iVar5 = iVar3;
                }
                if (iVar5 < iVar6) {
                  iVar5 = iVar6;
                }
                _DAT_1f800004 = (iVar5 >> 2) + 100;
              }
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
      puVar7 = puVar7 + 0xb;
      puVar8 = puVar8 + 0xb;
      param_3 = iVar6;
    } while (iVar6 != 0);
  }
  _DAT_800bf544 = iVar2;
  return puVar8;
}

