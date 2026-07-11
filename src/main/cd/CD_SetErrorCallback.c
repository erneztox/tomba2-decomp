/**
 * @brief Sets CD error callback function at 0x800ABFC0
 * @note Original: func_80089B98 at 0x80089B98
 */
// CD_SetErrorCallback



s32 FUN_80089b98(s32 param_1)

{
  s32 uVar1;
  
  uVar1 = DAT_800abfc0;
  DAT_800abfc0 = param_1;
  return uVar1;
}
