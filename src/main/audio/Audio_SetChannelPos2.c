/**
 * @brief Audio channel position variant 2: same pattern but simplified index
 * @note Original: func_80091F50 at 0x80091F50
 */
// Audio_SetChannelPos2



#include "tomba.h"
void FUN_80091f50(s16 param_1,s16 param_2,s16 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(&g_AudioChannels + param_1 * 4);
  if (iVar1->flags == 1) {
    FUN_80095530((int)param_1,param_2,param_3,1);
  }
  else {
    iVar1->flags = param_2;
    iVar1->flags = param_3;
  }
  return;
}
