// FUN_80127e00

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_80127e00(uint *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 in_zero;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  
  iVar5 = _DAT_800bf544;
  puVar3 = param_1;
  if (param_3 != 0) {
    puVar7 = param_1 + 4;
    do {
      iVar6 = param_3 + -1;
      setCopReg(2,in_zero,puVar3[5]);
      setCopReg(2,0x800,puVar3[6]);
      setCopReg(2,0x1800,puVar3[6] >> 0x10);
      setCopReg(2,param_3,puVar3[7]);
      setCopReg(2,param_1,puVar3[8]);
      setCopReg(2,0x2800,puVar3[9]);
      uVar4 = *puVar3;
      *(uint *)(iVar5 + 4) = uVar4 & 0xfff0f0f0;
      copFunction(2,0x280030);
      *(uint *)(iVar5 + 0x10) = (uVar4 & 0xf0f0f) << 4;
      uVar4 = puVar7[-3];
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        *(uint *)(iVar5 + 0xc) = puVar7[-2];
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar2 = getCopReg(2,0xc);
          *(undefined4 *)(iVar5 + 8) = uVar2;
          uVar2 = getCopReg(2,0xd);
          *(undefined4 *)(iVar5 + 0x14) = uVar2;
          uVar2 = getCopReg(2,0xe);
          *(undefined4 *)(iVar5 + 0x20) = uVar2;
          setCopReg(2,in_zero,puVar3[10]);
          setCopReg(2,0x800,puVar3[9] >> 0x10);
          *(uint *)(iVar5 + 0x1c) = uVar4 & 0xf0f0f0;
          copFunction(2,0x180001);
          *(uint *)(iVar5 + 0x28) = (uVar4 & 0xf0f0f) << 4;
          *(uint *)(iVar5 + 0x18) = puVar7[-1];
          _DAT_1f800000 = getCopControlWord(2,0xf800);
          if (-1 < _DAT_1f800000) {
            uVar2 = getCopReg(2,0xe);
            *(undefined4 *)(iVar5 + 0x2c) = uVar2;
            if ((((((*(ushort *)(iVar5 + 8) < 0x140) || (*(ushort *)(iVar5 + 0x14) < 0x140)) ||
                  (*(ushort *)(iVar5 + 0x20) < 0x140)) || (*(ushort *)(iVar5 + 0x2c) < 0x140)) &&
                (((*(ushort *)(iVar5 + 10) < 0xf0 || (*(ushort *)(iVar5 + 0x16) < 0xf0)) ||
                 ((*(ushort *)(iVar5 + 0x22) < 0xf0 || (*(ushort *)(iVar5 + 0x2e) < 0xf0)))))) &&
               (((uVar4 >> 0x18 & 0x40) == 0 || (_DAT_1f80009c == 0)))) {
              _DAT_1f800084 = getCopReg(2,0x10);
              _DAT_1f800088 = getCopReg(2,0x11);
              _DAT_1f80008c = getCopReg(2,0x12);
              iVar5 = getCopReg(2,0x13);
              _DAT_1f800090 = iVar5;
              uVar4 = uVar4 >> 0x18 & 3;
              iVar6 = _DAT_1f800088;
              if (uVar4 == 1) {
                if (_DAT_1f800088 < _DAT_1f800084) {
                  iVar6 = _DAT_1f800084;
                }
                bVar1 = iVar5 < iVar6;
                if (iVar5 < _DAT_1f80008c) {
                  puVar3 = (uint *)FUN_80131074(_DAT_1f80008c,0x80140000);
                  return puVar3;
                }
              }
              else {
                if (uVar4 != 2) {
                  halt_baddata();
                }
                if (_DAT_1f800084 < _DAT_1f800088) {
                  iVar6 = _DAT_1f800084;
                }
                bVar1 = iVar6 < iVar5;
                if (_DAT_1f80008c < iVar5) {
                  bVar1 = iVar6 < _DAT_1f80008c;
                  iVar5 = _DAT_1f80008c;
                }
              }
              if (bVar1) {
                iVar5 = iVar6;
              }
              _DAT_1f800004 = iVar5 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
      puVar7 = puVar7 + 0xb;
      puVar3 = puVar3 + 0xb;
      param_3 = iVar6;
    } while (iVar6 != 0);
  }
  _DAT_800bf544 = iVar5;
  return puVar3;
}

