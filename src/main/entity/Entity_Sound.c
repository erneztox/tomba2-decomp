/**
 * @brief Entity sound player: checks entity[0x72], plays SFX based on type
 * @note Original: func_80042F70 at 0x80042F70
 */
// Entity_Sound



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80042f70(int param_1)

{
  short sVar1;
  char cVar2;
  int *piVar3;
  
  sVar1 = param_1->event_id;
  if (sVar1 == 1) {
    piVar3 = param_1->pos_y_fixed;
  }
  else {
    if ((sVar1 < 2) && (piVar3 = (int *)(param_1 + 0x2c), sVar1 == 0)) {
      sVar1 = *(short *)(param_1 + 0x32);
    }
    else {
      sVar1 = *(short *)(param_1 + 0x32);
      piVar3 = param_1->scale_y;
    }
    *(short *)(param_1 + 0x32) = sVar1 + 0x10;
  }
  if (param_1->sub_state == '\0') {
    if (*(short *)(param_1 + 0x76) == *(short *)((int)piVar3 + 2)) {
      return 1;
    }
    param_1->sub_state = 1;
  }
  else if (param_1->sub_state != '\x01') {
    return 0;
  }
  if ((int)*(short *)(param_1 + 0x76) - (int)*(short *)((int)piVar3 + 2) < 0) {
    *piVar3 = *piVar3 + *(short *)(param_1 + 100) * -0x100;
    if (-1 < (int)*(short *)(param_1 + 0x76) - (int)*(short *)((int)piVar3 + 2)) {
      *(undefined2 *)((int)piVar3 + 2) = *(undefined2 *)(param_1 + 0x76);
    }
  }
  else {
    *piVar3 = *piVar3 + *(short *)(param_1 + 100) * 0x100;
    if ((int)*(short *)(param_1 + 0x76) - (int)*(short *)((int)piVar3 + 2) < 1) {
      *(undefined2 *)((int)piVar3 + 2) = *(undefined2 *)(param_1 + 0x76);
    }
  }
  FUN_80041ac0(param_1);
  cVar2 = FUN_80049250(param_1,0,(int)param_1->event_param);
  param_1->collision_state = cVar2;
  if (cVar2 == '\x01') {
    FUN_80049674(param_1);
    param_1->angle_delta = _DAT_1f8001a2;
  }
  if (*(short *)(param_1 + 0x76) == *(short *)((int)piVar3 + 2)) {
    return 1;
  }
  FUN_80042ea4(param_1,param_1 + 0x68,(int)param_1->type_flags);
  return 0;
}
