
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80078894(uint param_1)

{
  return _DAT_800bfe50 & 1 << (param_1 & 0x1f);
}

