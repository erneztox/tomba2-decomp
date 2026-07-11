/**
 * @brief Sets entity animation flag at entity->sub_state2 from Entity_AnimFrame
 * @note Original: func_8004190C at 0x8004190C
 */
// Entity_SetAnimFlag79



#include "tomba.h"
s32 Entity_SetAnimFlag79(int param_1)

{
  u8 uVar1;
  
  uVar1 = Entity_AnimFrame();
  param_1->sub_state2 = uVar1;
  return 1;
}
