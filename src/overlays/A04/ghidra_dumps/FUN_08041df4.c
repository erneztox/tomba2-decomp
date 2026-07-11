// FUN_08041df4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08041df4(int param_1)

{
  short sVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  undefined2 local_38;
  short local_36;
  short local_34;
  int local_30;
  
  puVar10 = _DAT_800bf544;
  local_30 = param_1 + 0x50;
  if (DAT_1f800135 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (_DAT_800bf544 < (uint *)0xdfe68) {
    iVar2 = (_DAT_1f8000d2 - 0x400) + (((int)_DAT_1f800104 << 0xb) >> 0xc);
    local_38 = (undefined2)iVar2;
    iVar6 = (_DAT_1f8000da - 0x400) + (((int)_DAT_1f800108 << 0xb) >> 0xc);
    iVar3 = (_DAT_1f8000d6 - 0x400) + (((int)_DAT_1f800106 << 0xb) >> 0xc);
    local_36 = (short)iVar3;
    local_34 = (short)iVar6;
    sVar1 = *(short *)(param_1 + 0x2c) - (short)((uint)(iVar2 * 0x10000) >> 0x10);
    iVar11 = (int)*(short *)(param_1 + 0x2e) - (iVar3 * 0x10000 >> 0x10);
    iVar6 = (int)*(short *)(param_1 + 0x30) - (iVar6 * 0x10000 >> 0x10);
    func_0x00084660(&DAT_1f8000f8);
    func_0x00084220(&local_38,&DAT_1f800014);
    _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
    _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
    _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
    func_0x00084690();
    _DAT_1f8000c0 = CONCAT22((short)iVar11 + 0x18be,sVar1 + 0x12) & 0x7ff07ff;
    _DAT_1f8000c4 = CONCAT22(DAT_1f8000c4_2,(short)iVar6 + -0x4a51) & 0xffff07ff;
    iVar2 = (int)*(short *)(local_30 + 2);
    iVar3 = -0x758def36;
    if (-1 < iVar2) {
      puVar8 = puVar10 + 1;
      do {
        setCopReg(2,in_zero,_DAT_1f8000c0);
        setCopReg(2,extraout_at,_DAT_1f8000c4);
        iVar9 = iVar3 * 0x7d2b89dd + 1;
        copFunction(2,0x180001);
        iVar3 = iVar9 * 0x7d2b89dd + 1;
        uVar7 = (iVar3 >> 0x10) + iVar11 & 0x7ff;
        iVar3 = iVar3 * 0x7d2b89dd + 1;
        uVar5 = (iVar3 >> 0x10) + iVar6 & 0x7ff;
        iVar4 = (int)local_34 + uVar5;
        if ((iVar4 < 0x2711) || (((int)((int)local_36 + uVar7) < -8999 && (iVar4 < 0x2ced)))) {
          _DAT_1f8000c0 = CONCAT22((short)uVar7,(short)((uint)iVar9 >> 0x10) + sVar1) & 0xffff07ff;
          _DAT_1f8000c4 = CONCAT22(DAT_1f8000c4_2,(short)uVar5);
          _DAT_1f800080 = getCopControlWord(2,0xf800);
          if (-1 < _DAT_1f800080) {
            uVar5 = getCopReg(2,0xe);
            puVar10[2] = uVar5;
            _DAT_1f800080 = getCopReg(2,0x13);
            if ((ushort)puVar8[1] < 0x140) {
              if (_DAT_1f800080 < 0x600) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              puVar8[2] = 0x10001;
              *puVar8 = 0x60ffffff;
              iVar4 = _DAT_800ed8c8;
              *puVar10 = *(uint *)(_DAT_800ed8c8 + 0x400) | 0x3000000;
              *(uint **)(iVar4 + 0x400) = puVar10;
              puVar8 = puVar8 + 4;
              puVar10 = puVar10 + 4;
            }
          }
        }
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
  }
  _DAT_800bf544 = puVar10;
  return;
}

