/**
 * @brief Menu save executor: entity->behavior_state=1, writes/reads save data
 * @note Original: func_8003A790 at 0x8003A790
 */
// Menu_SaveExec



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Menu_SaveExec(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = param_1->behavior_state;
  if (bVar1 == 1) {
    iVar4 = 0;
    param_1->behavior_state = 2;
    param_1->timer1 = 0x3c;
    iVar3 = param_1;
    if (param_1->counter1 != '\0') {
      do {
        *(u8 *)(iVar3->sprite_ptr1 + 0x3e) = 0;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < (int)(uint)param_1->counter1);
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      iVar4 = 0;
      iVar3 = param_1;
      if (param_1->counter1 != '\0') {
        do {
          Menu_CursorDraw(param_1,iVar3->sprite_ptr1);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar4 < (int)(uint)param_1->counter1);
      }
      iVar3 = (int)_DAT_801003f8;
      sVar2 = param_1->pos_z + -0x10;
      param_1->pos_z = sVar2;
      if (iVar3 + 8 <= (int)sVar2) {
        return;
      }
      param_1->pos_z = _DAT_801003f8 + 8;
      param_1->flag_5E = 1;
      return;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return;
      }
      iVar4 = 0;
      iVar3 = param_1;
      if (param_1->counter1 == '\0') {
        return;
      }
      do {
        Menu_SlotDraw(param_1,iVar3->sprite_ptr1);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < (int)(uint)param_1->counter1);
      return;
    }
  }
  sVar2 = param_1->timer1 + -1;
  param_1->timer1 = sVar2;
  if (sVar2 == -1) {
    iVar4 = 0;
    iVar3 = param_1;
    if (param_1->counter1 != '\0') {
      do {
        *(u8 *)(iVar3->sprite_ptr1 + 0x3e) = 0;
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
        Menu_AnimIcon(param_1,iVar3->sprite_ptr1);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < (int)(uint)param_1->counter1);
    }
  }
  return;
}
