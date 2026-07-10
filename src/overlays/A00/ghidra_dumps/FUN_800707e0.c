// FUN_800707e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_800707e0(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = _DAT_1f800214;
  bVar1 = *(char *)(_DAT_1f800214 + 0x70) == '\0';
  if (bVar1) {
    FUN_80041718(_DAT_1f800214,2,2);
    *(undefined1 *)(iVar2 + 0x70) = 1;
  }
  return bVar1;
}

