/**
 * @brief Branches script execution: if entity[0x72]=0 calls title, else calls 0x80042354
 * @note Original: func_800423FC at 0x800423FC
 */
// Entity_ScriptBranch



#include "tomba.h"
void Entity_ScriptBranch(int param_1)

{
  if (param_1->event_id == 0) {
    Game_ReturnToTitle();
  }
  else {
    Entity_PlaySFX_FadeOut(*(u8 *)(param_1 + 0x72),*(u8 *)(param_1 + 0x74));
  }
  return;
}
