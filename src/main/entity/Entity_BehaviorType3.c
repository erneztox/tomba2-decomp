/**
 * @brief Entity behavior type variant 3: entity->state=1, type dispatch
 * @note Original: func_8002B8F4 at 0x8002B8F4
 */
// Entity_BehaviorType3



#include "tomba.h"
void Entity_BehaviorType3(int param_1)

{
  u8 bVar1;
  s8 cVar2;
  s16 sVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      Entity_Dealloc(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(void **)(param_1 + 0x40) = &DAT_800a2030;
    *(void ***)(param_1 + 0x50) = &PTR_DAT_800a2018;
    *(s32 *)(param_1 + 0x48) = 0;
    *(s32 *)(param_1 + 0x4c) = 0;
    param_1->state = 1;
    param_1->sub_action = 0;
    param_1->rot_z = param_1->pos_x;
    param_1->target_rot_y = param_1->pos_y + -0x78;
    param_1->draw_y = *(s16 *)(param_1 + 0x30);
  }
  param_1->scale_y = param_1->anim_data;
  param_1->sprite_data = *(int *)(param_1 + 0x40);
  if ((param_1->anim_data == 0) && (*(int *)(param_1 + 0x40) == 0)) {
    param_1->state = STATE_FINISH;
    return;
  }
  if (param_1->sub_type - 0x14 < 2) {
    cVar2 = param_1->sub_action + '\x01';
    param_1->sub_action = cVar2;
    if (cVar2 == '\a') {
      iVar5 = 0;
      if (6 < DAT_800e7e7c) {
        iVar4 = Entity_AllocByPoolId(0,6,1);
        iVar5 = 0;
        if (iVar4 != 0) {
          if (param_1 != -0x2c) {
            iVar4->pos_x = param_1->pos_x;
            iVar4->pos_y = param_1->pos_y;
            *(s16 *)(iVar4 + 0x30) = *(s16 *)(param_1 + 0x30);
          }
          *(s16 *)(iVar4 + 0x32) = 0xffce;
          Entity_InitBehavior(iVar4,3);
          iVar5 = iVar4;
        }
      }
      if (iVar5 != 0) {
        iVar5->alloc_flags = iVar5->alloc_flags | 0x80;
      }
    }
    if (param_1->sub_type == '\x15') {
      sVar3 = param_1->target_rot_y + -0x10;
    }
    else {
      if (param_1->sub_type != '\x14') goto LAB_8002bab0;
      sVar3 = param_1->target_rot_y + -10;
    }
    param_1->target_rot_y = sVar3;
  }
LAB_8002bab0:
  iVar5 = Entity_CheckVisibility(param_1);
  if (iVar5 == 0) {
    Entity_AdvanceAnimByte(param_1);
    Entity_AdvanceAnimScript(param_1);
  }
  return;
}
