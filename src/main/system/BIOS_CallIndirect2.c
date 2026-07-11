/**
 * @brief BIOS indirect call 2: calls function ptr at DAT_80105f34
 * @note Original: func_8009BF34 at 0x8009BF34
 */
// BIOS_CallIndirect2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BIOS_CallIndirect2(void)

{
                    /* WARNING: Could not recover jumptable at 0x8009bf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_80105f34)();
  return;
}
