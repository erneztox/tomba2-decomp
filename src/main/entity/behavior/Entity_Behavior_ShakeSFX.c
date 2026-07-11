/**
 * @brief Shake with sound: same as Shake but plays SFX 0x19 on start, resets parent flag
 * @note Original: func_8003FED8 at 0x8003FED8
 */
// Entity_Behavior_ShakeSFX



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_Behavior_ShakeSFX(u8 *param_1)

{
  s16 sVar1;
  u16 uVar2;
  
  if (param_1->action_state == '\0') {
    Audio_PlaySoundEffect(0x19,0,0);
    *param_1 = 1;
    param_1->timer1 = 0x10;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if (param_1->action_state == '\x01') {
    sVar1 = param_1->timer1;
    param_1->timer1 = sVar1 + -1;
    if ((s16)(sVar1 + -1) == -1) {
      param_1->behavior_state = 0;
      param_1->action_state = 0;
    }
    *(u16 *)(param_1->sprite_ptr1 + 2) = (_g_FrameCounter2 & 1) * 6;
    uVar2 = Math_Random();
    **(s16 **)(param_1 + 0xc0) = ((uVar2 & 3) - 2) * 6;
  }
  if (param_1->flag_5E == '\x02') {
    *(u8 *)(param_1->parent + 0x5e) = 0;
  }
  return;
}
