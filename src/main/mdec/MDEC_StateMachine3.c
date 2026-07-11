/**
 * @brief MDEC state machine variant 3: entity->anim_id=3/4 states
 * @note Original: func_80087FA0 at 0x80087FA0
 */
// MDEC_StateMachine3



#include "tomba.h"
undefined4 FUN_80087fa0(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  
  bVar1 = param_1->anim_id;
  if (bVar1 == 3) {
    iVar5 = param_1->sprite_data;
    if (iVar5->kind != '\0') {
      return 0;
    }
    if (iVar5->sub_type != '\0') {
      return 0;
    }
    sVar4 = (ushort)iVar5->behavior_state + (ushort)iVar5->state * 0x100;
    *(short *)(param_1 + 0xe6) = sVar4;
    if (*(short *)(param_1 + 0xee) == sVar4) {
      *(undefined2 *)(param_1 + 0xee) = 0xffff;
      *(undefined1 *)(param_1 + 0xeb) = 0;
      param_1->sub_anim_id = 0;
      return 1;
    }
    *(short *)(param_1 + 0xee) = sVar4;
  }
  else if (bVar1 < 4) {
    if (bVar1 != 2) {
      return 1;
    }
    iVar5 = param_1->sprite_data;
    if (iVar5->sub_action != '\0') {
      return 0;
    }
    if ((((*(char *)(param_1 + 0xe3) == iVar5->sub_type) &&
         (*(char *)(param_1 + 0xe4) == iVar5->state)) &&
        (*(char *)(param_1 + 0xe9) == iVar5->behavior_state)) &&
       (*(char *)(param_1 + 0xea) == iVar5->action_state)) {
      *(undefined2 *)(param_1 + 0xee) = 0;
    }
    else {
      *(undefined2 *)(param_1 + 0xee) = 0xffff;
    }
    *(undefined1 *)(param_1 + 0xe3) = *(undefined1 *)(param_1->sprite_data + 3);
    uVar2 = *(undefined1 *)(param_1->sprite_data + 4);
    *(undefined2 *)(param_1 + 0xe6) = 0;
    *(undefined1 *)(param_1 + 0xe4) = uVar2;
    *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)(param_1->sprite_data + 5);
    uVar2 = *(undefined1 *)(param_1->sprite_data + 6);
    *(undefined2 *)(param_1 + 0xec) = 0;
    *(undefined1 *)(param_1 + 0xea) = uVar2;
    if (*(short *)(param_1 + 0xee) == 0) {
      *(undefined1 *)(param_1 + 0xeb) = 0;
      return 1;
    }
  }
  else {
    if (bVar1 != 4) {
      return 1;
    }
    iVar5 = param_1->sprite_data;
    if (iVar5->kind != '\0') {
      return 0;
    }
    if (iVar5->sub_type != '\0') {
      return 0;
    }
    bVar1 = iVar5->state;
    bVar3 = param_1->sub_anim_id + 1;
    param_1->sub_anim_id = bVar3;
    *(ushort *)(param_1 + 0xec) = *(short *)(param_1 + 0xec) + 8 + (bVar1 + 3 & 0x1fc);
    if (*(byte *)(param_1 + 0xea) <= bVar3) {
      iVar5 = FUN_80088210(param_1);
      if (iVar5 < 0x81) {
        if (*(short *)(param_1 + 0xee) != *(short *)(param_1 + 0xec)) {
          *(short *)(param_1 + 0xee) = *(short *)(param_1 + 0xec);
          param_1->sub_anim_id = 0;
          *(undefined2 *)(param_1 + 0xec) = 0;
          return 0;
        }
        *(undefined2 *)(param_1 + 0xee) = 0;
        *(undefined1 *)(param_1 + 0xeb) = 0;
        param_1->anim_id = 0xff;
        FUN_80088248(param_1,param_1 + 99);
        param_1->anim_id = 2;
      }
      else {
        (*DAT_800abe3c)(param_1);
        param_1->anim_id = 0xfe;
        *(undefined1 *)(param_1 + 0x49) = 2;
      }
    }
  }
  return 0;
}
