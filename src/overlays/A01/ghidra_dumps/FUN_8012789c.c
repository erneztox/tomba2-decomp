// FUN_8012789c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_8012789c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 in_zero;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar3 = _DAT_800bf544;
  puVar2 = param_1;
  if (param_3 != 0) {
    puVar5 = param_1 + 8;
    do {
      iVar6 = param_3 + -1;
      setCopReg(2,in_zero,puVar2[4]);
      setCopReg(2,param_3,puVar2[6]);
      setCopReg(2,0x800,puVar2[5]);
      setCopReg(2,param_1,puVar2[7]);
      setCopReg(2,0x1800,(uint)puVar2[5] >> 0x10);
      setCopReg(2,param_2,puVar2[8]);
      *(undefined4 *)(iVar3 + 4) = *puVar2;
      copFunction(2,0x280030);
      *(undefined4 *)(iVar3 + 0xc) = puVar5[-6];
      *(undefined4 *)(iVar3 + 0x18) = puVar5[-5];
      param_1 = (undefined4 *)puVar5[-7];
      _DAT_1f800000 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800000) {
        copFunction(2,0x1400006);
        *(uint *)(iVar3 + 0x10) = (uint)param_1 & 0xf0f0f0;
        _DAT_1f800000 = getCopReg(2,0x18);
        if (0 < _DAT_1f800000) {
          uVar1 = getCopReg(2,0xc);
          *(undefined4 *)(iVar3 + 8) = uVar1;
          uVar1 = getCopReg(2,0xd);
          *(undefined4 *)(iVar3 + 0x14) = uVar1;
          uVar1 = getCopReg(2,0xe);
          *(undefined4 *)(iVar3 + 0x20) = uVar1;
          if ((((*(ushort *)(iVar3 + 8) < 0x140) || (*(ushort *)(iVar3 + 0x14) < 0x140)) ||
              (*(ushort *)(iVar3 + 0x20) < 0x140)) &&
             (((*(ushort *)(iVar3 + 10) < 0xf0 || (*(ushort *)(iVar3 + 0x16) < 0xf0)) ||
              (*(ushort *)(iVar3 + 0x22) < 0xf0)))) {
            *(uint *)(iVar3 + 0x1c) = ((uint)param_1 & 0xf0f0f) << 4;
            _DAT_1f800084 = getCopReg(2,0x11);
            _DAT_1f800088 = getCopReg(2,0x12);
            _DAT_1f80008c = getCopReg(2,0x13);
            if ((((uint)param_1 >> 0x18 & 0x40) == 0) || (_DAT_1f80009c == 0)) {
              uVar4 = (uint)param_1 >> 0x18 & 3;
              iVar3 = _DAT_1f80008c >> 2;
              if (uVar4 == 1) {
                if (_DAT_1f800084 <= _DAT_1f800088) {
                  puVar2 = (undefined4 *)FUN_80130aac();
                  return puVar2;
                }
                if (_DAT_1f800084 <= _DAT_1f80008c) goto LAB_80127b20;
              }
              else if (uVar4 == 2) {
                if (_DAT_1f800084 < _DAT_1f800088) {
                  puVar2 = (undefined4 *)FUN_80130a5c();
                  return puVar2;
                }
                if (_DAT_1f800088 < _DAT_1f80008c) {
                  iVar3 = _DAT_1f800088 >> 2;
                }
LAB_80127b20:
                _DAT_1f800004 = iVar3;
                puVar2 = (undefined4 *)FUN_80130acc();
                return puVar2;
              }
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
      puVar5 = puVar5 + 9;
      puVar2 = puVar2 + 9;
      param_3 = iVar6;
    } while (iVar6 != 0);
  }
  _DAT_800bf544 = iVar3;
  return puVar2;
}

