/**
 * @brief Inits entity state from globals: sets sprite flags entity->sprite_flags from DAT_800bf881
 * @note Original: func_800682C4 at 0x800682C4
 */
// Entity_InitFromGlobals



#include "tomba.h"
void FUN_800682c4(int param_1,int param_2)

{
  byte bVar1;
  
  param_1->sprite_cmd = DAT_800bf88c;
  param_1->behavior_type = DAT_800bf88c;
  param_1->sprite_param1 = DAT_800bf88d;
  param_1->sprite_param3 = DAT_800bf88f;
  param_1->sprite_param2 = DAT_800bf88e;
  bVar1 = DAT_800bf881;
  param_1->game_flags = DAT_800bf881;
  if ((bVar1 & 8) != 0) {
    param_1->sprite_flags = 0x42;
  }
  if ((param_1->game_flags & 0x30) != 0) {
    param_1->sprite_flags = param_1->sprite_flags | 0x12;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  FUN_80067da8(param_1);
  FUN_80067ef4(param_1);
  if ((param_2 == 0) && (FUN_80067fe4(param_1), DAT_800bf9e5 == '\x06')) {
    func_0x8011740c(param_1,2);
  }
  return;
}
