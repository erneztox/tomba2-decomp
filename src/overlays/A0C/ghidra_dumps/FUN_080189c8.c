// FUN_080189c8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080189c8(int *param_1,int param_2,uint *param_3,byte *param_4)

{
  int iVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  short sVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  uint *local_res8;
  byte *local_resc;
  int local_38;
  int *local_34;
  
  puVar7 = _DAT_800bf544;
  local_38 = 0;
  func_0x000329e0(6);
  iVar9 = 0;
  iVar11 = 0;
  _DAT_1f800088 = 0;
  uVar2 = extraout_at;
  local_res8 = param_3;
  local_resc = param_4;
  local_34 = param_1;
  bVar8 = true;
  do {
    sVar5 = (short)iVar9;
    sVar10 = (short)iVar11;
    if (*local_34 == 0) {
      _DAT_1f800084 = _DAT_1f800088;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    setCopReg(2,in_zero,*local_34);
    setCopReg(2,uVar2,local_34[1]);
    copFunction(2,0x180001);
    _DAT_1f800080 = getCopControlWord(2,0xf800);
    if (_DAT_1f800080 < 0) {
      _DAT_1f800084 = _DAT_1f800088;
      halt_baddata();
    }
    iVar1 = getCopReg(2,0x13);
    _DAT_1f800080 = ((iVar1 >> 2) >> (iVar1 >> 0xc & 0x1fU)) + (iVar1 >> 0xc) * 0x200;
    if (0x7fb < _DAT_1f800080 - 4U) {
      _DAT_1f800080 = -1;
    }
    if (_DAT_1f800080 < 1) {
      _DAT_1f800084 = _DAT_1f800088;
      halt_baddata();
    }
    uVar3 = getCopReg(2,0xe);
    iVar1 = getCopReg(2,0x18);
    _DAT_1f800084 = _DAT_1f800088;
    _DAT_1f800090 = uVar3;
    if (local_38 != 0) {
      _DAT_1f800092 = (short)(uVar3 >> 0x10);
      iVar11 = (int)_DAT_1f800092;
      _DAT_1f800090 = (short)uVar3;
      iVar9 = (int)_DAT_1f800090;
      _DAT_1f800088 = iVar1;
      iVar9 = func_0x00085690(iVar11 - _DAT_1f80008e,iVar9 - _DAT_1f80008c);
      iVar11 = func_0x00083f50(iVar9 + 0x400);
      iVar11 = (int)((uint)*local_resc * iVar11 + 0x800) >> 0xc;
      iVar9 = func_0x00083e80(iVar9 + 0x400);
      iVar9 = (int)((uint)*local_resc * iVar9 + 0x800) >> 0xc;
      if (local_38 == 1) {
        sVar10 = (short)((uint)(iVar11 * _DAT_1f800084) >> 0x10);
        sVar5 = (short)((uint)(iVar9 * _DAT_1f800084) >> 0x10);
      }
      iVar11 = iVar11 * _DAT_1f800088 >> 0x10;
      iVar9 = iVar9 * _DAT_1f800088 >> 0x10;
      uVar2 = extraout_at_00;
      iVar1 = _DAT_1f800088;
    }
    _DAT_1f800088 = iVar1;
    if (((!bVar8) && (0 < _DAT_1f800080)) && (_DAT_1f800080 < 0x800)) {
      *(short *)(puVar7 + 2) = _DAT_1f80008c - sVar10;
      *(short *)((int)puVar7 + 10) = _DAT_1f80008e - sVar5;
      *(short *)(puVar7 + 4) = _DAT_1f800090 - (short)iVar11;
      *(short *)((int)puVar7 + 0x12) = _DAT_1f800092 - (short)iVar9;
      puVar7[6] = _DAT_1f80008c;
      puVar7[8] = _DAT_1f800090;
      *(short *)(puVar7 + 0xb) = _DAT_1f80008c + sVar10;
      *(short *)((int)puVar7 + 0x2e) = _DAT_1f80008e + sVar5;
      *(short *)(puVar7 + 0xd) = _DAT_1f800090 + (short)iVar11;
      *(short *)((int)puVar7 + 0x36) = _DAT_1f800092 + (short)iVar9;
      puVar7[0xf] = _DAT_1f80008c;
      uVar3 = _DAT_1f800090;
      puVar7[0xc] = 0;
      puVar7[10] = 0;
      puVar7[3] = 0;
      puVar7[1] = 0;
      puVar7[0x11] = uVar3;
      uVar3 = *local_res8;
      puVar7[0xe] = uVar3;
      puVar7[5] = uVar3;
      uVar3 = local_res8[1];
      puVar7[0x10] = uVar3;
      puVar7[7] = uVar3;
      *(undefined1 *)((int)puVar7 + 7) = 0x3a;
      *(undefined1 *)((int)puVar7 + 0x2b) = 0x3a;
      puVar4 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
      *puVar7 = *puVar4 | 0x8000000;
      *puVar4 = (uint)puVar7;
      puVar4 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
      puVar7[9] = *puVar4 | 0x8000000;
      *puVar4 = (uint)(puVar7 + 9);
      puVar6 = puVar7 + 0x12;
      func_0x00083de0(puVar6,0,1,0x75,0);
      puVar4 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
      *puVar6 = *puVar4 | 0x2000000;
      *puVar4 = (uint)puVar6;
      puVar7 = puVar7 + 0x15;
      uVar2 = extraout_at_01;
    }
    local_resc = local_resc + 1;
    local_res8 = local_res8 + 1;
    local_34 = local_34 + 2;
    _DAT_1f80008c = _DAT_1f800090;
    local_38 = local_38 + 1;
    _DAT_1f800084 = _DAT_1f800088;
    bVar8 = false;
  } while (local_38 < param_2);
  _DAT_800bf544 = puVar7;
  return;
}

