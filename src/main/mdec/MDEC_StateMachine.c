/**
 * @brief MDEC decoder state machine: state 2=reset, 3=set IQ, 4=set size via entity->anim_id
 * @note Original: func_80087F1C at 0x80087F1C
 */
// MDEC_StateMachine



#include "tomba.h"
void FUN_80087f1c(int param_1)

{
  byte bVar1;
  
  bVar1 = param_1->anim_id;
  if (bVar1 == 3) {
    FUN_80088a88(param_1,*(undefined1 *)(param_1 + 0xe4));
  }
  else if (bVar1 < 4) {
    if (bVar1 == 2) {
      FUN_80088a74();
    }
  }
  else if (bVar1 == 4) {
    FUN_80088ac8(param_1,param_1->sub_anim_id);
  }
  return;
}
