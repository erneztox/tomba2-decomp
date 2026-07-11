/**
 * @brief Menu cursor mover: entity[0x1F] state, updates position
 * @note Original: func_8003A470 at 0x8003A470
 */
// Menu_CursorMove



#include "tomba.h"
void Menu_CursorMove(int param_1,s16 *param_2)

{
  u8 bVar1;
  s16 sVar2;
  u16 uVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *(u8 *)(param_2 + 0x1f);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sVar2 = param_2->counter1;
        param_2->flags = param_2->flags + (param_2->counter2 >> 4);
        param_2->counter1 = sVar2 + param_2[0x1c];
        *param_2 = (s16)(sVar2 + param_2[0x1c]) >> 4;
        param_2->counter2 = param_2->counter2 + 0x20;
        param_2->state = param_2->state + 0xc;
        if (param_2->flags < 0xf0) {
          return;
        }
        *(s8*)(param_2 + 0x1f) = (char)param_2[0x1f] + '\x01';
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      if (*(s8*)((int)param_2 + 0x3f) != '\0') {
        return;
      }
      param_1->state = STATE_FINISH;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(u8 *)(param_2 + 0x1f) = 1;
    param_2->counter2 = -0x180;
  }
  *(s8*)(param_2 + 0x1f) = (char)param_2[0x1f] + '\x01';
  uVar3 = Math_Random();
  param_2->counter2 = (uVar3 & 0x1f) - 0xc0;
  param_2->render_flags = 6;
  param_2->counter1 = *param_2 << 4;
  iVar4 = Entity_DebugText(param_1,param_2);
  iVar5 = (int)param_2->render_flags;
  if (iVar5 == 0) {
    trap(0x1c00);
  }
  if ((iVar5 == -1) && (iVar4 << 4 == -0x80000000)) {
    trap(0x1800);
  }
  param_2[0x1c] = (s16)((iVar4 << 4) / iVar5);
  return;
}
