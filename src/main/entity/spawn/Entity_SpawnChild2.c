/**
 * @brief Entity child spawner variant 2: allocs type 0xD, sets callback + flags
 * @note Original: func_80071B44 at 0x80071B44
 */
// Entity_SpawnChild2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_SpawnChild2(int param_1,int param_2,s8 param_3)

{
  int iVar1;
  s16 uVar2;
  int iVar3;
  
  iVar3 = Entity_SpawnChild(param_1,0x80,3,0xd);
  iVar1 = _DAT_800bf83c;
  if (iVar3 != 0) {
    iVar3->callback = Entity_Behavior_TimedLife;
    iVar3->sub_type = param_3;
    if (param_3 == '\x01') {
      _DAT_800bf874 = _DAT_800bf874 + param_2;
      iVar3->rot_x = param_1->pos_y;
      iVar3->rot_y = *(s16 *)(param_1 + 0x32);
      iVar3->rot_z = param_1->pos_z;
    }
    uVar2 = String_Format(param_2,iVar3 + 0x44);
    iVar3->anim_timer = uVar2;
    uVar2 = 0x7c7e;
    if (4999 < param_2) {
      uVar2 = 0x7c3e;
    }
    iVar3->draw_y = uVar2;
    Audio_PlaySoundEffect(0x11,0xf,0);
    iVar1 = iVar3;
    if (_DAT_800bf83c != 0) {
      _DAT_800bf83c->state = STATE_DEAD;
    }
  }
  _DAT_800bf83c = iVar1;
  return;
}
