/**
 * @brief Enters hurt state variant 1: calls EnterHurtState, sets DAT_800bf818=1, saves entity->sub_type
 * @note Original: func_800732C0 at 0x800732C0
 */
// Entity_EnterHurtState1



#include "tomba.h"
void FUN_800732c0(int param_1)

{
  FUN_80073260();
  DAT_800bf818 = 1;
  DAT_800bf817 = param_1->sub_type;
  return;
}
