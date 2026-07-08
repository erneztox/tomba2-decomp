
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8001d2a8(undefined1 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_20 [2];
  
  local_20[0] = DAT_80010058;
  FUN_80052010(2);
  DAT_801fe147 = (byte)param_4 & 1;
  DAT_800be0e4 = *(undefined1 *)((int)local_20 + (param_4 >> 1 & 3U));
  _DAT_801fe134 = param_2;
  _DAT_801fe138 = param_3;
  DAT_801fe146 = param_1;
  FUN_80051f14(2,FUN_8001cfc8);
  return;
}

