/**
 * @brief Sets up sprite config bytes for type 3: state=3, size=2, count=11
 * @note Original: func_80023528 at 0x80023528
 */
// Entity_InitSpriteType3



#include "tomba.h"
void Entity_InitSpriteType3(u8 *param_1)

{
  *param_1 = 3;
  param_1->state = STATE_FINISH;
  param_1->behavior_state = 0xb;
  param_1->action_state = 0;
  return;
}
