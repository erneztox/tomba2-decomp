/**
 * @brief BIOS copy: copies data from DAT_8009c2a0 to BIOS struct+0x70, calls finish functions
 * @note Original: func_8009C230 at 0x8009C230
 */
// BIOS_CopyToEvent



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8009c230(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  
  _DAT_80105f58 = unaff_retaddr;
  FUN_80080890();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar1 = iVar1->script_data;
  puVar2 = &DAT_8009c2a0;
  do {
    *(undefined4 *)(iVar1 + 0x70) = *puVar2;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (puVar2 != (undefined4 *)0x8009c2ac);
  FUN_800858f0();
  FUN_800808a0();
  return;
}
