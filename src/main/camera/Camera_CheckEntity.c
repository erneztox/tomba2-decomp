/**
 * @brief Camera entity check: tests DAT_800e7e82 flag, updates target entity pointer
 * @note Original: func_8006E1E4 at 0x8006E1E4
 */
// Camera_CheckEntity



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Camera_CheckEntity(void)

{
  if (DAT_800e7e82 == '\x01') {
    g_CameraEntity = 0;
    _DAT_800e8014 = _DAT_800e7eb0;
    return;
  }
  _DAT_800e8014 = _DAT_800e7eb0;
  g_CameraEntity = DAT_800e806f;
  return;
}
