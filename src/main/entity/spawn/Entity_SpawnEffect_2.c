/**
 * @brief Spawns effect entity with position from spawner, sets entity[0x48]=0x1000100
 * @note Original: func_800315D4 at 0x800315D4
 */
// Entity_SpawnEffect



#include "tomba.h"
void FUN_800315d4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (6 < DAT_800e7e7c) {
    iVar1 = FUN_8007a980(0,6,1);
    iVar2 = 0;
    if (iVar1 != 0) {
      if (param_1 != 0) {
        iVar1->pos_x = *(s16 *)(param_1 + 2);
        iVar1->pos_y = *(s16 *)(param_1 + 6);
        *(s16 *)(iVar1 + 0x30) = *(s16 *)(param_1 + 10);
      }
      *(s16 *)(iVar1 + 0x32) = 0xffec;
      FUN_80028e10(iVar1,9);
      iVar2 = iVar1;
    }
  }
  if (iVar2 != 0) {
    *(s32 *)(iVar2 + 0x48) = 0x1000100;
  }
  iVar2 = 0;
  if (6 < DAT_800e7e7c) {
    iVar1 = FUN_8007a980(0,6,1);
    iVar2 = 0;
    if (iVar1 != 0) {
      if (param_1 != 0) {
        iVar1->pos_x = *(s16 *)(param_1 + 2);
        iVar1->pos_y = *(s16 *)(param_1 + 6);
        *(s16 *)(iVar1 + 0x30) = *(s16 *)(param_1 + 10);
      }
      *(s16 *)(iVar1 + 0x32) = 0xffe7;
      FUN_80028e10(iVar1,5);
      iVar2 = iVar1;
    }
  }
  if (iVar2 != 0) {
    *(s32 *)(iVar2 + 0x48) = 0x1000100;
  }
  return;
}
