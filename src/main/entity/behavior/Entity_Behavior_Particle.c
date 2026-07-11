/**
 * @brief Particle effect entity: random velocity, deceleration, timed life
 * @note Original: func_80027254 at 0x80027254
 */
// Entity_Behavior_Particle



#include "tomba.h"
void FUN_80027254(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  u16 uVar3;
  s16 sVar4;
  void *puVar5;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    *(u16 *)(param_1 + 0xc) = *(u16 *)(param_1 + 0xc) - (*(u16 *)(param_1 + 0xc) >> 7);
    *(s16 *)(param_1 + 0x1e) = *(s16 *)(param_1 + 0x1e) + *(s16 *)(param_1 + 0x10);
    *(s16 *)(param_1 + 0x26) = *(s16 *)(param_1 + 0x26) + *(s16 *)(param_1 + 0x14);
    *(s16 *)(param_1 + 0x28) = *(s16 *)(param_1 + 0x28) + *(s16 *)(param_1 + 0x16);
    *(s16 *)(param_1 + 0x2a) = *(s16 *)(param_1 + 0x2a) + *(s16 *)(param_1 + 10);
    sVar2 = *(s16 *)(param_1 + 0x12);
    param_1->pos_x = param_1->pos_x + *(s16 *)(param_1 + 0x1a);
    sVar4 = *(s16 *)(param_1 + 0x12) + *(s16 *)(param_1 + 0x18);
    *(s16 *)(param_1 + 0x12) = sVar4;
    param_1->prev = param_1->prev + sVar2 * 0x100;
    if ((param_1->pos_y + 0x800 < (int)sVar4) ||
       (sVar2 = *(s16 *)(param_1 + 8), *(s16 *)(param_1 + 8) = sVar2 + -1, sVar2 == 1)) {
      param_1->state = STATE_DEAD;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1->state = 1;
      sVar2 = (param_1->kind & 1) + 2;
      *(u8 *)(param_1 + 0xe) = *(u8 *)(param_1 + 0x33);
      *(s16 *)(param_1 + 0x14) = sVar2;
      *(s16 *)(param_1 + 0x10) = sVar2;
      uVar3 = FUN_8009a450();
      *(u16 *)(param_1 + 0x10) = *(s16 *)(param_1 + 0x10) + (uVar3 & 3);
      uVar3 = FUN_8009a450();
      *(u16 *)(param_1 + 0x14) = *(s16 *)(param_1 + 0x14) + (uVar3 & 3);
      if ((param_1->flags & 1) == 0) {
        *(s16 *)(param_1 + 8) = 0x30;
        if ((param_1->flags & 2) == 0) {
          puVar5 = &DAT_8009d53c;
        }
        else {
          puVar5 = &DAT_8009d54c;
        }
        *(s16 *)(param_1 + 0x10) =
             *(s16 *)(param_1 + 0x10) * 4 * *(s16 *)(puVar5 + (param_1->kind & 7) * 2);
        *(s16 *)(param_1 + 0x14) =
             *(s16 *)(param_1 + 0x14) * 4 *
             *(s16 *)(puVar5 + (param_1->kind + 6 & 7) * 2);
        uVar3 = FUN_8009a450();
        *(u16 *)(param_1 + 0x12) = (((uVar3 & 3) + 1) * -8 + -0x20) * 0x100;
        *(s16 *)(param_1 + 0x18) = 0x300;
      }
      else {
        *(s16 *)(param_1 + 8) = 0x18;
        *(s16 *)(param_1 + 0x12) = 0xe000;
        *(s16 *)(param_1 + 0x18) = 0x400;
        if ((param_1->flags & 2) == 0) {
          puVar5 = &DAT_8009d53c;
        }
        else {
          puVar5 = &DAT_8009d54c;
        }
        *(s16 *)(param_1 + 0x10) =
             *(s16 *)(param_1 + 0x10) * 2 * *(s16 *)(puVar5 + (param_1->kind & 7) * 2);
        *(s16 *)(param_1 + 0x14) =
             *(s16 *)(param_1 + 0x14) * 2 *
             *(s16 *)(puVar5 + (param_1->kind + 6 & 7) * 2);
      }
      sVar2 = (*(u16 *)(param_1 + 0x10) | *(u16 *)(param_1 + 0x14)) * 0x14;
      *(s16 *)(param_1 + 0x1a) = sVar2;
      *(s16 *)(param_1 + 10) = sVar2;
      *(s16 *)(param_1 + 0x16) = sVar2;
      *(s16 *)(param_1 + 0x16) =
           sVar2 * *(s16 *)(&DAT_8009d55c + (uint)param_1->kind * 2);
      *(s16 *)(param_1 + 10) =
           *(s16 *)(param_1 + 10) * *(s16 *)(&DAT_8009d56c + (uint)param_1->kind * 2);
      sVar2 = *(s16 *)(&DAT_8009d57c + (uint)param_1->kind * 2);
      *(s16 *)(param_1 + 0x28) = 0;
      *(s16 *)(param_1 + 0x2a) = 0;
      param_1->pos_x = 0;
      param_1->pos_y = -*(s16 *)(param_1 + 0x12);
      *(s16 *)(param_1 + 0x1a) = *(s16 *)(param_1 + 0x1a) * sVar2;
    }
  }
  else if ((bVar1 != 2) && (bVar1 == 3)) {
    FUN_8007b2ac(param_1);
  }
  return;
}
