/**
 * @brief Menu dialog handler: entity->behavior_state state 0->1->2, manages text
 * @note Original: func_8003ABE4 at 0x8003ABE4
 */
// Menu_Dialog



#include "tomba.h"
void FUN_8003abe4(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = param_1->behavior_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      iVar4 = 0;
      iVar3 = param_1;
      if (param_1->counter1 != '\0') {
        do {
          FUN_8003a470(param_1,iVar3->sprite_ptr1);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar4 < (int)(uint)param_1->counter1);
      }
      param_1->pos_z = param_1->pos_z + -4;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->behavior_state = 1;
    param_1->timer1 = 0x28;
  }
  sVar2 = param_1->timer1 + -1;
  param_1->timer1 = sVar2;
  if (sVar2 == -1) {
    iVar4 = 0;
    iVar3 = param_1;
    if (param_1->counter1 != '\0') {
      do {
        *(undefined1 *)(iVar3->sprite_ptr1 + 0x3e) = 0;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < (int)(uint)param_1->counter1);
    }
    param_1->flag_5E = 2;
    param_1->behavior_state = param_1->behavior_state + '\x01';
  }
  else {
    iVar4 = 0;
    iVar3 = param_1;
    if (param_1->counter1 != '\0') {
      do {
        FUN_8003a3e8(param_1,iVar3->sprite_ptr1);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < (int)(uint)param_1->counter1);
    }
  }
  return;
}
