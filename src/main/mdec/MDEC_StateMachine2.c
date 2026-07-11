/**
 * @brief MDEC state machine variant 2: entity->anim_id state 3/4 calls MDEC funcs
 * @note Original: func_8008831C at 0x8008831C
 */
// MDEC_StateMachine2



#include "tomba.h"
void FUN_8008831c(int param_1)

{
  u8 bVar1;
  
  bVar1 = param_1->anim_id;
  if (bVar1 == 3) {
    FUN_80088aa8(param_1,param_1->sub_anim_id);
  }
  else if (bVar1 < 4) {
    if (bVar1 == 2) {
      FUN_80088a88(param_1,param_1->sub_anim_id);
    }
  }
  else if (bVar1 == 4) {
    if (*(s8*)(param_1 + 0x48) == '\0') {
      FUN_80088ac8(param_1,param_1->sub_anim_id);
    }
    else {
      FUN_80088ae8();
    }
  }
  return;
}
