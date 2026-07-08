
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800498c8(int param_1)

{
  int iVar1;
  
  while( true ) {
    FUN_8004798c(param_1);
    FUN_80049968(DAT_1f8001fe);
    iVar1 = FUN_80047cbc();
    if (iVar1 == 0) {
      return 0;
    }
    if ((*_DAT_1f8001e0 & 0x4000) == 0) break;
    *(char *)(param_1 + 0x2a) = (char)*_DAT_1f8001e0;
    if ((*_DAT_1f8001e0 & 0x4000) == 0) {
      return 1;
    }
  }
  return 1;
}

