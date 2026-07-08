
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8001c8bc(uint param_1)

{
  undefined1 local_10 [8];
  
  local_10[0] = (undefined1)param_1;
  FUN_80019038(0xe,local_10,0);
  if ((param_1 & 0x100) != 0) {
    if ((param_1 & 0x20) != 0) {
      _DAT_80039ed8 = 0;
      FUN_8001c108();
      return;
    }
    _DAT_80039ed8 = 1;
    FUN_80019454(FUN_8001c24c);
    FUN_80019024(0x8001c140);
  }
  FUN_80019038(0x1b,0,0);
  return;
}

