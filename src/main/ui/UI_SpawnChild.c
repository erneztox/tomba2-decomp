/**
 * @brief UI child spawner: allocs entity with callback from param_2 table
 * @note Original: func_8004D19C at 0x8004D19C
 */
// UI_SpawnChild



#include "tomba.h"
int UI_SpawnChild(s32 param_1,u8 *param_2,int param_3)

{
  u8 uVar1;
  int iVar2;
  
  iVar2 = Entity_SpawnChild(0,*param_2,param_2->flags,param_2->kind & 0x7f);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2->callback = Entity_Main;
    *(int *)(iVar2 + 0x2c) = (int)*(s16 *)(param_2 + 4) << 0x10;
    iVar2->pos_y_fixed = (int)*(s16 *)(param_2 + 6) << 0x10;
    iVar2->scale_y = (int)*(s16 *)(param_2 + 8) << 0x10;
    uVar1 = param_2->sub_type;
    iVar2->draw_x = 1;
    iVar2->sub_type = uVar1;
    iVar2->angle_delta = *(s16 *)(param_2 + 10);
    uVar1 = param_2->sprite_flags;
    *(s16 *)(iVar2 + 100) = 1;
    iVar2->flag_5E = uVar1;
    if ((param_2->kind & 0x80) != 0) {
      *(s16 *)(iVar2 + 100) = 5;
    }
    *(s16 *)(iVar2 + 0x66) = 0;
    Entity_Main(iVar2);
    if (param_3 == 0) {
      iVar2->state = STATE_FINISH;
    }
  }
  return iVar2;
}
