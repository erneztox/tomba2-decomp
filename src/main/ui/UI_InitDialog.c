/**
 * @brief UI dialog init: calls FUN_80077d64, sets up dialog struct at entity+0x1B0
 * @note Original: func_8004F378 at 0x8004F378
 */
// UI_InitDialog



#include "tomba.h"
void FUN_8004f378(int param_1)

{
  u16 uVar1;
  int iVar2;
  s32 *puVar3;
  
  FUN_80077d64();
  puVar3 = (s32 *)(param_1 + 0x1b0);
  FUN_8004f184(param_1,puVar3);
  uVar1 = *(s16 *)(param_1 + 10) - 1;
  *(u16 *)(param_1 + 10) = uVar1;
  iVar2 = 0;
  if (0 < (int)((uint)uVar1 << 0x10)) {
    do {
      iVar2 = iVar2 + 1;
      *puVar3 = puVar3->counter1;
      puVar3->flags = puVar3->counter2;
      puVar3->kind = puVar3[10];
      puVar3->sub_type = puVar3->render_flags;
      puVar3->state = puVar3[0xc];
      puVar3->behavior_state = puVar3->sprite_flags;
      puVar3->action_state = puVar3[0xe];
      puVar3->sub_action = puVar3[0xf];
      puVar3 = puVar3 + 8;
    } while (iVar2 < *(s16 *)(param_1 + 10));
  }
  FUN_8004ee2c(puVar3);
  return;
}
