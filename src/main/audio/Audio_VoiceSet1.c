/**
 * @brief Audio voice set variant 1: checks slot, sets voice params
 * @note Original: func_80092420 at 0x80092420
 */
// Audio_VoiceSet1



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80092420(s16 param_1,s16 param_2,int param_3,u8 *param_4)

{
  s32 uVar1;
  int iVar2;
  
  if (*(s8*)(param_1 + -0x7fefa2e8) == '\x01') {
    FUN_800962b0((int)param_1,(int)param_2);
    iVar2 = (param_3 + DAT_80105cff * 0x10) * 0x10000 >> 0xb;
    *param_4 = *(u8 *)(iVar2 + _DAT_80105ce8);
    param_4->flags = *(u8 *)(iVar2 + _DAT_80105ce8 + 1);
    param_4->kind = *(u8 *)(iVar2 + _DAT_80105ce8 + 2);
    param_4->sub_type = *(u8 *)(iVar2 + _DAT_80105ce8 + 3);
    param_4->state = *(u8 *)(iVar2 + _DAT_80105ce8 + 4);
    param_4->behavior_state = *(u8 *)(iVar2 + _DAT_80105ce8 + 5);
    param_4->sub_action = *(u8 *)(iVar2 + _DAT_80105ce8 + 7);
    param_4->action_state = *(u8 *)(iVar2 + _DAT_80105ce8 + 6);
    param_4->counter1 = *(u8 *)(iVar2 + _DAT_80105ce8 + 8);
    param_4->counter2 = *(u8 *)(iVar2 + _DAT_80105ce8 + 9);
    param_4[10] = *(u8 *)(iVar2 + _DAT_80105ce8 + 10);
    param_4->render_flags = *(u8 *)(iVar2 + _DAT_80105ce8 + 0xb);
    param_4[0xc] = *(u8 *)(iVar2 + _DAT_80105ce8 + 0xc);
    param_4->sprite_flags = *(u8 *)(iVar2 + _DAT_80105ce8 + 0xd);
    iVar2 = iVar2 + _DAT_80105ce8;
    *(s16 *)(param_4 + 0x10) = *(s16 *)(iVar2 + 0x10);
    *(s16 *)(param_4 + 0x12) = *(s16 *)(iVar2 + 0x12);
    *(s16 *)(param_4 + 0x14) = *(s16 *)(iVar2 + 0x14);
    uVar1 = 0;
    *(s16 *)(param_4 + 0x16) = *(s16 *)(iVar2 + 0x16);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
