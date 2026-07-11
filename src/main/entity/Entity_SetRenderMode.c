/**
 * @brief Entity render mode setter: sets entity->render_flags flags based on param (0x80/0x20 or 0x10/0x40)
 * @note Original: func_80052144 at 0x80052144
 */
// Entity_SetRenderMode



#include "tomba.h"
s16 Entity_SetRenderMode(u8 param_1,s16 param_2)

{
  s16 uVar1;
  s16 uVar2;
  
  if (param_2 == 0) {
    uVar1 = 0x80;
    uVar2 = 0x20;
  }
  else {
    uVar1 = 0x10;
    uVar2 = 0x40;
  }
  if ((0x57 < param_1) && (uVar1 = 0, 0xa8 < param_1)) {
    uVar1 = uVar2;
  }
  return uVar1;
}
