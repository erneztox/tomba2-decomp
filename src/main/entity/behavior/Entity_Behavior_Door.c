/**
 * @brief Entity door behavior: entity->state=1, checks game state transition
 * @note Original: func_80026864 at 0x80026864
 */
// Entity_Behavior_Door



#include "tomba.h"
void FUN_80026864(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  
  if (g_EngineState != '\x02') {
    return;
  }
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    sVar2 = *(s16 *)(param_1 + 8) + 1;
    *(s16 *)(param_1 + 8) = sVar2;
    if (0xb < sVar2) {
      param_1->state = param_1->state + '\x01';
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      if (g_CurrentOverlay != '\x01') {
        return;
      }
      param_1->state = 1;
      *(s16 *)(param_1 + 8) = 0;
      return;
    }
    if (bVar1 == 2) {
      if ((g_CurrentOverlay == '\0') || (g_CurrentOverlay == '\x02')) {
        param_1->state = 3;
      }
      sVar2 = *(s16 *)(param_1 + 8);
      goto LAB_80026984;
    }
    if (bVar1 != 3) {
      return;
    }
    sVar2 = *(s16 *)(param_1 + 8);
    *(s16 *)(param_1 + 8) = sVar2 + -1;
    if (sVar2 == 1) {
      param_1->state = 0;
    }
  }
  sVar2 = *(s16 *)(param_1 + 8);
LAB_80026984:
  FUN_8007fcc8(0,0,0x140,(int)sVar2,1);
  FUN_8007fcc8(0,0xe0 - *(s16 *)(param_1 + 8),0x140,(int)*(s16 *)(param_1 + 8),1);
  return;
}
