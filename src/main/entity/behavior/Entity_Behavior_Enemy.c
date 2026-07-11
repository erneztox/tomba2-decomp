/**
 * @brief Entity enemy behavior: calls Entity_PhysicsInit, sets type-specific state
 * @note Original: func_8006B390 at 0x8006B390
 */
// Entity_Behavior_Enemy



#include "tomba.h"
s32 Entity_Behavior_Enemy(u8 *param_1)

{
  u8 bVar1;
  int iVar2;
  s32 uVar3;
  
  iVar2 = Entity_PhysicsInit(param_1,0,0);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    bVar1 = param_1->kind;
    if (bVar1 == 4) {
      if (param_1->move_mode != '\0') {
        return 1;
      }
    }
    else if ((3 < bVar1) && (bVar1 < 7)) {
      Audio_PlaySoundEffect(0x2c,0,0);
      Audio_PlaySoundEffect(0x2d,0,0);
      Entity_SpawnChildSequence(*(s32 *)(param_1->sprite_ptr1 + 0x40),param_1 + 0x2c,0x400,0x15);
      Audio_PlaySoundEffect(0xc,0,0);
    }
    if (0 < param_1->anim_counter) {
      param_1->anim_counter = 0;
    }
    Audio_PlaySoundEffect(0x2f,0,0);
    Entity_SpawnSpecial(2,param_1 + 0x2c,param_1->flag_5E,param_1 + 0x68);
    *param_1 = 2;
    param_1->move_mode = 2;
    Entity_SetState4();
    uVar3 = 1;
  }
  return uVar3;
}
