/**
 * @brief Entity dash state: entity[0x4A] += 0x360, applies velocity to position
 * @note Original: func_8005706C at 0x8005706C
 */
// Entity_State_Dash



#include "tomba.h"
void Entity_State_Dash(int param_1,uint param_2)

{
  s16 sVar1;
  uint uVar2;
  
  sVar1 = param_1->velocity_y + 0x360;
  param_1->velocity_y = sVar1;
  if (sVar1 < 0) {
    param_1->pos_y_fixed = param_1->pos_y_fixed + sVar1 * 0x100;
  }
  else {
    if ((param_1->entity_flags & 0x40) == 0) {
      *(u8 *)(param_1 + 0x178) = 0;
      Entity_SetupBossUI(param_1);
    }
    else {
      uVar2 = (uint)param_1->anim_id;
      if (((uVar2 - 0x14 < 2) || (uVar2 == 0x62)) || (uVar2 == 0x12)) {
        Entity_LoadAnimIfChanged(param_1,0xca,6);
        *(u8 *)(param_1 + 0x178) = 0;
      }
    }
    param_1->state_flag145 = 2;
    param_1->sub_action = param_1->sub_action + '\x01';
    if ((param_2 & 2) == 0) {
      param_1->state_flag144 = 1;
    }
  }
  return;
}
