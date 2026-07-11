/**
 * @brief Audio voice flags: extracts bit 0x8000 from params, stores in voice struct
 * @note Original: func_8008F2BC at 0x8008F2BC
 */
// Audio_SetVoiceFlags



#include "tomba.h"
void Audio_SetVoiceFlags(u16 *param_1,u16 *param_2,u16 *param_3)

{
  u16 uVar1;
  u16 uVar2;
  u16 uVar3;
  
  uVar3 = -(u16)(param_1->flags != 0) & 0x8000;
  if (param_1->flags != 0) {
    uVar3 = uVar3 | 0x4000;
  }
  if (param_1->flags != 0) {
    uVar3 = uVar3 | 0x20;
  }
  uVar1 = param_1->flags;
  uVar2 = param_1->flags;
  *param_2 = -(u16)(param_1->flags != 0) & 0x8000 | (*param_1 & 0x7f) << 8 | (param_1->flags & 0xf) << 4
             | param_1->flags & 0xf;
  *param_3 = uVar3 | (uVar2 & 0x7f) << 6 | uVar1 & 0x1f;
  return;
}
