/**
 * @brief Entity attack check: tests input + entity->input_state + collision flags
 * @note Original: func_80056E08 at 0x80056E08
 */
// Entity_AttackCheck



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80056e08(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  
  if ((_DAT_800ecf54 & _DAT_1f800172) == 0) {
    if (param_1->input_state < 0xb) {
      if ((param_1->entity_flags & 0x180) == 0) {
        bVar1 = param_1->input_state;
        puVar3 = &DAT_800a4588;
      }
      else {
        bVar1 = param_1->input_state;
        puVar3 = &DAT_800a45a0;
      }
      param_1->velocity_y = param_1->velocity_y + *(short *)(puVar3 + (uint)bVar1 * 2)
      ;
      param_1->input_state = 0x10;
      if (0 < param_1->velocity_y) {
        param_1->velocity_y = 0;
      }
    }
  }
  else {
    cVar2 = param_1->input_state + '\x01';
    param_1->input_state = cVar2;
    if (cVar2 == -1) {
      param_1->input_state = 0xfe;
      return;
    }
  }
  return;
}
