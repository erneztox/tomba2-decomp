/**
 * @brief Sets camera world position from entity coordinates (x, y, z)
 * @note Original: func_8006CBA8 at 0x8006CBA8
 */
// Camera_SetPosition



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Camera_SetPosition(int param_1)

{
  _DAT_800e8042 = *(s16 *)(param_1 + 2);
  _DAT_800e8046 = *(s16 *)(param_1 + 6);
  _DAT_800e804a = *(s16 *)(param_1 + 10);
  return;
}
