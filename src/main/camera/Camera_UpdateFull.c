/**
 * @brief Full camera update: runs init, set position, target, FOV, and roll
 * @note Original: func_8006E360 at 0x8006E360
 */
// Camera_UpdateFull



void Camera_UpdateFull(s32 param_1,s32 param_2)

{
  Camera_ModeMain();
  Camera_SetFOV(param_1,param_2);
  Camera_SetRoll(param_1,param_2);
  Camera_Commit(param_1);
  return;
}
