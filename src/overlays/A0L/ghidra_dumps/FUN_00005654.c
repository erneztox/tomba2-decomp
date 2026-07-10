// FUN_00005654

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00005654(int param_1)

{
  undefined2 uVar1;
  
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x80;
  func_0x00041718(param_1,3,0);
  uVar1 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
  *(undefined2 *)(param_1 + 0x56) = uVar1;
  _DAT_1f80024c = param_1;
  return;
}

