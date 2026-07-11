/**
 * @brief Entity animation controller variant 2: frame advance
 * @note Original: func_80076904 at 0x80076904
 */
// Entity_AnimController2



#include "tomba.h"
void FUN_80076904(int param_1)

{
  s32 bVar1;
  u16 uVar2;
  u8 *pbVar3;
  u8 *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = *(uint *)((uint)**(u16 **)(param_1 + 0x38) * 4 + param_1->sprite_data);
  pbVar3 = (u8 *)(param_1->sprite_data + (uVar7 & 0xffffff));
  param_1->counter1 = (char)(uVar7 >> 0x18);
  if (((int)uVar7 >> 0x18 & 0x40U) == 0) {
    bVar1 = (param_1->counter1 & 0x80) != 0;
    if (bVar1) {
      uVar2 = (u16)((int)((uint)*pbVar3 << 0x18) >> 0x14);
      param_1->gte_input = uVar2;
      param_1->gte_input = uVar2 | pbVar3->flags >> 4;
      uVar2 = (u16)((int)((uint)pbVar3->flags << 0x1c) >> 0x14);
      *(u16 *)(param_1 + 0x8a) = uVar2;
      pbVar4 = pbVar3 + 3;
      *(u16 *)(param_1 + 0x8a) = uVar2 | pbVar3->kind;
      pbVar3 = pbVar3 + 4;
      uVar2 = (u16)((int)((uint)*pbVar4 << 0x18) >> 0x14);
      *(u16 *)(param_1 + 0x8c) = uVar2;
      *(u16 *)(param_1 + 0x8c) = uVar2 | *pbVar3 >> 4;
    }
    iVar5 = 0;
    param_1->counter1 = param_1->counter1 & 0x3f;
    iVar6 = param_1;
    if (param_1->counter2 != '\0') {
      do {
        if ((int)(uint)param_1->counter1 <= iVar5) {
          return;
        }
        if ((iVar5 + (uint)bVar1 & 1) == 0) {
          *(u16 *)(iVar6->sprite_ptr1 + 8) = (u16)*pbVar3 << 4;
          *(u16 *)(iVar6->sprite_ptr1 + 8) =
               *(u16 *)(iVar6->sprite_ptr1 + 8) | (u16)(pbVar3->flags >> 4);
          *(u16 *)(iVar6->sprite_ptr1 + 10) = (pbVar3->flags & 0xf) << 8;
          pbVar4 = pbVar3 + 3;
          *(u16 *)(iVar6->sprite_ptr1 + 10) =
               *(u16 *)(iVar6->sprite_ptr1 + 10) | (u16)pbVar3->kind;
          pbVar3 = pbVar3 + 4;
          *(u16 *)(iVar6->sprite_ptr1 + 0xc) = (u16)*pbVar4 << 4;
          *(u16 *)(iVar6->sprite_ptr1 + 0xc) =
               *(u16 *)(iVar6->sprite_ptr1 + 0xc) | (u16)(*pbVar3 >> 4);
        }
        else {
          *(u16 *)(iVar6->sprite_ptr1 + 8) = (*pbVar3 & 0xf) << 8;
          *(u16 *)(iVar6->sprite_ptr1 + 8) =
               *(u16 *)(iVar6->sprite_ptr1 + 8) | (u16)pbVar3->flags;
          *(u16 *)(iVar6->sprite_ptr1 + 10) = (u16)pbVar3->kind << 4;
          *(u16 *)(iVar6->sprite_ptr1 + 10) =
               *(u16 *)(iVar6->sprite_ptr1 + 10) | (u16)(pbVar3->sub_type >> 4);
          pbVar4 = pbVar3 + 4;
          *(u16 *)(iVar6->sprite_ptr1 + 0xc) = (pbVar3->sub_type & 0xf) << 8;
          pbVar3 = pbVar3 + 5;
          *(u16 *)(iVar6->sprite_ptr1 + 0xc) =
               *(u16 *)(iVar6->sprite_ptr1 + 0xc) | (u16)*pbVar4;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar5 < (int)(uint)param_1->counter2);
    }
  }
  else {
    iVar6 = 0;
    if (((int)uVar7 >> 0x18 & 0x80U) != 0) {
      uVar2 = (u16)((int)((uint)*pbVar3 << 0x18) >> 0x14);
      param_1->gte_input = uVar2;
      param_1->gte_input = uVar2 | pbVar3->flags >> 4;
      uVar2 = (u16)((int)((uint)pbVar3->flags << 0x1c) >> 0x14);
      *(u16 *)(param_1 + 0x8a) = uVar2;
      *(u16 *)(param_1 + 0x8a) = uVar2 | pbVar3->kind;
      pbVar4 = pbVar3 + 4;
      uVar2 = (u16)((int)((uint)pbVar3->sub_type << 0x18) >> 0x14);
      *(u16 *)(param_1 + 0x8c) = uVar2;
      pbVar3 = pbVar3 + 9;
      *(u16 *)(param_1 + 0x8c) = uVar2 | *pbVar4 >> 4;
    }
    param_1->counter1 = param_1->counter1 & 0x3f;
    iVar5 = param_1;
    if (param_1->counter2 != '\0') {
      do {
        bVar1 = (int)(uint)param_1->counter1 <= iVar6;
        iVar6 = iVar6 + 1;
        if (bVar1) {
          return;
        }
        *(u16 *)(iVar5->sprite_ptr1 + 8) = (u16)*pbVar3 << 4;
        *(u16 *)(iVar5->sprite_ptr1 + 8) =
             *(u16 *)(iVar5->sprite_ptr1 + 8) | (u16)(pbVar3->flags >> 4);
        *(u16 *)(iVar5->sprite_ptr1 + 10) = (pbVar3->flags & 0xf) << 8;
        *(u16 *)(iVar5->sprite_ptr1 + 10) =
             *(u16 *)(iVar5->sprite_ptr1 + 10) | (u16)pbVar3->kind;
        *(u16 *)(iVar5->sprite_ptr1 + 0xc) = (u16)pbVar3->sub_type << 4;
        *(u16 *)(iVar5->sprite_ptr1 + 0xc) =
             *(u16 *)(iVar5->sprite_ptr1 + 0xc) | (u16)(pbVar3->state >> 4);
        *(u16 *)(iVar5->sprite_ptr1 + 0x38) = (pbVar3->state & 0xf) << 8;
        *(u16 *)(iVar5->sprite_ptr1 + 0x38) =
             *(u16 *)(iVar5->sprite_ptr1 + 0x38) | (u16)pbVar3->behavior_state;
        *(s16 *)(iVar5->sprite_ptr1 + 0x38) = *(s16 *)(iVar5->sprite_ptr1 + 0x38) << 3;
        *(u16 *)(iVar5->sprite_ptr1 + 0x3a) = (u16)pbVar3->action_state << 4;
        *(u16 *)(iVar5->sprite_ptr1 + 0x3a) =
             *(u16 *)(iVar5->sprite_ptr1 + 0x3a) | (u16)(pbVar3->sub_action >> 4);
        *(s16 *)(iVar5->sprite_ptr1 + 0x3a) = *(s16 *)(iVar5->sprite_ptr1 + 0x3a) << 3;
        *(u16 *)(iVar5->sprite_ptr1 + 0x3c) = (pbVar3->sub_action & 0xf) << 8;
        *(u16 *)(iVar5->sprite_ptr1 + 0x3c) =
             *(u16 *)(iVar5->sprite_ptr1 + 0x3c) | (u16)pbVar3->counter1;
        pbVar3 = pbVar3 + 9;
        *(s16 *)(iVar5->sprite_ptr1 + 0x3c) = *(s16 *)(iVar5->sprite_ptr1 + 0x3c) << 3;
        iVar5 = iVar5 + 4;
      } while (iVar6 < (int)(uint)param_1->counter2);
    }
  }
  return;
}
