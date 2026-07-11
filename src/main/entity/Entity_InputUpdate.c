#include "overlay.h"
/**
 * @brief Entity input updater: g_InputTimer--, clears input flags
 * @note Original: func_80059D28 at 0x80059D28
 */
// Entity_InputUpdate



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Entity_InputUpdate(void)

{
  if (g_InputTimer != '\0') {
    g_InputTimer = g_InputTimer + -1;
    _g_InputState = _g_InputState & 0xfff;
    _g_PadState = _g_PadState & 0xfff;
  }
  DAT_800e7ff7 = 0;
  DAT_800e7ff9 = 0;
  DAT_800e7ffa = 0;
  DAT_800e7ffb = 0;
  g_ActionMode = 0;
  DAT_1f800247 = DAT_1f800247 + '\x01';
  if (DAT_800bf841 != '\0') goto LAB_80059e40;
  if (g_GameState == GAMESTATE_3) {
    Overlay_80109024(&g_CollisionEntity);
  }
  else if (g_GameState < 4) {
    if (g_GameState == GAMESTATE_2) {
      Overlay_8010f63c(&g_CollisionEntity);
    }
    else {
LAB_80059e30:
      Entity_InputProcess(&g_CollisionEntity);
    }
  }
  else if (g_GameState == GAMESTATE_7) {
    Overlay_80112220(&g_CollisionEntity);
  }
  else {
    if (g_GameState != 0x14) goto LAB_80059e30;
    Overlay_8010f654(&g_CollisionEntity);
  }
  g_State230 = 0;
LAB_80059e40:
  _g_PlayerPosX = _g_CameraTargetX;
  _g_PlayerPosY = _g_CameraTargetY;
  _g_PlayerPosZ = _g_CameraTargetZ;
  _DAT_1f80016a = _DAT_800e7ed8;
  _DAT_1f800168 = _g_EntityAngle;
  if ((DAT_800bf9c3 & 0x80) != 0) {
    g_ActionState = 1;
  }
  if ((g_CurrentOverlay == '\0') && (DAT_800e8000 != '\0')) {
    DAT_800e8000 = DAT_800e8000 + -1;
  }
  Math_Random();
  return;
}
