// FUN_80051614

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80051614(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_800e7f40 + param_3 * 4);
  if (param_4 == 0) {
    FUN_80085480(param_1 + 0x54,0x1f800000);
  }
  else {
    _DAT_1f800040 = (int)*(short *)(param_1 + 0xb8);
    _DAT_1f800044 = 0;
    _DAT_1f80004c = 0;
    _DAT_1f800054 = 0;
    _DAT_1f800058 = 0;
    _DAT_1f80005c = 0;
    _DAT_1f800048 = (int)*(short *)(param_1 + 0xba);
    _DAT_1f800050 = (int)*(short *)(param_1 + 0xbc);
    FUN_80085480(param_1 + 0x54,&DAT_1f800020);
    FUN_80084110(&DAT_1f800020,&DAT_1f800040,0x1f800000);
  }
  FUN_80084110(iVar1 + 0x18,0x1f800000,param_1 + 0x98);
  FUN_80084220(param_2,param_1 + 0xac);
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + *(int *)(iVar1 + 0x2c);
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + *(int *)(iVar1 + 0x30);
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + *(int *)(iVar1 + 0x34);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0xac);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0xb0);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xb4);
  if (param_4 == 0) {
    FUN_80051300(param_1);
  }
  else {
    FUN_80051128(param_1);
  }
  return;
}

