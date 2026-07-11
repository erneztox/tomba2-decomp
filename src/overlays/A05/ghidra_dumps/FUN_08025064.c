// FUN_08025064

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08025064(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  _DAT_1f8000c4 = 0;
  _DAT_1f8000c0 = 0;
  if (*(char *)(param_1 + 0xbf) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0xc0);
  _DAT_1f8000c2 = -0x32;
  func_0x00051b34(_DAT_800e7f44 + 0x18,param_1 + 0x98);
  func_0x00051d90(iVar4,&DAT_1f8000c0,&DAT_1f8000c8);
  _DAT_1f8000c8 = (ushort)(*(int *)(iVar4 + 0x2c) + (int)(short)_DAT_1f8000c8 >> 1);
  _DAT_1f8000ca = (short)(*(int *)(iVar4 + 0x30) + (int)_DAT_1f8000ca + (int)_DAT_1f8000c2 >> 1);
  _DAT_1f8000cc = (short)(*(int *)(iVar4 + 0x34) + (int)_DAT_1f8000cc >> 1);
  if (_DAT_1f8000ca < *(short *)(param_1 + 0x32)) {
    *(short *)(param_1 + 0x32) = _DAT_1f8000ca;
  }
  iVar3 = ((uint)_DAT_1f8000c8 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000;
  iVar2 = iVar3 >> 0x10;
  iVar4 = iVar2;
  if (iVar2 < 0) {
    iVar4 = -iVar2;
  }
  if (iVar4 + 8 < 0x29) {
    *(ushort *)(param_1 + 0x2e) = _DAT_1f8000c8;
  }
  else {
    iVar3 = iVar3 >> 0x12;
    if (iVar4 < 0xc9) {
      iVar4 = iVar3;
      if (iVar3 < 0) {
        iVar4 = -iVar3;
      }
      if ((iVar4 < 0x14) && (iVar3 = -0x14, 0 < iVar2)) {
        iVar3 = 0x14;
      }
      *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar1 = -0xc0;
    if (iVar2 < 1) {
      sVar1 = 0xc0;
    }
    *(ushort *)(param_1 + 0x2e) = _DAT_1f8000c8 + sVar1;
    func_0x00076d68(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

