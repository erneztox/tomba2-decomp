/**
 * @brief Camera mode sequence: calls init, set params, and commit in order
 * @note Original: func_8006E3B0 at 0x8006E3B0
 */
// Camera_SetModeSeq



void FUN_8006e3b0(s32 param_1,s32 param_2)

{
  FUN_8006d934();
  FUN_8006d950(param_1,param_2);
  FUN_8006d02c(param_1);
  return;
}
