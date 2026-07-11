/**
 * @brief Updates and draws entities in Pool 4 (camera/HUD), calls draw variants
 * @note Original: func_80025D98 at 0x80025D98
 */
// Engine_UpdatePool4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80025d98(void)

{
  u8 bVar1;
  
  if (((DAT_800ed065 != '\0') &&
      (((g_GameState != 5 || (2 < g_LevelId - 1)) && (g_GameState != 3)))) &&
     (((g_GameState != 0x14 && (g_CurrentOverlay != '\x01')) && ((g_EventInput & 4) == 0)))) {
    FUN_80025744(0x800ed058);
  }
  bVar1 = DAT_800ed061 & 3;
  if (bVar1 == 1) {
    if (((g_GameState != 5) || (2 < g_LevelId - 1)) &&
       ((g_GameState != 2 && ((g_GameState != 7 && (g_GameState != 0x14)))))) {
      if (DAT_800ed059 == '\0') goto LAB_80025fbc;
      goto LAB_80025eac;
    }
  }
  else if ((1 < bVar1) && (bVar1 == 3)) {
LAB_80025eac:
    FUN_80025934(0x800ed058,0,0);
  }
  if ((DAT_800ed059 == '\0') || (g_GameState == 3)) goto LAB_80025fbc;
  if (g_GameState < 4) {
    if (g_GameState == 2) {
      if ((g_ActionFlag == '\0') && (DAT_800ed060 == '\0')) {
        func_0x80113628(0x800ed058);
      }
      goto LAB_80025fbc;
    }
  }
  else {
    if (g_GameState == 7) {
      if ((g_ActionFlag == '\0') && (DAT_800ed060 == '\0')) {
        func_0x801140a0(0x800ed058);
      }
      goto LAB_80025fbc;
    }
    if (g_GameState == 0x14) goto LAB_80025fbc;
  }
  if ((((_DAT_800bf880 & 0x600) == 0) && ((_DAT_800bf880 & 0x100) == 0)) && (g_ActionFlag == '\0'))
  {
    FUN_80025b78(0x800ed058);
  }
LAB_80025fbc:
  if ((_g_CurrentEntity->normal_z == 6) && (_g_CurrentEntity->sprite_x != 0)) {
    if (g_GameState == 5) {
      func_0x801121ac();
    }
    else if (g_GameState == 0x14) {
      func_0x8010f8cc();
    }
  }
  return;
}
