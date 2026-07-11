/**
 * @brief Inits entity state from globals: sets sprite flags entity->sprite_flags from g_EntityFlags
 * @note Original: func_800682C4 at 0x800682C4
 */
// Entity_InitFromGlobals



#include "tomba.h"
#include "overlay.h"
void FUN_800682c4(int param_1,int param_2)

{
  u8 bVar1;
  
  param_1->sprite_cmd = g_SpriteParam1;
  param_1->behavior_type = g_SpriteParam1;
  param_1->sprite_param1 = g_SpriteParam2;
  param_1->sprite_param3 = g_SpriteParam4;
  param_1->sprite_param2 = g_SpriteParam3;
  bVar1 = g_EntityFlags;
  param_1->game_flags = g_EntityFlags;
  if ((bVar1 & 8) != 0) {
    param_1->sprite_flags = 0x42;
  }
  if ((param_1->game_flags & 0x30) != 0) {
    param_1->sprite_flags = param_1->sprite_flags | 0x12;
  }
  *(s32 *)(param_1 + 0x70) = 0;
  *(s32 *)(param_1 + 0x74) = 0;
  FUN_80067da8(param_1);
  FUN_80067ef4(param_1);
  if ((param_2 == 0) && (FUN_80067fe4(param_1), DAT_800bf9e5 == '\x06')) {
    Overlay_8011740c(param_1,2);
  }
  return;
}
