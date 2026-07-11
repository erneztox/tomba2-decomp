/**
 * @brief Menu save/load handler: entity->behavior_state state, manages save data
 * @note Original: func_8003A9A0 at 0x8003A9A0
 */
// Menu_SaveLoad



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8003a9a0(int param_1)

{
  s16 sVar1;
  int iVar2;
  int iVar3;
  
  switch(param_1->behavior_state) {
  case 0:
    iVar3 = 0;
    iVar2 = param_1;
    if (param_1->counter1 != '\0') {
      do {
        FUN_8003a290(param_1,iVar2->sprite_ptr1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < (int)(uint)param_1->counter1);
    }
    iVar2 = (int)_DAT_801003f8;
    sVar1 = param_1->pos_z + -0x10;
    param_1->pos_z = sVar1;
    if ((int)sVar1 < iVar2 + 8) {
      param_1->pos_z = _DAT_801003f8 + 8;
      param_1->flag_5E = 1;
    }
    break;
  case 1:
    iVar3 = 0;
    param_1->timer1 = 0x28;
    param_1->behavior_state = param_1->behavior_state + '\x01';
    iVar2 = param_1;
    if (param_1->counter1 != '\0') {
      do {
        *(u8 *)(iVar2->sprite_ptr1 + 0x3e) = 0;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < (int)(uint)param_1->counter1);
    }
  case 2:
    sVar1 = param_1->timer1 + -1;
    param_1->timer1 = sVar1;
    if (sVar1 == -1) {
      iVar3 = 0;
      iVar2 = param_1;
      if (param_1->counter1 != '\0') {
        do {
          *(u8 *)(iVar2->sprite_ptr1 + 0x3e) = 0;
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar3 < (int)(uint)param_1->counter1);
      }
      FUN_80040aa4((int)param_1->draw_x,2);
      DAT_800ed06c = DAT_800ed06c + '\x01';
      param_1->behavior_state = param_1->behavior_state + '\x01';
    }
    else {
      iVar3 = 0;
      iVar2 = param_1;
      if (param_1->counter1 != '\0') {
        do {
          FUN_8003a3e8(param_1,iVar2->sprite_ptr1);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar3 < (int)(uint)param_1->counter1);
      }
    }
    break;
  case 3:
  case 4:
    param_1->behavior_state = param_1->behavior_state + '\x01';
  case 5:
    iVar3 = 0;
    param_1->flag_5E = 2;
    iVar2 = param_1;
    if (param_1->counter1 != '\0') {
      do {
        FUN_8003a470(param_1,iVar2->sprite_ptr1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < (int)(uint)param_1->counter1);
    }
    param_1->pos_z = param_1->pos_z + -4;
  }
  return;
}
