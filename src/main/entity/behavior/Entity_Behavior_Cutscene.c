/**
 * @brief Entity cutscene behavior: entity->state=1, advances timer, triggers event
 * @note Original: func_80026148 at 0x80026148
 */
// Entity_Behavior_Cutscene



#include "tomba.h"
undefined4 FUN_80026148(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    DAT_800bf87f = DAT_800bf87f + '\x01';
    sVar2 = *(short *)(param_1 + 0x10);
    *(short *)(param_1 + 0x10) = sVar2 + -1;
    if (sVar2 != 1) {
      return 0;
    }
    *(undefined2 *)(param_1 + 0x10) = 0x3c;
    param_1->state = param_1->state + '\x01';
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return 0;
      }
      sVar2 = *(short *)(param_1 + 0x10);
      *(short *)(param_1 + 0x10) = sVar2 + -1;
      if (sVar2 != 1) {
        return 0;
      }
      param_1->sprite_flags = param_1->sprite_flags & 0xfe;
      return 1;
    }
    if (bVar1 != 0) {
      return 0;
    }
    param_1->state = 1;
    FUN_8004ed94(0xb,0x40);
    *(undefined2 *)(param_1 + 0x10) = 0x10;
  }
  return 0;
}
