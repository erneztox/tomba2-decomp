/**
 * @brief Entity angle to target: calc atan2 from entity pos to target pos
 * @note Original: func_80052720 at 0x80052720
 */
// Entity_AngleToTarget



#include "tomba.h"
void FUN_80052720(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = FUN_800782b0(param_1 + 0x2c,(int)*(short *)(param_1 + 100),(int)param_1->target_angle
                      );
  sVar1 = FUN_800776f8((int)sVar1,(int)param_1->rot_y,0x18);
  param_1->rot_y = sVar1;
  iVar2 = FUN_80083f50((int)sVar1);
  sVar1 = param_1->anim_counter;
  iVar3 = FUN_80083e80((int)param_1->rot_y);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar2 * sVar1 >> 4);
  param_1->scale_y = param_1->scale_y - (iVar3 * param_1->anim_counter >> 4);
  return;
}
