// FUN_8009c0f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8009c0f8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  
  _DAT_80105f48 = unaff_retaddr;
  FUN_80080890();
  iVar1 = (*(code *)&SUB_000000b0)();
  _DAT_0000dffc =
       (undefined4 *)
       (*(int *)(*(int *)(iVar1 + 0x18) + 0x70) * 0x10000 +
        (*(uint *)(*(int *)(iVar1 + 0x18) + 0x74) & 0xffff) + 0x28);
  puVar2 = &DAT_8009c0d0;
  do {
    *_DAT_0000dffc = *puVar2;
    puVar2 = puVar2 + 1;
    _DAT_0000dffc = _DAT_0000dffc + 1;
  } while (puVar2 != &DAT_8009c0e4);
  FUN_800858f0();
  return;
}

