/**
 * @brief Entity main state: entity->state_flag145 flags, primary dispatch
 * @note Original: func_80054E80 at 0x80054E80
 */
// Entity_StateMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_StateMain(int param_1,int param_2)

{
  uint uVar1;
  void *puVar2;
  s16 sVar3;
  s16 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if ((((param_1->state_flag145 == '\0') && (*(s8*)(param_1 + 0x60) != '\0')) &&
      (param_1->input_flags != 0)) &&
     (((param_1->behavior_flags & 2) == 0 &&
      ((param_1->input_flags & 1) == param_1->direction)))) {
    sVar3 = param_1->anim_counter;
    if (param_1->anim_counter < 0) {
      sVar3 = -sVar3;
    }
    if (sVar3 < 0xd01) {
      Entity_LoadAnimIfChanged(param_1,0xc6,4);
      if ((_g_FrameCounter2 & 0xf) != 0) {
        return;
      }
      Audio_PlaySoundEffect(0x3b,0,0);
      return;
    }
  }
  if ((*(u8 *)(param_1 + 0x149) & 4) != 0) {
    if (param_1->anim_id == 'n') {
      return;
    }
    Audio_PlaySoundEffect(0x1c,0,0);
    param_1->anim_id = 0x6e;
    Entity_AnimLoad3(param_1,0x6e);
    Entity_LoadAnimDataEx(param_1,&PTR_DAT_80017fe8,0x6e,(int)param_1->anim_frame);
    return;
  }
  if (((param_1->behavior_flags & 2) == 0) || ((param_1->type_flags & 0xf00) != 0x500)) {
    sVar3 = param_1->anim_counter;
    if (param_1->anim_counter < 0) {
      sVar3 = -sVar3;
    }
    uVar7 = 0x10;
    if (param_1->state_165 == '\0') {
      iVar6 = 0;
      if ((0xc0f < sVar3) && (iVar6 = 4, sVar3 < 0x1110)) {
        iVar6 = 2;
      }
      uVar7 = (uint)(u8)(&DAT_800a454c)[(uint)(param_1->sprite_param1 >> 1) + iVar6];
    }
  }
  else {
    uVar7 = 2;
    if (param_1->state_165 != '\0') {
      uVar7 = 0x11;
    }
  }
  uVar1 = (uint)param_1->anim_id;
  if (uVar1 == uVar7) {
    return;
  }
  if (uVar1 == 0x6e) {
    switch(uVar7) {
    case 4:
    case 6:
    case 8:
    case 10:
    case 0xc:
    case 0xe:
    case 0x10:
      uVar7 = uVar7 - 1;
    }
    Entity_LoadAnimData3(param_1,&PTR_DAT_80017fe8,uVar7);
    param_1->anim_id = (char)uVar7;
  }
  else {
    uVar5 = uVar7;
    if (param_2 == 0) {
      if (uVar1 != 0x10) {
        if (uVar7 == 0x10) {
          uVar1 = 1;
          uVar4 = 2;
        }
        else {
          if ((param_1->anim_timer & 0x7f) != 1) {
            return;
          }
          Entity_AnimFrame(param_1);
          uVar4 = 5;
          uVar1 = *(u16 *)(param_1->anim_data + 2) + 1 & 3;
        }
        puVar2 = (&PTR_DAT_80017fe8)[uVar7];
        *(void **)(param_1 + 0x38) = puVar2 + uVar1 * 8;
        Entity_SetupAnimFrame(param_1,puVar2 + uVar1 * 8,uVar4);
        param_1->anim_id = (char)uVar7;
        goto LAB_800551a4;
      }
      if (uVar7 == 0x10) {
        iVar6 = 2;
        uVar5 = 0x10;
      }
      else {
        if ((*(u16 *)(param_1->anim_data + 6) & 0x4000) == 0) {
          return;
        }
        iVar6 = 4;
      }
    }
    else {
      iVar6 = (int)(s16)param_2;
    }
    Entity_LoadAnimDataEx(param_1,&PTR_DAT_80017fe8,uVar5,iVar6);
    param_1->anim_id = (char)uVar7;
  }
LAB_800551a4:
  Entity_AnimLoad3(param_1,uVar7);
  return;
}
