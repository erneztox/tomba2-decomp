// FUN_0801dd30

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801dd30(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  sVar1 = _DAT_1f8000da;
  _DAT_800a3f94 = 0x155;
  uVar5 = _DAT_1f8000f2 & 0xfff;
  if (DAT_800e7eaa < 0x2c) {
    *(undefined4 *)(param_1 + 0xc) = _DAT_800ecf78;
    if ((_DAT_800bfe56 & 0x10) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (((sVar1 < 0x1a90) || (0x3ff < uVar5)) || (_DAT_1f800162 < -0x257f)) {
      _DAT_800a3f90 = 0x1b80;
      *(undefined2 *)(param_1 + 8) = **(undefined2 **)(param_1 + 0xc);
      *(undefined2 *)(param_1 + 10) = (*(undefined2 **)(param_1 + 0xc))[1];
      uVar6 = -_DAT_800a3f94 - (int)(short)_DAT_1f8000f2 & 0xfff;
      local_30 = (int)_DAT_1f8000d2;
      local_2c = (int)_DAT_1f8000da;
      iVar2 = func_0x00083e80(uVar6);
      local_28 = local_30 + (iVar2 * _DAT_800a3f90 >> 0xc);
      iVar2 = func_0x00083f50(uVar6);
      uVar6 = _DAT_800a3f94 - (short)_DAT_1f8000f2 & 0xfff;
      local_24 = local_2c + (iVar2 * _DAT_800a3f90 >> 0xc);
      iVar2 = func_0x00083e80(uVar6);
      local_20 = local_30 + (iVar2 * _DAT_800a3f90 >> 0xc);
      iVar2 = func_0x00083f50(uVar6);
      local_1c = local_2c + (iVar2 * _DAT_800a3f90 >> 0xc);
      iVar2 = func_0x00083e80(-(int)(short)_DAT_1f8000f2);
      local_30 = local_30 - (iVar2 * 0x3c0 >> 0xc);
      iVar2 = func_0x00083f50(-(int)(short)_DAT_1f8000f2);
      local_2c = local_2c - (iVar2 * 0x3c0 >> 0xc);
      iVar2 = func_0x00083e80((int)_DAT_1f8000f0);
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      iVar3 = func_0x00083e80(-(int)(short)_DAT_1f8000f2);
      iVar4 = func_0x00083f50(-(int)(short)_DAT_1f8000f2);
      iVar3 = (iVar3 * iVar2 >> 0xc) * _DAT_800a3f90 * 5 >> 0x10;
      iVar2 = (iVar4 * iVar2 >> 0xc) * _DAT_800a3f90 * 5 >> 0x10;
      local_30 = (local_30 - iVar3) / 0x280;
      local_28 = (local_28 - iVar3) / 0x280;
      local_20 = (local_20 - iVar3) / 0x280;
      local_2c = (local_2c - iVar2) / 0x280;
      local_24 = (local_24 - iVar2) / 0x280;
      local_1c = (local_1c - iVar2) / 0x280;
      *(undefined1 *)(param_1 + 6) = 0;
      func_0x001170a8(param_1,&local_30,&local_28,&local_20);
      return;
    }
    _DAT_800a3f90 = 0x3c00;
    _DAT_800a3f94 = 0x1c7;
  }
  else {
    _DAT_800a3f90 = 0x5000;
    *(undefined4 *)(param_1 + 0xc) = _DAT_800ecfa4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

