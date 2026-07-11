/**
 * @brief Entity type initializer: calls Entity_PhysicsInit, sets entity->type/[0x2B] state
 * @note Original: func_80069948 at 0x80069948
 */
// Entity_InitType



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_InitType(u8 *param_1)

{
  int iVar1;
  s32 uVar2;
  
  iVar1 = Entity_PhysicsInit(param_1,0,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    *param_1 = 2;
    param_1->move_mode = 2;
    if (iVar1 == 2) {
      _DAT_1f800200 = param_1->pos_y;
      _DAT_1f800208 = 1;
      _DAT_1f800202 = *(s16 *)(param_1 + 0x32);
      _DAT_1f800204 = param_1->pos_z;
      param_1->collision_state = 1;
      param_1->behavior_state = 2;
      param_1->action_state = 0;
      param_1->sub_action = 0;
      Audio_PlaySoundEffect(0xc,0,0);
      Entity_SpawnSpecial(1,param_1 + 0x2c,param_1->flag_5E,param_1 + 0x68);
      uVar2 = 2;
    }
    else {
      Audio_PlaySoundEffect(0xe,0,0);
      Entity_SpawnSpecial(2,param_1 + 0x2c,param_1->flag_5E,param_1 + 0x68);
      uVar2 = 1;
    }
  }
  return uVar2;
}
