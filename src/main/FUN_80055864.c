
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80055864(void)

{
  uint uVar1;
  
  if (DAT_1f800230 != '\0') {
    return 0;
  }
  uVar1 = (uint)((_DAT_800e7e68 & _DAT_1f800172) != 0) << 1;
  if ((_DAT_800e7e68 & _DAT_1f800174) != 0) {
    uVar1 = uVar1 | 1;
  }
  return uVar1;
}

