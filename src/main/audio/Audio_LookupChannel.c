/**
 * @brief Audio channel lookup: DAT_80105d0c = channel ID, indexes struct table
 * @note Original: func_80095A9C at 0x80095A9C
 */
// Audio_LookupChannel



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int FUN_80095a9c(uint param_1,s16 *param_2,s16 *param_3)

{
  int iVar1;
  
  _DAT_80105d0c = (s16)param_1;
  iVar1 = *(int *)(&g_AudioChannels + (param_1 & 0xff) * 4) + ((int)(param_1 & 0xff00) >> 8) * 0xb0;
  *param_2 = iVar1->rot_z;
  *param_3 = iVar1->target_rot_y;
  return (int)_DAT_80105d0c;
}
