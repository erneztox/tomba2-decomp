/**
 * @brief Sets CD event callback function at 0x800ABFBC
 * @note Original: func_80089B84 at 0x80089B84
 */
// CD_SetEventCallback



s32 CD_SetEventCallback(s32 param_1)

{
  s32 uVar1;
  
  uVar1 = DAT_800abfbc;
  DAT_800abfbc = param_1;
  return uVar1;
}
