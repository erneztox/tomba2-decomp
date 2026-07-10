// FUN_000040bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000040bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = _DAT_800bf544;
  func_0x00083de0(_DAT_800bf544);
  func_0x00083c30(_DAT_800ed8c8 + param_1 * 4,iVar1,param_3,param_4,param_5);
  _DAT_800bf544 = iVar1 + 0xc;
  return;
}

