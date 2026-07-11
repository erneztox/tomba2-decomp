/**
 * @brief Entity damage check: tests entity->anim_id flags + global DAT_800e7edf condition
 * @note Original: func_8006918C at 0x8006918C
 */
// Entity_CheckDamage



#include "tomba.h"
void Entity_CheckDamage(u8 *param_1,int param_2)

{
  s32 bVar1;
  int iVar2;
  
  if (param_2 != 0) {
    bVar1 = false;
    if (((param_1->anim_id & 4) == 0) && (DAT_800e7edf != 0)) {
      bVar1 = (DAT_800e7edf & 1) == DAT_800e7fc7;
    }
    if (bVar1) goto LAB_800691fc;
  }
  iVar2 = Entity_PhysicsInit(param_1,0,0);
  if (iVar2 == 0) {
    return;
  }
LAB_800691fc:
  *param_1 = 2;
  Audio_PlaySoundEffect(0xe,0,0);
  Entity_SpawnSpecial(2,param_1 + 0x2c,0,param_1 + 0x68);
  Entity_InitObjState(param_1);
  return;
}
