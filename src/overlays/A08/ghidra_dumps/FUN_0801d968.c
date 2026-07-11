// FUN_0801d968

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801d968(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  short *psVar15;
  int iVar16;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  
  puVar7 = _DAT_800bf544;
  psVar14 = (short *)&DAT_801485e8;
  local_44 = 0x20;
  psVar15 = (short *)&DAT_801485ea;
  local_30 = 0x7fff7fff;
  iVar13 = *(int *)(param_1 + 0x50);
  iVar4 = (_DAT_1f8000d2 - 0x400) + (((int)_DAT_1f800104 << 0xb) >> 0xc);
  local_50 = (undefined2)iVar4;
  iVar8 = (_DAT_1f8000da - 0x400) + (((int)_DAT_1f800108 << 0xb) >> 0xc);
  iVar5 = (_DAT_1f8000d6 - 0x400) + (((int)_DAT_1f800106 << 0xb) >> 0xc);
  local_4c = (undefined2)iVar8;
  local_4e = (undefined2)iVar5;
  iVar16 = (int)*(short *)(param_1 + 0x2c) - (iVar4 * 0x10000 >> 0x10);
  local_40 = (int)*(short *)(param_1 + 0x2e) - (iVar5 * 0x10000 >> 0x10);
  local_3c = (int)*(short *)(param_1 + 0x48);
  local_38 = (int)*(short *)(param_1 + 0x4a);
  local_34 = (int)*(short *)(param_1 + 0x4c);
  iVar4 = (int)*(short *)(param_1 + 0x30) - (iVar8 * 0x10000 >> 0x10);
  local_48 = param_1;
  func_0x00084660(&DAT_1f8000f8);
  func_0x00084220(&local_50,&DAT_1f800014);
  _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
  _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
  _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
  func_0x00084690();
  while( true ) {
    iVar12 = iVar13 >> 0x10;
    iVar5 = iVar13 * _DAT_801450d8 + 1;
    uVar11 = iVar12 + iVar16;
    iVar8 = iVar5 >> 0x10;
    uVar10 = iVar8 + local_40;
    _DAT_1f8000c0 = CONCAT22((short)uVar10,(short)uVar11) & 0x7ff07ff;
    iVar13 = iVar5 * _DAT_801450d8 + 1;
    iVar5 = iVar13 >> 0x10;
    uVar9 = iVar5 + iVar4;
    _DAT_1f8000c4 = CONCAT22(DAT_1f8000c4_2,(short)uVar9) & 0xffff07ff;
    setCopReg(2,in_zero,_DAT_1f8000c0);
    setCopReg(2,extraout_at,_DAT_1f8000c4);
    iVar13 = iVar13 * _DAT_801450d8 + 1;
    copFunction(2,0x180001);
    _DAT_1f800080 = getCopControlWord(2,0xf800);
    if (_DAT_1f800080 < 0) {
      *(undefined4 *)psVar14 = local_30;
      halt_baddata();
    }
    uVar2 = getCopReg(2,0xe);
    puVar7[2] = uVar2;
    iVar3 = getCopReg(2,0x13);
    _DAT_1f800080 = ((iVar3 >> 2) >> (iVar3 >> 0xc & 0x1fU)) + (iVar3 >> 0xc) * 0x200;
    if (0x7fb < _DAT_1f800080 - 4U) {
      _DAT_1f800080 = -1;
    }
    if (_DAT_1f800080 < 0) break;
    if (((((uVar11 ^ iVar12 + local_3c) & 0x800) != 0) ||
        (((uVar10 ^ iVar8 + local_38) & 0x800) != 0)) || (((uVar9 ^ iVar5 + local_34) & 0x800) != 0)
       ) break;
    if (*psVar14 != 0x7fff) {
      puVar7[1] = 0x52ffffff;
      puVar7[3] = 0x808080;
      sVar1 = *psVar15;
      *(short *)(puVar7 + 4) = (short)puVar7[2] + (*psVar14 - (short)puVar7[2]) * 2;
      *(short *)((int)puVar7 + 0x12) =
           *(short *)((int)puVar7 + 10) + (sVar1 - *(short *)((int)puVar7 + 10)) * 2;
      puVar6 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
      *puVar7 = *puVar6 | 0x4000000;
      *puVar6 = (uint)puVar7;
      *psVar14 = (short)puVar7[2];
      puVar6 = puVar7 + 5;
      *psVar15 = *(short *)((int)puVar7 + 10);
      func_0x00083de0(puVar6,0,1,0x15,0);
      puVar7 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
      *puVar6 = *puVar7 | 0x2000000;
      *puVar7 = (uint)puVar6;
      halt_baddata();
    }
    *psVar14 = (short)puVar7[2];
    *psVar15 = *(short *)((int)puVar7 + 10);
    psVar15 = psVar15 + 2;
    psVar14 = psVar14 + 2;
    local_44 = local_44 + -1;
    if (local_44 < 1) {
      _DAT_800bf544 = puVar7;
      *(short *)(local_48 + 0x48) = (short)iVar16;
      *(undefined2 *)(local_48 + 0x4a) = (undefined2)local_40;
      *(short *)(local_48 + 0x4c) = (short)iVar4;
      return;
    }
  }
  *(undefined4 *)psVar14 = local_30;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

