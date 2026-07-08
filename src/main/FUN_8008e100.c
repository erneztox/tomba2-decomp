
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8008e100(undefined4 param_1,short param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  if (_DAT_80104c28 == 0xffffffff) {
    FUN_8009a730(s_Can_t_Open_Sequence_data_any_mor_8001c5e0);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    do {
      uVar3 = uVar2;
      if ((_DAT_80104c28 & 1 << (uVar2 & 0x1f)) == 0) break;
      uVar2 = uVar2 + 1;
      uVar3 = 0;
    } while ((int)uVar2 < 0x20);
    uVar3 = (uint)(short)uVar3;
    _DAT_80104c28 = _DAT_80104c28 | 1 << (uVar3 & 0x1f);
    sVar1 = FUN_80090210(uVar3,(int)param_2,param_1);
    _DAT_80104b90 = FUN_80090010;
    _DAT_80104b94 = FUN_800900f0;
    _DAT_80104b9c = FUN_8008fe40;
    _DAT_80104b98 = FUN_8008fb60;
    _DAT_80104ba0 = FUN_8008fc10;
    _DAT_80104ba4 = FUN_8008e390;
    _DAT_80104bac = FUN_8008e790;
    _DAT_80104bb0 = FUN_8008e860;
    _DAT_80104bb4 = FUN_8008e930;
    _DAT_80104bb8 = FUN_8008ea20;
    _DAT_80104bbc = FUN_8008eb60;
    _DAT_80104bc0 = FUN_8008ec60;
    _DAT_80104bc4 = FUN_8008eda0;
    _DAT_80104bc8 = FUN_8008ee10;
    _DAT_80104bcc = FUN_8008ead0;
    _DAT_80104bd0 = FUN_8008ee80;
    _DAT_80104ba8 = FUN_8008e410;
    _DAT_80104bd4 = FUN_8008ef40;
    _DAT_80104bd8 = FUN_8008efd0;
    _DAT_80104bdc = FUN_8008f090;
    _DAT_80104be0 = FUN_8008f120;
    _DAT_80104be4 = FUN_8008f1b0;
    _DAT_80104be8 = FUN_8008f360;
    _DAT_80104bec = FUN_8008f420;
    _DAT_80104bf0 = FUN_8008f4d0;
    _DAT_80104bf4 = FUN_8008f580;
    _DAT_80104bf8 = FUN_8008f630;
    _DAT_80104bfc = FUN_8008f6f0;
    _DAT_80104c00 = FUN_8008f7a0;
    _DAT_80104c04 = FUN_8008f850;
    _DAT_80104c08 = FUN_8008f930;
    _DAT_80104c0c = FUN_8008f9d0;
    _DAT_80104c10 = FUN_8008fa70;
    _DAT_80104c14 = FUN_8008faa0;
    _DAT_80104c18 = FUN_8008fad0;
    _DAT_80104c1c = FUN_8008fb00;
    _DAT_80104c20 = FUN_8008fb30;
    uVar2 = 0xffffffff;
    if (sVar1 != -1) {
      uVar2 = uVar3;
    }
  }
  return uVar2;
}

