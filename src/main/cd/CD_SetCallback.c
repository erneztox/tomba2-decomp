/**
 * @brief Sets CD event callback function pointer at 0x800ABE20
 * @note Original: func_800865F0 at 0x800865F0
 */
// CD_SetCallback



undefined4 FUN_800865f0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_800abe20;
  DAT_800abe20 = param_1;
  return uVar1;
}
