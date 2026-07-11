/**
 * @brief Entity behavior type variant 2: entity->state=1 state dispatch
 * @note Original: func_800308C0 at 0x800308C0
 */
// Entity_BehaviorType2



#include "tomba.h"
void Entity_BehaviorType2(int param_1)

{
  u8 bVar1;
  s16 uVar2;
  s8 cVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = param_1->state;
  iVar5 = param_1->parent;
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
    param_1->behavior_state = 4;
    param_1->state = 1;
    param_1->action_state = 0x10;
    param_1->pos_x = iVar5->pos_y;
    param_1->pos_y = *(s16 *)(iVar5 + 0x32);
    uVar2 = iVar5->pos_z;
    param_1->scale_y = param_1->anim_data;
    *(s16 *)(param_1 + 0x30) = uVar2;
  }
  cVar3 = param_1->behavior_state + -1;
  param_1->behavior_state = cVar3;
  if (cVar3 == '\0') {
    if ((6 < DAT_800e7e7c) && (iVar4 = Entity_AllocByPoolId(0,6,1), iVar4 != 0)) {
      if (param_1 != -0x2c) {
        iVar4->pos_x = param_1->pos_x;
        iVar4->pos_y = param_1->pos_y;
        *(s16 *)(iVar4 + 0x30) = *(s16 *)(param_1 + 0x30);
      }
      *(s16 *)(iVar4 + 0x32) = 0xffe2;
      Entity_InitBehavior(iVar4,0x34);
    }
    Entity_InitSpriteType2(iVar5);
  }
  param_1->scale_y = param_1->anim_data;
  if (param_1->anim_data == 0) {
    param_1->state = STATE_FINISH;
  }
  else {
    iVar5 = Entity_CheckVisibility(param_1);
    if (iVar5 != 0) {
      Entity_AdvanceAnimScript(param_1);
    }
  }
  return;
}
