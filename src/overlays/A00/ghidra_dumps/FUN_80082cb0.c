// FUN_80082cb0

uint FUN_80082cb0(uint param_1)

{
  *DAT_800a5aa8 = param_1 | 0x10000000;
  return *DAT_800a5aa4 & 0xffffff;
}

