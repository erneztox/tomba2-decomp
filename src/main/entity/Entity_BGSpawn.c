/**
 * @brief Entity background spawner: allocs background, sets pos + callback
 * @note Original: func_800537B8 at 0x800537B8
 */
// Entity_BGSpawn



#include "tomba.h"
int FUN_800537b8(int param_1,int param_2,u8 param_3)

{
  s32 *puVar1;
  u8 uVar2;
  s16 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = FUN_8007ab20();
  iVar6 = 0;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = param_1->behavior_flags;
    iVar4->rot_x = 0;
    iVar4->anim_id = uVar2;
    uVar3 = param_1->rot_y;
    iVar4->rot_z = 0;
    iVar4->callback = FUN_80068fbc;
    iVar4->rot_y = uVar3;
    uVar2 = param_1->collision_dir;
    iVar4->kind = 0;
    iVar4->sub_type = param_3;
    iVar4->flag_5E = 0;
    iVar4->collision_dir = uVar2;
    iVar4->render_flags = param_2->render_flags;
    iVar4->counter2 = param_2->counter2;
    iVar4->counter1 = param_2->counter1;
    param_2->counter2 = 0;
    iVar4->draw_y = param_2->draw_y;
    iVar4->sprite_flags = param_2->sprite_flags;
    *(u8 *)(iVar4 + 0x18) = *(u8 *)(param_2 + 0x18);
    *(u8 *)(iVar4 + 0x19) = *(u8 *)(param_2 + 0x19);
    *(u8 *)(iVar4 + 0x1a) = *(u8 *)(param_2 + 0x1a);
    iVar4->sprite_data = param_2->sprite_data;
    iVar5 = iVar4;
    if (iVar4->counter2 != '\0') {
      do {
        puVar1 = param_2->sprite_ptr1;
        param_2 = param_2 + 4;
        iVar6 = iVar6 + 1;
        iVar5->sprite_ptr1 = *puVar1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < (int)(uint)iVar4->counter2);
    }
  }
  return iVar4;
}
