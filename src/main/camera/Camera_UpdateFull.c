/**
 * @brief Full camera update: runs init, set position, target, FOV, and roll
 * @note Original: func_8006E360 at 0x8006E360
 */
// Camera_UpdateFull



void FUN_8006e360(s32 param_1,s32 param_2)

{
  FUN_8006d654();
  FUN_8006d934(param_1,param_2);
  FUN_8006d950(param_1,param_2);
  FUN_8006d02c(param_1);
  return;
}
