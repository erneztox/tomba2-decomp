/**
 * @brief Entity attack state variant 3: entity[0x6A] dispatch
 * @note Original: func_8005A714 at 0x8005A714
 */
// Entity_State_Attack3



#include "tomba.h"
void Entity_State_Attack3(int param_1)

{
  u8 bVar1;
  s16 uVar2;
  int iVar3;
  s32 uVar4;
  
  iVar3 = (uint)param_1->type_flags << 0x10;
  switch(iVar3 >> 0x18 & 0xf) {
  case 1:
  case 2:
    Audio_PlaySoundEffect(2,0,0);
    uVar2 = 9;
    if (param_1->anim_id == '\x10') {
      uVar2 = 0xb;
    }
    goto LAB_8005a8fc;
  case 5:
  case 6:
    if ((iVar3 >> 0x1c & 7U) == 0) {
      Audio_PlaySoundEffect(0x8a,1,0xffffffc4);
      uVar2 = 9;
      if (param_1->anim_id == '\x10') {
        uVar2 = 0xb;
      }
      goto LAB_8005a8fc;
    }
    break;
  case 10:
    Audio_PlaySoundEffect(0x90,1,0xffffffc4);
    uVar2 = 9;
    if (param_1->anim_id == '\x10') {
      uVar2 = 0xb;
    }
    goto LAB_8005a8fc;
  }
  bVar1 = param_1->anim_id;
  if (bVar1 != 10) {
    if (10 < bVar1) {
      if (bVar1 != 0xe) {
        if (bVar1 < 0xf) {
          if (bVar1 != 0xc) {
            param_1->timer1 = 9;
            return;
          }
        }
        else {
          if (bVar1 == 0x10) {
            Audio_PlaySoundEffect(1,0,0);
            param_1->timer1 = 0xb;
            Entity_Behavior_SpawnAtOffset(param_1,param_1 + 0x2c,0);
            return;
          }
          if (bVar1 != 0xe0) {
            param_1->timer1 = 9;
            return;
          }
        }
      }
      Audio_PlaySoundEffect(1,0,0);
      uVar2 = 9;
LAB_8005a8fc:
      param_1->timer1 = uVar2;
      return;
    }
    if (bVar1 != 6) {
      if (bVar1 < 7) {
        if (bVar1 != 4) {
          param_1->timer1 = 9;
          return;
        }
      }
      else if (bVar1 != 8) {
        param_1->timer1 = 9;
        return;
      }
    }
  }
  if (param_1->timer2 == 0) {
    uVar4 = 0xfffffffd;
  }
  else {
    uVar4 = 5;
  }
  Audio_PlaySoundEffect(0,uVar4,0);
  param_1->timer1 = 9;
  param_1->timer2 = ~param_1->timer2 & 1;
  return;
}
