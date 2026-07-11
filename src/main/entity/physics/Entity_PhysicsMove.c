/**
 * @brief Entity physics move: entity->collision_state=0, checks collision + angle
 * @note Original: func_80056C00 at 0x80056C00
 */
// Entity_PhysicsMove



#include "tomba.h"
void Entity_PhysicsMove(int param_1,int param_2)

{
  s16 sVar1;
  s16 uVar2;
  int iVar3;
  
  if (param_1->collision_state == '\0' && param_1->state_flag145 == '\0') {
    if ((g_TimerFlag == '\0') && (DAT_800bf848 != '\0')) {
      Entity_ResetActionState(param_1,0);
    }
    else {
      sVar1 = param_1->angle_offset + 0x800;
      param_1->angle_offset = sVar1;
      if (0x3e00 < sVar1) {
        param_1->angle_offset = 0x3e00;
      }
      if (((0x1dff < param_1->angle_offset) &&
          (*(u8 *)(param_1 + 0x148) = 1, param_2 == 0)) &&
         (param_1->state_flag146 != '\x04')) {
        Entity_ResetActionState(param_1,0);
        if ((param_1->entity_flags & 0x40) == 0) {
          uVar2 = param_1->angle_offset;
        }
        else {
          iVar3 = (int)param_1->angle_offset;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 3;
          }
          uVar2 = (s16)(iVar3 >> 2);
        }
        param_1->velocity_y = uVar2;
        param_1->angle_offset = 0;
      }
      param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->angle_offset * 0x100;
    }
  }
  else {
    if (0x1400 < param_1->angle_offset) {
      Entity_StateDispatch();
    }
    param_1->angle_offset = 0;
    *(u8 *)(param_1 + 0x148) = 0;
  }
  return;
}
