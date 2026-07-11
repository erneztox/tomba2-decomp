/**
 * @brief MDEC flag setter: DAT_800abef0 = 1 if zero
 * @note Original: func_80089788 at 0x80089788
 */
// MDEC_SetFlag



/* WARNING: Removing unreachable block (ram,0x800897c8) */

void FUN_80089788(void)

{
  if (DAT_800abef0 == 0) {
    DAT_800abef0 = 1;
  }
  return;
}
