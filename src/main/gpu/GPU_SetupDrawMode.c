/**
 * @brief Sets up GPU draw mode: primitive->sub_type=2, encodes tpage, sets draw params
 * @note Original: func_80081D78 at 0x80081D78
 */
// GPU_SetupDrawMode



#include "tomba.h"
void GPU_SetupDrawMode(int param_1,s16 *param_2)

{
  s32 uVar1;
  
  param_1->sub_type = 2;
  uVar1 = GPU_EncodeTPage((int)*param_2,(int)param_2->flags);
  *(s32 *)(param_1 + 4) = uVar1;
  *(s32 *)(param_1 + 8) = 0;
  return;
}
