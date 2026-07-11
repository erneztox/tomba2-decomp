/**
 * @brief Sound effect trigger wrapper: calls Audio_PlaySoundEffect with preset params
 * @note Original: func_8002369C at 0x8002369C
 */
// Sys_PlaySFX



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8002369c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_80020c34();
  if (-1 < iVar1) {
    param_1->move_mode = 2;
    param_2->move_mode = 2;
    if (((_DAT_800e7ffe & 0x200) == 0) && (param_1->parent == 0)) {
      param_1->parent = param_2;
      param_1->move_mode = 2;
      param_2->pos_y = param_1->pos_y;
      *(undefined2 *)(param_2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
      param_2->pos_z = param_1->pos_z;
    }
    param_2->anim_id = param_1->anim_id & 1;
    FUN_80074590(0x2f,0,0);
    FUN_80031470(2,param_1 + 0x2c,param_1->flag_5E,param_1 + 0x68);
    DAT_1f800182 = 0;
  }
  return;
}
