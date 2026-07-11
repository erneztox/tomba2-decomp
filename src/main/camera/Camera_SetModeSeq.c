/**
 * @brief Camera mode sequence: calls init, set params, and commit in order
 * @note Original: func_8006E3B0 at 0x8006E3B0
 */
// Camera_SetModeSeq



void Camera_SetModeSeq(s32 param_1,s32 param_2)

{
  Camera_SetFOV();
  Camera_SetRoll(param_1,param_2);
  Camera_Commit(param_1);
  return;
}
