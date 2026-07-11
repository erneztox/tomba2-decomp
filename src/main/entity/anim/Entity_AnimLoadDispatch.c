/**
 * @brief Entity anim load dispatcher: switch on entity type
 * @note Original: func_8005490C at 0x8005490C
 */
// Entity_AnimLoadDispatch



#include "tomba.h"
void Entity_AnimLoadDispatch(int param_1,int param_2,int param_3)

{
  u8 bVar1;
  s16 sVar2;
  int iVar3;
  void *puVar4;
  s32 uVar5;
  uint uVar6;
  
  iVar3 = Entity_GetState176();
  if (iVar3 - 7U < 3) {
    if ((param_3 == 0) || (param_2 == 0)) {
      if (param_2 == 0) {
        puVar4 = &DAT_800a44e8;
        uVar5 = 0;
      }
      else {
        puVar4 = &DAT_800a44ec;
        uVar5 = 5;
      }
      Entity_LoadAnimIfChanged(param_1,puVar4[param_1->gte_flags],uVar5);
      return;
    }
    if ((param_1->state_flag145 == '\0') && (param_3 != 2)) {
      puVar4 = &DAT_800a44ec;
    }
    else {
      puVar4 = &DAT_800a44f0;
    }
    uVar6 = (uint)(u8)puVar4[param_1->gte_flags];
    if (param_1->anim_id == uVar6) {
      return;
    }
    *(void*)(param_1 + 0x46) = puVar4[param_1->gte_flags];
    Entity_AnimLoad3(param_1,uVar6);
  }
  else {
    if ((param_3 == 0) || (param_2 == 0)) {
      if (param_2 == 0) {
        puVar4 = &DAT_800a44d0;
        uVar5 = 0;
      }
      else {
        puVar4 = (void*)0x800a44d8;
        uVar5 = 5;
      }
      Entity_LoadAnimIfChanged(param_1,puVar4[(uint)param_1->gte_flags + (param_1->behavior_flags & 6)
                                 ],uVar5);
      return;
    }
    if ((param_1->state_flag145 == '\0') && (param_3 != 2)) {
      iVar3 = -0x7ff5bb28;
    }
    else {
      iVar3 = -0x7ff5bb20;
    }
    bVar1 = *(u8 *)(iVar3 + (param_1->behavior_flags & 6) + (uint)param_1->gte_flags);
    uVar6 = (uint)bVar1;
    if (param_1->anim_id == uVar6) {
      return;
    }
    param_1->anim_id = bVar1;
    Entity_AnimLoad3(param_1,uVar6);
  }
  if (param_3 < 1) {
    Entity_LoadAnimDataEx(param_1,&PTR_DAT_80017fe8,uVar6,5);
  }
  else {
    sVar2 = *(s16 *)(param_1->anim_data + 2);
    puVar4 = (&PTR_DAT_80017fe8)[uVar6];
    *(void **)(param_1 + 0x38) = puVar4 + sVar2 * 8;
    param_1->anim_timer = 5;
    Audio_SeqMain2(param_1,puVar4 + sVar2 * 8);
    Entity_RotateMove(param_1);
  }
  return;
}
