/**
 * @brief Sets CD event callback function at 0x800ABFBC
 * @note Original: func_80089B84 at 0x80089B84
 */
// CD_SetEventCallback



undefined4 FUN_80089b84(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_800abfbc;
  DAT_800abfbc = param_1;
  return uVar1;
}
