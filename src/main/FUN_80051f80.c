
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80051f80(undefined2 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = _DAT_1f800138;
  _DAT_1f800138[1] = param_1;
  *puVar1 = 1;
  FUN_80080880(0xff000000);
  return;
}

