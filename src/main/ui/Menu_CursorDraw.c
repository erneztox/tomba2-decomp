/**
 * @brief Menu cursor drawer: draws cursor sprite at entity[0x1F] position
 * @note Original: func_8003A290 at 0x8003A290
 */
// Menu_CursorDraw



#include "tomba.h"
void Menu_CursorDraw(int param_1,s16 *param_2)

{
  u8 bVar1;
  u16 uVar2;
  s16 sVar3;
  int iVar4;
  
  bVar1 = *(u8 *)(param_2 + 0x1f);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      if (*(s8*)((int)param_2 + 0x3f) != '\0') {
        return;
      }
      param_1->behavior_state = param_1->behavior_state + '\x01';
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(u8 *)(param_2 + 0x1f) = 1;
    iVar4 = Entity_DebugText(param_1,param_2);
    param_2->counter1 = 0;
    param_2->render_flags = (s16)((iVar4 << 4) / 0x18);
    uVar2 = Math_Random();
    param_2->counter2 = (uVar2 & 0xf) - 0xc0;
    uVar2 = Math_Random();
    param_2->state = (uVar2 & 0x3f) << 6;
  }
  *param_2 = param_2->counter1 >> 4;
  param_2->counter1 = param_2->counter1 + param_2->render_flags;
  param_2->flags = param_2->flags + (param_2->counter2 >> 4);
  param_2->counter2 = param_2->counter2 + 0x10;
  param_2->state = param_2->state + 0x80;
  if (-1 < param_2->flags) {
    sVar3 = Entity_DebugText(param_1,param_2);
    *param_2 = sVar3;
    param_2->state = 0;
    *(s8*)(param_2 + 0x1f) = (char)param_2[0x1f] + '\x01';
  }
  return;
}
