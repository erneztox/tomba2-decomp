/**
 * @brief UI list updater: processes param_1->counter1 entries, updates positions
 * @note Original: func_8004F474 at 0x8004F474
 */
// UI_ListUpdate



#include "tomba.h"
void FUN_8004f474(int param_1)

{
  int iVar1;
  s16 sVar2;
  s16 *psVar3;
  int iVar4;
  
  iVar4 = param_1 + 0xc;
  iVar1 = 0;
  if (0 < *(s16 *)(param_1 + 8)) {
    psVar3 = param_1->anim_timer;
    do {
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x8c;
      *psVar3 = *psVar3 + 2;
      psVar3 = psVar3 + 0x46;
    } while (iVar1 < *(s16 *)(param_1 + 8));
  }
  if (0x9d < *(s16 *)(iVar4 + -0x8a)) {
    iVar1 = 0;
    if (0 < *(s16 *)(param_1 + 8)) {
      sVar2 = 0x9e;
      do {
        *(s16 *)(iVar4 + -0x8a) = sVar2;
        sVar2 = sVar2 + 0x12;
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + -0x8c;
      } while (iVar1 < *(s16 *)(param_1 + 8));
    }
    *(s16 *)(param_1 + 4) = 0;
    param_1->flags = 2;
  }
  return;
}
