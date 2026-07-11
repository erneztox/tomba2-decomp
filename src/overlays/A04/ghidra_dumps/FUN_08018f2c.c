// FUN_08018f2c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00112018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018f2c(int param_1)

{
  int iVar1;
  short sVar2;
  
  func_0x0006d2ac();
  func_0x0006d960(param_1,param_1 + 8);
  func_0x0006d654(param_1);
  func_0x0006da54(param_1,param_1 + 8);
  if (-0x1932 < (short)_DAT_1f8000e2) {
    _DAT_1f8000e2 = 0xe6ce;
  }
  if ((*(char *)(param_1 + 0x76) == '\0') && (DAT_800e7ffa == '\0')) {
    sVar2 = 0;
    if (0x30d4 < _DAT_800e7eb6) {
      sVar2 = (short)((int)_DAT_800e7eb6 - 0x30d4U >> 1);
    }
    if ((int)(short)_DAT_1f8000e2 < -(sVar2 + 8000)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = (_DAT_1f8000d4 >> 0x10) - (uint)_DAT_1f8000e2;
    if (0x14 < (iVar1 + 10U & 0xffff)) {
      _DAT_1f8000d4 = _DAT_1f8000d4 - (iVar1 * 0x10000 >> 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1f8000d4 = CONCAT22(_DAT_1f8000e2,_DAT_1f8000d4);
    *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 2;
  }
  func_0x0006d02c(param_1);
  _DAT_1f800114 = _DAT_1f800114 - (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34));
  return;
}

