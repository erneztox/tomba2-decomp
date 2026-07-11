/**
 * @brief BIOS data copy: copies data from DAT_8009c0e4 to BIOS struct+0x9C8
 * @note Original: func_8009C18C at 0x8009C18C
 */
// BIOS_CopyData



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BIOS_CopyData(void)

{
  int iVar1;
  code *pcVar2;
  s32 unaff_retaddr;
  
  _DAT_80105f48 = unaff_retaddr;
  BIOS_Syscall0();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar1 = *(int *)(iVar1 + 0x16c);
  pcVar2 = (code *)&DAT_8009c0e4;
  do {
    *(s32 *)(iVar1 + 0x9c8) = *(s32 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    iVar1 = iVar1 + 4;
  } while (pcVar2 != BIOS_SetupEvent);
  BIOS_CallA0_2();
  return;
}
