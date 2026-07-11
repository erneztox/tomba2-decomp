/**
 * @brief UI child spawner: allocs entity with callback from param_2 table
 * @note Original: func_8004D19C at 0x8004D19C
 */
// UI_SpawnChild



#include "tomba.h"
int FUN_8004d19c(undefined4 param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_80072ddc(0,*param_2,param_2->flags,param_2->kind & 0x7f);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2->callback = FUN_8004aac4;
    *(int *)(iVar2 + 0x2c) = (int)*(short *)(param_2 + 4) << 0x10;
    iVar2->pos_y_fixed = (int)*(short *)(param_2 + 6) << 0x10;
    iVar2->scale_y = (int)*(short *)(param_2 + 8) << 0x10;
    uVar1 = param_2->sub_type;
    iVar2->draw_x = 1;
    iVar2->sub_type = uVar1;
    iVar2->angle_delta = *(undefined2 *)(param_2 + 10);
    uVar1 = param_2->sprite_flags;
    *(undefined2 *)(iVar2 + 100) = 1;
    iVar2->flag_5E = uVar1;
    if ((param_2->kind & 0x80) != 0) {
      *(undefined2 *)(iVar2 + 100) = 5;
    }
    *(undefined2 *)(iVar2 + 0x66) = 0;
    FUN_8004aac4(iVar2);
    if (param_3 == 0) {
      iVar2->state = 2;
    }
  }
  return iVar2;
}
