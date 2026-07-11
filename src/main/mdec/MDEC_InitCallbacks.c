/**
 * @brief MDEC callback table init: sets function ptrs at 0x800ABE50/54/58
 * @note Original: func_80089160 at 0x80089160
 */
// MDEC_InitCallbacks



void FUN_80089160(void)

{
  DAT_800abe50 = FUN_80089194;
  DAT_800abe54 = &LAB_800895e8;
  DAT_800abe58 = FUN_800892a4;
  return;
}
