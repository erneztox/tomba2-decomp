
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006e0f0(int param_1)

{
  FUN_8006d2ac();
  FUN_8006d960(param_1,param_1 + 8);
  FUN_8006d654(param_1);
  FUN_8006da54(param_1,param_1 + 8);
  FUN_8006c80c(param_1);
  if ((*(char *)(param_1 + 0x76) == '\0') && (DAT_800e7ffa == '\0')) {
    FUN_8006dcf4(param_1);
  }
  FUN_8006d02c(param_1);
  if (*(char *)(param_1 + 0x77) == '\0') {
    FUN_8006e010(param_1);
  }
  _DAT_1f800114 = _DAT_1f800114 - (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34));
  return;
}

