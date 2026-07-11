/**
 * @brief Entity enemy behavior variant 2: entity->anim_id state, sets DAT_1f80027c flag
 * @note Original: func_80069BEC at 0x80069BEC
 */
// Entity_Behavior_Enemy2



#include "tomba.h"
void FUN_80069bec(int param_1,int param_2)

{
  undefined2 uVar1;
  byte bVar2;
  
  bVar2 = param_1->anim_id >> 1 & 3;
  if (bVar2 == 2) {
    DAT_1f80027c = 1;
    uVar1 = 0xe40;
  }
  else {
    if (bVar2 < 3) {
      DAT_1f80027c = 0;
      param_1->type_flags = 0;
      goto LAB_80069c7c;
    }
    if (bVar2 != 3) goto LAB_80069c7c;
    DAT_1f80027c = 2;
    uVar1 = 0xc00;
    if (param_1->kind == '\x01') {
      uVar1 = 0xc10;
    }
  }
  param_1->type_flags = uVar1;
LAB_80069c7c:
  param_1->anim_id = param_1->anim_id & 7;
  param_1->rot_z = param_1->type_flags;
  FUN_80074590(0x22,0,0);
  FUN_80069634(param_1);
  FUN_80069ae4(param_1);
  if (param_2 == 0) {
    FUN_80031558(param_1,param_1->kind - 1);
  }
  return;
}
