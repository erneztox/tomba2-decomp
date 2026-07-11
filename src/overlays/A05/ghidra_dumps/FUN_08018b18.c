// FUN_08018b18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018b18(int param_1)

{
  short sVar1;
  
  func_0x0006d934(param_1,param_1 + 0x38);
  func_0x0006d950(param_1,param_1 + 0x38);
  if (*(char *)(param_1 + 0x76) == '\0') {
    func_0x0006dad8(param_1);
    func_0x0006def0(param_1);
    sVar1 = 0x447e;
    if ((_DAT_1f8000da < 0x447f) || (sVar1 = 0x4c14, 0x4c13 < _DAT_1f8000da)) {
      _DAT_1f8000da = sVar1;
    }
  }
  func_0x0006d02c(param_1);
  return;
}

