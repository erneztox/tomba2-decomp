
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800518fc(int param_1)

{
  _DAT_1f800000 = (int)*(short *)(param_1 + 0xb8);
  _DAT_1f800004 = 0;
  _DAT_1f80000c = 0;
  _DAT_1f800014 = 0;
  _DAT_1f800018 = 0;
  _DAT_1f80001c = 0;
  _DAT_1f800008 = (int)*(short *)(param_1 + 0xba);
  _DAT_1f800010 = (int)*(short *)(param_1 + 0xbc);
  FUN_80085480(param_1 + 0x54,&DAT_1f800020);
  FUN_80084110(&DAT_1f800020,0x1f800000,param_1 + 0x98);
  FUN_80084470(param_1 + 0x98,param_1 + 0x88,param_1 + 0xac);
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + (int)*(short *)(param_1 + 0x2e);
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + (int)*(short *)(param_1 + 0x32);
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + (int)*(short *)(param_1 + 0x36);
  FUN_80051128();
  return;
}

