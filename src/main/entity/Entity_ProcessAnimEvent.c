/**
 * @brief Processes animation events: timing, sub-entity texture cycling
 * @note Original: func_8004179C at 0x8004179C
 */
// Entity_ProcessAnimEvent



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_ProcessAnimEvent(int param_1)

{
  u8 bVar1;
  u16 uVar2;
  u16 uVar3;
  int iVar4;
  
  iVar4 = param_1;
  if ((param_1->event_id & 1) != 0) {
    iVar4 = _g_PlayerEntity;
  }
  bVar1 = param_1->sub_state;
  if (bVar1 == 1) {
    uVar2 = *(u16 *)(param_1 + 0x66);
    if (((int)*(s16 *)(param_1 + 0x66) & 0x8000U) == 0) {
      if ((uVar2 & 0xff) != (u16)*(u8 *)(iVar4->anim_data + 4)) goto LAB_800418dc;
      Audio_PlaySoundEffect(*(u8 *)(param_1 + 0x68),0,0);
      uVar3 = *(u16 *)(param_1 + 0x66) | 0x8000;
    }
    else {
      uVar3 = uVar2 & 0x7fff;
      if ((uVar2 & 0xff) == (u16)*(u8 *)(iVar4->anim_data + 4)) goto LAB_800418dc;
    }
    *(u16 *)(param_1 + 0x66) = uVar3;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return 0;
      }
      if (param_1->event_param == -1) {
        param_1->event_param = (u16)param_1->state_7B;
      }
      Entity_SetAnimModeIfNew(iVar4,(int)param_1->event_param,(int)*(s16 *)(param_1 + 0x76));
      if ((param_1->event_id & 2) != 0) {
        if ((**(u16 **)(param_1 + 0x6c) & 0x2000) == 0) {
          param_1->sub_state = 2;
          return 0;
        }
        param_1->sub_state = 1;
        return 0;
      }
      return 1;
    }
    if (bVar1 != 2) {
      return 0;
    }
  }
LAB_800418dc:
  if (iVar4->sub_state2 != '\x01') {
    return 0;
  }
  return 1;
}
