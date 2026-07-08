
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006abf4(int param_1)

{
  *(undefined1 *)(param_1 + 0xb) = 0x10;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf58;
  FUN_80077b38(param_1,&PTR_DAT_80017334,0x36);
  return;
}

