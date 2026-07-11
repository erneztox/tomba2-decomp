/**
 * @brief BIOS reset: zeros 0xB words at BIOS struct+0x594, calls BIOS_CallA0_2
 * @note Original: func_8009BF48 at 0x8009BF48
 */
// BIOS_ResetRegion



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BIOS_ResetRegion(void)

{
  int iVar1;
  int iVar2;
  s32 unaff_retaddr;
  
  _DAT_80105f28 = unaff_retaddr;
  BIOS_Syscall0();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar1 = *(int *)(iVar1 + 0x16c);
  iVar2 = 0xb;
  _DAT_80105f30 = iVar1 + 0x884;
  _DAT_80105f34 = iVar1 + 0x894;
  do {
    *(s32 *)(iVar1 + 0x594) = 0;
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  BIOS_CallA0_2();
  return;
}
