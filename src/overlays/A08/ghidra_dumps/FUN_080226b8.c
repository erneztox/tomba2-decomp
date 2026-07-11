// FUN_080226b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080226b8(int param_1)

{
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  
  local_10 = *(undefined2 *)(param_1 + 0x2e);
  local_e = *(undefined2 *)(param_1 + 0x32);
  local_c = *(undefined2 *)(param_1 + 0x36);
  func_0x000318a0(&local_10,0x800a1cd4,param_1 + 0x54);
  _DAT_1f800090 = 0;
  func_0x00027768(0x80144c10,0,0xfffffff6,*(undefined1 *)(param_1 + 0x60));
  return;
}

