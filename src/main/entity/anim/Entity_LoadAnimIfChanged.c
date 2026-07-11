/**
 * @brief Loads entity animation data only when entity->anim_id animation ID has changed
 * @note Original: func_80054D14 at 0x80054D14
 */
// Entity_LoadAnimIfChanged



#include "tomba.h"
s32 FUN_80054d14(int param_1,uint param_2,s16 param_3)

{
  s32 uVar1;
  
  if ((uint)param_1->anim_id == (param_2 & 0xff)) {
    uVar1 = 0;
  }
  else {
    param_1->anim_id = (char)param_2;
    FUN_80054790(param_1,param_2);
    if (param_3 == 0) {
      FUN_80077c40(param_1,&PTR_DAT_80017fe8,param_2);
      uVar1 = 1;
    }
    else {
      FUN_80077cfc(param_1,&PTR_DAT_80017fe8,param_2);
      uVar1 = 1;
    }
  }
  return uVar1;
}
