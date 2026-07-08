
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006e228(int param_1,undefined4 param_2)

{
  FUN_8006d960();
  FUN_8006da54(param_1,param_2);
  *(undefined2 *)(param_1 + 0xe) = _DAT_1f8000e2;
  if (*(char *)(param_1 + 0x76) == '\0') {
    FUN_8006dad8(param_1);
    FUN_8006def0(param_1);
  }
  FUN_8006d02c(param_1);
  return;
}

