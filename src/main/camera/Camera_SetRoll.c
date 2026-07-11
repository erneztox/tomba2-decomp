/**
 * @brief Sets camera roll angle from 4-u8 data
 * @note Original: func_8006D950 at 0x8006D950
 */
// Camera_SetRoll



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Camera_SetRoll(s32 param_1,int param_2)

{
  _g_CameraY = *(s32 *)(param_2 + 4);
  return;
}
