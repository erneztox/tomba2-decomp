// FUN_8013600c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8013600c(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar5 = (uint)_DAT_1f8000f2;
  if (DAT_1f800137 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = thunk_EXT_FUN_80000400
                    (((int)_DAT_1f800160 / 0x280) * 0x10000 >> 0x10,
                     ((int)_DAT_1f800164 / 0x280) * 0x10000 >> 0x10);
  _DAT_8014c800 = uVar1 & 0xf;
  if (_DAT_8014c800 != 4) {
    if (_DAT_8014c800 < 5) {
      if ((_DAT_8014c800 < 3) && ((uVar1 & 0xf) != 0)) {
        if ((uVar5 & 0xfff) - 0x200 < 0xc01) {
          _DAT_800a3f90 = 0x2580;
          FUN_8013f130();
          return;
        }
        FUN_8013f118();
        return;
      }
      goto LAB_801361a8;
    }
    if (_DAT_8014c800 != 8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  _DAT_800a3f90 = 0x2d00;
  _DAT_800a3f94 = 0x155;
LAB_801361a8:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(DAT_1f800207) {
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_800a3f90 = 0x3200;
  _DAT_800a3f94 = 0x1c7;
  uVar5 = 0xfffffe39U - (int)(short)_DAT_1f8000f2 & 0xfff;
  iStack_38 = (int)_DAT_1f8000d2;
  iStack_34 = (int)_DAT_1f8000da;
  iVar2 = func_0x80083e80(uVar5);
  iStack_30 = iStack_38 + (iVar2 * _DAT_800a3f90 >> 0xc);
  iVar2 = func_0x80083f50(uVar5);
  uVar5 = _DAT_800a3f94 - (short)_DAT_1f8000f2 & 0xfff;
  iStack_2c = iStack_34 + (iVar2 * _DAT_800a3f90 >> 0xc);
  iVar2 = func_0x80083e80(uVar5);
  iStack_28 = iStack_38 + (iVar2 * _DAT_800a3f90 >> 0xc);
  iVar2 = func_0x80083f50(uVar5);
  iStack_24 = iStack_34 + (iVar2 * _DAT_800a3f90 >> 0xc);
  iVar2 = func_0x80083e80((int)_DAT_1f8000f0);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar3 = func_0x80083e80(-(int)(short)_DAT_1f8000f2);
  iVar4 = func_0x80083f50(-(int)(short)_DAT_1f8000f2);
  iVar3 = (iVar3 * iVar2 >> 0xc) * _DAT_800a3f90 * 5 >> 0x10;
  iVar2 = (iVar4 * iVar2 >> 0xc) * _DAT_800a3f90 * 5 >> 0x10;
  iStack_38 = (iStack_38 - iVar3) / 0x280;
  iStack_30 = (iStack_30 - iVar3) / 0x280;
  iStack_28 = (iStack_28 - iVar3) / 0x280;
  iStack_34 = (iStack_34 - iVar2) / 0x280;
  iStack_2c = (iStack_2c - iVar2) / 0x280;
  iStack_24 = (iStack_24 - iVar2) / 0x280;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_8013f4dc(param_1,&iStack_38,&iStack_30,&iStack_28);
  return;
}

