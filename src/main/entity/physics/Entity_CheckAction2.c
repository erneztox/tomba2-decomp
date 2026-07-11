/**
 * @brief Entity action check variant 2: tests _DAT_800e7e84/85 + entity flags
 * @note Original: func_8005308C at 0x8005308C
 */
// Entity_CheckAction2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 FUN_8005308c(void)

{
  if ((_DAT_800e7e84 & 0xff) != 1) {
    return 0;
  }
  if (1 < g_CollisionType) {
    if (g_CameraMode2 != '\0') {
      _DAT_1f800166 = 0;
      _DAT_1f800190 = 0;
      g_State230 = 1;
      g_ActionState = 0;
      return 1;
    }
    if ((_DAT_800e7e84 & 0xffff00) != 0x20200) {
      g_State230 = DAT_800e7e84;
      return 0;
    }
  }
  if (g_CameraMode2 == '\0') {
    FUN_80054198(&g_CollisionEntity);
  }
  g_ActionState = 0;
  g_State230 = 1;
  _DAT_1f800190 = 0;
  _DAT_1f800166 = 0;
  return 1;
}
