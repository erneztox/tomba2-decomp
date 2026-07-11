/**
 * @brief Entity spawn in background: AllocBackground, sets position + callbacks
 * @note Original: func_800534B0 at 0x800534B0
 */
// Entity_SpawnBackground



#include "tomba.h"
void Entity_SpawnBackground(int param_1,u8 param_2,int param_3,int param_4)

{
  u8 uVar1;
  int iVar2;
  
  iVar2 = Entity_AllocBackground03();
  if (iVar2 != 0) {
    iVar2->pos_y = param_1->pos_y;
    *(s16 *)(iVar2 + 0x32) = *(s16 *)(param_1 + 0x32);
    iVar2->pos_z = param_1->pos_z;
    uVar1 = param_1->behavior_flags;
    iVar2->rot_x = 0;
    iVar2->rot_z = 0;
    iVar2->anim_id = uVar1;
    if (param_3 == 0) {
      iVar2->rot_y = param_1->rot_y;
    }
    else {
      iVar2->rot_y = param_1->rot_y + -0x800;
    }
    *(void **)(iVar2 + 0x1c) = (&PTR_FUN_800a4480)[param_4 + -1];
    uVar1 = param_1->collision_dir;
    iVar2->kind = (char)param_4;
    iVar2->sub_type = param_2;
    iVar2->collision_dir = uVar1;
    iVar2->flag_5E = param_1->gte_flags;
    if (param_4 - 4U < 3) {
      DAT_1f800231 = DAT_1f800231 + '\x01';
    }
    else if (param_4 == 0xb) {
      DAT_1f800251 = DAT_1f800251 + '\x01';
    }
  }
  return;
}
