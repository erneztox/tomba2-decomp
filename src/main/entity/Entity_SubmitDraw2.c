/**
 * @brief Submits entity draw data via GPU_SpriteRender with data table lookup
 * @note Original: func_80026320 at 0x80026320
 */
// Entity_SubmitDraw2



#include "tomba.h"
void Entity_SubmitDraw2(int param_1,s32 param_2,s32 param_3,int param_4)

{
  GPU_SpriteRender(param_2,*(s32 *)((int)&PTR_DAT_80017334 + ((param_4 << 0x10) >> 0xe)),
               param_1->sprite_data,param_3);
  return;
}
