/**
 * @brief MDEC decoder state machine: state 2=reset, 3=set IQ, 4=set size via entity->state
 * @note Original: func_80087F1C at 0x80087F1C
 */
// MDEC_StateMachine



#include "tomba.h"
void MDEC_StateMachine(int param_1)

{
  u8 bVar1;
  
  bVar1 = param_1->state;
  if (bVar1 == 3) {
    MDEC_CmdSetIQ(param_1,param_1->state);
  }
  else if (bVar1 < 4) {
    if (bVar1 == 2) {
      MDEC_CmdReset();
    }
  }
  else if (bVar1 == 4) {
    MDEC_CmdSetSize(param_1,param_1->state);
  }
  return;
}
