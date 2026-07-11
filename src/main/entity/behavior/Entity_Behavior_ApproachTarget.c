/**
 * @brief Entity approaches target position: state 0 calc angle, state 1 approach
 * @note Original: func_80044B38 at 0x80044B38
 */
// Entity_Behavior_ApproachTarget



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_Behavior_ApproachTarget(int param_1)

{
  s16 uVar1;
  int iVar2;
  
  if (param_1->sub_state == '\0') {
    uVar1 = Math_CalcAngle2D(&DAT_800e7eac,(int)param_1->pos_y,
                         (int)param_1->pos_z);
    param_1->event_param = uVar1;
    _DAT_800e7ed8 = 0;
    param_1->sub_state = param_1->sub_state + '\x01';
  }
  else {
    if (param_1->sub_state != '\x01') {
      return 0;
    }
    iVar2 = Entity_ApproachAngle(&g_CollisionEntity,(int)param_1->event_param,
                         (int)param_1->event_id);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}
