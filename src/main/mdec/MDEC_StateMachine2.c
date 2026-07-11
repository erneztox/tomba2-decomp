/**
 * @brief MDEC state machine variant 2: entity->state state 3/4 calls MDEC funcs
 * @note Original: func_8008831C at 0x8008831C
 */
// MDEC_StateMachine2



#include "tomba.h"
void MDEC_StateMachine2(int param_1)

{
  u8 bVar1;
  
  bVar1 = param_1->state;
  if (bVar1 == 3) {
    MDEC_CmdSetScale(param_1,param_1->state);
  }
  else if (bVar1 < 4) {
    if (bVar1 == 2) {
      MDEC_CmdSetIQ(param_1,param_1->state);
    }
  }
  else if (bVar1 == 4) {
    if (*(s8*)(param_1 + 0x48) == '\0') {
      MDEC_CmdSetSize(param_1,param_1->state);
    }
    else {
      MDEC_CmdSetBS();
    }
  }
  return;
}
