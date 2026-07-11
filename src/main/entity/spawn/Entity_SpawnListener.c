/**
 * @brief Entity spawn listener: allocs child of type 7, callback FUN_800805ec
 * @note Original: func_80080750 at 0x80080750
 */
// Entity_SpawnListener



#include "tomba.h"
s32 Entity_SpawnListener(int param_1,int param_2,u8 param_3)

{
  int iVar1;
  s32 uVar2;
  
  iVar1 = Entity_SpawnChild(param_1,0,5,7);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1->callback = Entity_BehaviorType6;
    if (param_2 == 0) {
      iVar1->pos_y = param_1->pos_y;
      *(s16 *)(iVar1 + 0x32) = *(s16 *)(param_1 + 0x32);
      iVar1->pos_z = param_1->pos_z;
    }
    else {
      iVar1->pos_y = param_2->pos_x;
      *(s16 *)(iVar1 + 0x32) = *(s16 *)(param_2 + 0x30);
      iVar1->pos_z = *(s16 *)(param_2 + 0x34);
    }
    iVar1->sub_type = param_3;
    iVar1->collision_dir = param_1->collision_dir;
    Entity_SpawnWithPos(0x2e,iVar1 + 0x2c,0xfffffff6);
    uVar2 = 1;
  }
  return uVar2;
}
