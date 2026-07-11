/**
 * @brief Syncs entity position to parent if parent is in state 1
 * @note Original: func_8006AFC4 at 0x8006AFC4
 */
// Entity_SyncToParent



#include "tomba.h"
void FUN_8006afc4(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x10);
  if (((pcVar1 != (s8*)0x0) && (*pcVar1 == '\x01')) && (pcVar1->state == '\x01')) {
    pcVar1->pos_y = param_1->pos_y;
    *(s16 *)(pcVar1 + 0x32) = *(s16 *)(param_1 + 0x32);
    pcVar1->pos_z = param_1->pos_z;
  }
  return;
}
