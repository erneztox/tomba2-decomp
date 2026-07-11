/**
 * @brief Submits entity draw data via GPU_SpriteDrawMain with data table lookup
 * @note Original: func_800262D8 at 0x800262D8
 */
// Entity_SubmitDraw



#include "tomba.h"
void Entity_SubmitDraw(int param_1,s32 param_2,s32 param_3,int param_4)

{
  GPU_SpriteDrawMain(param_2,*(s32 *)((int)&PTR_DAT_80017334 + ((param_4 << 0x10) >> 0xe)),
               param_1->sprite_data,param_3);
  return;
}
