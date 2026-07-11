/**
 * @brief MDEC state machine variant 3: entity->state=3/4 states
 * @note Original: func_80087FA0 at 0x80087FA0
 */
// MDEC_StateMachine3



#include "tomba.h"
s32 FUN_80087fa0(int param_1)

{
  u8 bVar1;
  u8 uVar2;
  u8 bVar3;
  s16 sVar4;
  int iVar5;
  
  bVar1 = param_1->state;
  if (bVar1 == 3) {
    iVar5 = param_1->state;
    if (iVar5->state != '\0') {
      return 0;
    }
    if (iVar5->state != '\0') {
      return 0;
    }
    sVar4 = (u16)iVar5->state + (u16)iVar5->state * 0x100;
    *(s16 *)(param_1 + 0xe6) = sVar4;
    if (param_1->state == sVar4) {
      param_1->state = 0xffff;
      *(u8 *)(param_1 + 0xeb) = 0;
      param_1->state = 0;
      return 1;
    }
    param_1->state = sVar4;
  }
  else if (bVar1 < 4) {
    if (bVar1 != 2) {
      return 1;
    }
    iVar5 = param_1->state;
    if (iVar5->state != '\0') {
      return 0;
    }
    if ((((*(s8*)(param_1 + 0xe3) == iVar5->state) &&
         (param_1->state == iVar5->state)) &&
        (param_1->state == iVar5->state)) &&
       (param_1->state == iVar5->state)) {
      param_1->state = 0;
    }
    else {
      param_1->state = 0xffff;
    }
    *(u8 *)(param_1 + 0xe3) = *(u8 *)(param_1->state + 3);
    uVar2 = *(u8 *)(param_1->state + 4);
    *(s16 *)(param_1 + 0xe6) = 0;
    param_1->state = uVar2;
    param_1->state = *(u8 *)(param_1->state + 5);
    uVar2 = *(u8 *)(param_1->state + 6);
    param_1->state = 0;
    param_1->state = uVar2;
    if (param_1->state == 0) {
      *(u8 *)(param_1 + 0xeb) = 0;
      return 1;
    }
  }
  else {
    if (bVar1 != 4) {
      return 1;
    }
    iVar5 = param_1->state;
    if (iVar5->state != '\0') {
      return 0;
    }
    if (iVar5->state != '\0') {
      return 0;
    }
    bVar1 = iVar5->state;
    bVar3 = param_1->state + 1;
    param_1->state = bVar3;
    param_1->state = param_1->state + 8 + (bVar1 + 3 & 0x1fc);
    if (param_1->state <= bVar3) {
      iVar5 = FUN_80088210(param_1);
      if (iVar5 < 0x81) {
        if (param_1->state != param_1->state) {
          param_1->state = param_1->state;
          param_1->state = 0;
          param_1->state = 0;
          return 0;
        }
        param_1->state = 0;
        *(u8 *)(param_1 + 0xeb) = 0;
        param_1->state = 0xff;
        FUN_80088248(param_1,param_1 + 99);
        param_1->state = 2;
      }
      else {
        (*DAT_800abe3c)(param_1);
        param_1->state = 0xfe;
        param_1->state = 2;
      }
    }
  }
  return 0;
}
