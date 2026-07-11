/**
 * @brief Entity enemy behavior variant 2: entity->anim_id state, sets g_State27c flag
 * @note Original: func_80069BEC at 0x80069BEC
 */
// Entity_Behavior_Enemy2



#include "tomba.h"
void Entity_Behavior_Enemy2(int param_1,int param_2)

{
  s16 uVar1;
  u8 bVar2;
  
  bVar2 = param_1->anim_id >> 1 & 3;
  if (bVar2 == 2) {
    g_State27c = 1;
    uVar1 = 0xe40;
  }
  else {
    if (bVar2 < 3) {
      g_State27c = 0;
      param_1->type_flags = 0;
      goto LAB_80069c7c;
    }
    if (bVar2 != 3) goto LAB_80069c7c;
    g_State27c = 2;
    uVar1 = 0xc00;
    if (param_1->kind == '\x01') {
      uVar1 = 0xc10;
    }
  }
  param_1->type_flags = uVar1;
LAB_80069c7c:
  param_1->anim_id = param_1->anim_id & 7;
  param_1->rot_z = param_1->type_flags;
  Audio_PlaySoundEffect(0x22,0,0);
  Entity_SetAnimSpeed(param_1);
  Entity_CopyParentPos(param_1);
  if (param_2 == 0) {
    Entity_SpawnTrail(param_1,param_1->kind - 1);
  }
  return;
}
