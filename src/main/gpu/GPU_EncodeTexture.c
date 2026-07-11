/**
 * @brief GPU texture page encoder: builds TSB from CLUT coords + texpage settings
 * @note Original: func_8008238C at 0x8008238C
 */
// GPU_EncodeTexture



#include "tomba.h"
uint GPU_EncodeTexture(u8 *param_1)

{
  uint uVar1;
  
  if (param_1 == (u8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)(param_1->kind >> 3) << 0xf | (uint)(*param_1 >> 3) << 10 | 0xe2000000 |
            ((int)(-(int)*(s16 *)(param_1 + 6) & 0xffU) >> 3) << 5 |
            (int)(-(int)*(s16 *)(param_1 + 4) & 0xffU) >> 3;
  }
  return uVar1;
}
