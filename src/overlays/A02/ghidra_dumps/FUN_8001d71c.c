// FUN_8001d71c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8001d71c(short param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    FUN_8001cf2c();
  }
  else {
    iVar1 = param_1 * 6;
    iVar2 = _DAT_1f800220 + (uint)*(ushort *)(&DAT_8009d112 + iVar1) * 8;
    if (((&DAT_8009d111)[iVar1] == '\0') && (DAT_800fb162 == '\x01')) {
      DAT_800be0e4 = 2;
    }
    else {
      FUN_8001d2a8((&DAT_8009d110)[iVar1],iVar2,iVar2 + (uint)*(ushort *)(&DAT_8009d114 + iVar1) * 8
                   ,(&DAT_8009d111)[iVar1]);
    }
  }
  return;
}

