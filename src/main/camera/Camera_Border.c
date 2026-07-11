/**
 * @brief Camera border check: switch on g_GameState, clamps camera Y
 * @note Original: func_8006C80C at 0x8006C80C
 */
// Camera_Border



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Camera_Border(void)

{
  switch(g_GameState) {
  case 1:
    if (_g_CameraZ < -0x279c) {
      _g_CameraZ = 0xd864;
      return;
    }
    break;
  case 4:
    if (g_LevelId == '\a') {
      if (_g_CameraTargetZ < 0x1a90) {
        if (-0x1c84 < _g_CameraZ) {
          _g_CameraZ = 0xe37c;
          return;
        }
        if (-0x1964 < _g_CameraZ) {
          _g_CameraZ = 0xe69c;
          return;
        }
      }
    }
    else if (-0x19c8 < _g_CameraZ) {
      _g_CameraZ = 0xe638;
      return;
    }
    break;
  case 6:
    if (DAT_1f800207 == '\x0e') {
      if (_g_CameraZ < -0x1c20) {
        _g_CameraZ = 0xe3e0;
        return;
      }
    }
    else if (_g_CameraZ < -0x23f0) {
      _g_CameraZ = 0xdc10;
      return;
    }
    break;
  case 10:
    if (_g_CameraZ < -0x870) {
      _g_CameraZ = 0xf790;
      return;
    }
    break;
  case 0xd:
    if (-0x578 < _g_CameraZ) {
      _g_CameraZ = -0x578;
    }
  }
  return;
}
