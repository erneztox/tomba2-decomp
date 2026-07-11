// FUN_08018120

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018120(int param_1)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  
  puVar10 = _DAT_800bf544;
  iVar9 = *(int *)(param_1 + 0x50);
  iVar5 = (_DAT_1f8000d2 - 0x400) + (((int)_DAT_1f800104 << 0xb) >> 0xc);
  local_30 = (undefined2)iVar5;
  iVar7 = (_DAT_1f8000da - 0x400) + (((int)_DAT_1f800108 << 0xb) >> 0xc);
  iVar6 = (_DAT_1f8000d6 - 0x400) + (((int)_DAT_1f800106 << 0xb) >> 0xc);
  local_2e = (undefined2)iVar6;
  local_2c = (undefined2)iVar7;
  sVar2 = *(short *)(param_1 + 0x2c) - (short)((uint)(iVar5 * 0x10000) >> 0x10);
  sVar3 = *(short *)(param_1 + 0x2e) - (short)((uint)(iVar6 * 0x10000) >> 0x10);
  sVar4 = *(short *)(param_1 + 0x30) - (short)((uint)(iVar7 * 0x10000) >> 0x10);
  func_0x00084660(&DAT_1f8000f8);
  func_0x00084220(&local_30,&DAT_1f800014);
  _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
  _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
  _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
  func_0x00084690();
  iVar6 = iVar9 * _DAT_8011c030 + 1;
  iVar5 = 0x200;
  iVar7 = iVar6 * _DAT_8011c030 + 1;
  puVar8 = puVar10 + 1;
  _DAT_1f8000c0 =
       CONCAT22((short)((uint)iVar6 >> 0x10) + sVar3,(short)((uint)iVar9 >> 0x10) + sVar2) &
       0x7ff07ff;
  _DAT_1f8000c4 = CONCAT22(DAT_1f8000c4_2,(short)((uint)iVar7 >> 0x10) + sVar4) & 0xffff07ff;
  iVar6 = iVar7 * _DAT_8011c030 + 1;
  do {
    setCopReg(2,in_zero,_DAT_1f8000c0);
    setCopReg(2,extraout_at,_DAT_1f8000c4);
    iVar6 = iVar6 * _DAT_8011c030 + 1;
    copFunction(2,0x180001);
    iVar7 = iVar6 * _DAT_8011c030 + 1;
    _DAT_1f8000c0 =
         CONCAT22((short)((uint)iVar7 >> 0x10) + sVar3,(short)((uint)iVar6 >> 0x10) + sVar2) &
         0x7ff07ff;
    iVar6 = iVar7 * _DAT_8011c030 + 1;
    _DAT_1f8000c4 = CONCAT22(DAT_1f8000c4_2,(short)((uint)iVar6 >> 0x10) + sVar4) & 0xffff07ff;
    _DAT_1f800080 = getCopControlWord(2,0xf800);
    if (-1 < _DAT_1f800080) {
      uVar1 = getCopReg(2,0xe);
      puVar10[2] = uVar1;
      _DAT_1f800080 = getCopReg(2,0x13);
      if ((ushort)puVar8[1] < 0x140) {
        if (_DAT_1f800080 < 0x600) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar8[2] = 0x10001;
        *puVar8 = 0x60ffffff;
        iVar7 = _DAT_800ed8c8;
        *puVar10 = *(uint *)(_DAT_800ed8c8 + 0x400) | 0x3000000;
        *(uint **)(iVar7 + 0x400) = puVar10;
        puVar8 = puVar8 + 4;
        puVar10 = puVar10 + 4;
      }
    }
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  _DAT_800bf544 = puVar10;
  return;
}

