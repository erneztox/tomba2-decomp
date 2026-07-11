/**
 * @brief Entity animation player: entity->state=1 state, calls advance + GTE compose
 * @note Original: func_80071A3C at 0x80071A3C
 */
// Entity_PlayAnimation



#include "tomba.h"
#include "overlay.h"
void Entity_PlayAnimation(int param_1)

{
  u8 bVar1;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    Entity_AnimPlayer(param_1);
    if (param_1->flags != '\0') {
      GTE_ComposeAndProject(param_1);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      Entity_InitPlayer(param_1);
      if ((DAT_800bfae1 == '\0') || (g_GameState != '\x04')) {
        if ((DAT_800bfae6 != '\0') && (g_GameState == '\a')) {
          Overlay_801178e4(param_1);
        }
      }
      else {
        Overlay_8011b79c(param_1);
      }
    }
  }
  else if ((bVar1 != 2) && (bVar1 == 3)) {
    Entity_Dealloc(param_1);
  }
  return;
}
