// FUN_8012693c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_8012693c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_zero;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 in_f0;
  
  iVar2 = _DAT_800bf544;
  puVar3 = param_1;
  if (param_3 != 0) {
    puVar5 = param_1 + 8;
    do {
      iVar6 = param_3 + -1;
      setCopReg(2,in_zero,puVar3[4]);
      setCopReg(2,param_3,puVar3[6]);
      setCopReg(2,0x800,puVar3[5]);
      setCopReg(2,param_1,puVar3[7]);
      setCopReg(2,0x1800,(uint)puVar3[5] >> 0x10);
      setCopReg(2,param_2,puVar3[8]);
      *(undefined4 *)(iVar2 + 4) = *puVar3;
      copFunction(2,0x280030);
      *(undefined4 *)(iVar2 + 0xc) = puVar5[-6];
      *(undefined4 *)(iVar2 + 0x18) = puVar5[-5];
      param_1 = (undefined4 *)puVar5[-7];
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        *(uint *)(iVar2 + 0x10) = (uint)param_1 & 0xf0f0f0;
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar1 = getCopReg(2,0xc);
          *(undefined4 *)(iVar2 + 8) = uVar1;
          uVar1 = getCopReg(2,0xd);
          *(undefined4 *)(iVar2 + 0x14) = uVar1;
          uVar1 = getCopReg(2,0xe);
          *(undefined4 *)(iVar2 + 0x20) = uVar1;
          if ((((*(ushort *)(iVar2 + 8) < 0x140) || (*(ushort *)(iVar2 + 0x14) < 0x140)) ||
              (*(ushort *)(iVar2 + 0x20) < 0x140)) &&
             (((*(ushort *)(iVar2 + 10) < 0xf0 || (*(ushort *)(iVar2 + 0x16) < 0xf0)) ||
              (*(ushort *)(iVar2 + 0x22) < 0xf0)))) {
            *(uint *)(iVar2 + 0x1c) = ((uint)param_1 & 0xf0f0f) << 4;
            _DAT_1f800084 = getCopReg(2,0x11);
            _DAT_1f800088 = getCopReg(2,0x12);
            _DAT_1f80008c = getCopReg(2,0x13);
            uVar4 = (uint)param_1 >> 0x18 & 3;
            iVar6 = _DAT_1f80008c >> 2;
            if (uVar4 == 1) {
              if (_DAT_1f800084 <= _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (_DAT_1f80008c < _DAT_1f800084) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else {
              if (uVar4 != 2) {
                puVar3 = (undefined4 *)FUN_8012fb58();
                return puVar3;
              }
              if (_DAT_1f800084 < _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (_DAT_1f800088 < _DAT_1f80008c) {
                iVar6 = _DAT_1f800088 >> 2;
              }
            }
            _DAT_1f800004 = iVar6;
            *(undefined4 *)(iVar2 + 0x3964) = in_f0;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
      puVar5 = puVar5 + 9;
      puVar3 = puVar3 + 9;
      param_3 = iVar6;
    } while (iVar6 != 0);
  }
  _DAT_800bf544 = iVar2;
  return puVar3;
}

