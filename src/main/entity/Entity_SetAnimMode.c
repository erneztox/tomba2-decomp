/**
 * @brief Sets entity animation mode (0=normal, non-0=alternate) with different calls
 * @note Original: func_80041718 at 0x80041718
 */
// Entity_SetAnimMode



#include "tomba.h"
s32 Entity_SetAnimMode(int param_1,s32 param_2,s16 param_3)

{
  param_1->anim_id = (char)param_2;
  param_1->sub_state2 = 0;
  if (param_3 == 0) {
    Entity_LoadAnimData3(param_1,*(s32 *)(param_1 + 0x7c),param_2);
  }
  else {
    Entity_LoadAnimDataEx(param_1,*(s32 *)(param_1 + 0x7c),param_2);
  }
  return 1;
}
