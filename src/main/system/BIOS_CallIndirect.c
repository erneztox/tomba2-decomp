/**
 * @brief BIOS indirect call: calls function ptr at DAT_80105f30
 * @note Original: func_8009BF20 at 0x8009BF20
 */
// BIOS_CallIndirect



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BIOS_CallIndirect(void)

{
                    /* WARNING: Could not recover jumptable at 0x8009bf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_80105f30)();
  return;
}
