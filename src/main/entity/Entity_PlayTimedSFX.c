/**
 * @brief Timed SFX: plays sound at intervals using frame counter mask from entity[0x38] data
 * @note Original: func_80042EA4 at 0x80042EA4
 */
// Entity_PlayTimedSFX



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_PlayTimedSFX(int param_1,u16 *param_2,uint param_3)

{
  u16 uVar1;
  s8 cVar2;
  
  cVar2 = (char)(param_3 >> 8);
  uVar1 = *param_2;
  if ((int)(s16)*param_2 != 0) {
    if ((uVar1 & 0x3f) == 0) {
      if ((uVar1 & 0x80) != 0) {
        if (*(s8*)(param_1->anim_data + 4) == '\0') {
          *param_2 = uVar1 & 0xffbf;
        }
        else if ((uVar1 & 0x40) == 0) {
          *param_2 = uVar1 | 0x40;
          Audio_PlaySoundEffect(param_3 & 0xff,0,(int)cVar2);
          return 1;
        }
      }
    }
    else if (((uint)_g_FrameCounter2 & (int)(s16)*param_2) == 0) {
      Audio_PlaySoundEffect(param_3 & 0xff,0,(int)cVar2);
    }
  }
  return 0;
}
