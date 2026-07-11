/**
 * @brief Audio channel position variant 2: same pattern but simplified index
 * @note Original: func_80091F50 at 0x80091F50
 */
// Audio_SetChannelPos2



#include "tomba.h"
void FUN_80091f50(short param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_80104c30 + param_1 * 4);
  if (iVar1->gte_result == 1) {
    FUN_80095530((int)param_1,param_2,param_3,1);
  }
  else {
    iVar1->rot_z = param_2;
    iVar1->target_rot_y = param_3;
  }
  return;
}
