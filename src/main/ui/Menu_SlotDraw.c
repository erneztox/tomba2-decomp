/**
 * @brief Menu slot drawer: switch on entity[0x1F], draws save slots
 * @note Original: func_8003A5E4 at 0x8003A5E4
 */
// Menu_SlotDraw



#include "tomba.h"
void Menu_SlotDraw(int param_1,s16 *param_2)

{
  s8 cVar1;
  s16 sVar2;
  s16 sVar3;
  int iVar4;
  
  switch((char)param_2[0x1f]) {
  case '\0':
    iVar4 = (int)*param_2;
    *(s8*)(param_2 + 0x1f) = (char)param_2[0x1f] + '\x01';
    sVar3 = *param_2 >> 0xf;
    if (iVar4 < 0) {
      sVar3 = ((s16)((ulonglong)((longlong)iVar4 * 0x55555556) >> 0x20) - sVar3) + -5;
    }
    else {
      sVar3 = ((s16)((ulonglong)((longlong)iVar4 * 0x55555556) >> 0x20) - sVar3) + 5;
    }
    param_2->counter1 = sVar3;
    param_2->counter2 = -0x100;
  case '\x01':
    sVar3 = param_2->counter2;
    *param_2 = *param_2 + param_2->counter1;
    sVar2 = param_2->counter2;
    param_2->counter2 = sVar2 + 0x20;
    param_2->flags = param_2->flags + (sVar3 >> 4);
    if (0x100 < (s16)(sVar2 + 0x20)) {
      cVar1 = (char)param_2[0x1f];
      sVar3 = -0xc0;
LAB_8003a6c4:
      param_2->counter2 = sVar3;
LAB_8003a6cc:
      *(s8*)(param_2 + 0x1f) = cVar1 + '\x01';
      return;
    }
    break;
  case '\x02':
    sVar3 = param_2->counter2;
    *param_2 = *param_2 + param_2->counter1;
    sVar2 = param_2->counter2;
    param_2->counter2 = sVar2 + 0x18;
    param_2->flags = param_2->flags + (sVar3 >> 4);
    if ((s16)(sVar2 + 0x18) < 0xc1) {
      return;
    }
    cVar1 = (char)param_2[0x1f];
    sVar3 = -0x80;
    goto LAB_8003a6c4;
  case '\x03':
    sVar3 = param_2->counter2;
    *param_2 = *param_2 + param_2->counter1;
    sVar2 = param_2->counter2;
    param_2->counter2 = sVar2 + 0x10;
    param_2->flags = param_2->flags + (sVar3 >> 4);
    if ((s16)(sVar2 + 0x10) < 0x81) {
      return;
    }
    cVar1 = (char)param_2[0x1f];
    goto LAB_8003a6cc;
  case '\x04':
    if (*(s8*)((int)param_2 + 0x3f) == '\0') {
      param_1->state = STATE_FINISH;
    }
  }
  return;
}
