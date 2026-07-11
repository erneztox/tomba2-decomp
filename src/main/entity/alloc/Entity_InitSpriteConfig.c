/**
 * @brief Initializes sprite config: sets entity[0xB-0xD], loads anim data from table 0x36
 * @note Original: func_8006ABF4 at 0x8006ABF4
 */
// Entity_InitSpriteConfig



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_InitSpriteConfig(int param_1)

{
  param_1->render_flags = 0x10;
  param_1->sprite_flags = 0;
  param_1->draw_y = 0;
  param_1->sprite_data = _g_OT_Data;
  Entity_LoadAnimData(param_1,&PTR_DAT_80017334,0x36);
  return;
}
