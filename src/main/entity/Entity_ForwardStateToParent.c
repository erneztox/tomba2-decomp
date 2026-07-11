/**
 * @brief Forwards entity->behavior_state state check to parent entity
 * @note Original: func_80041FF8 at 0x80041FF8
 */
// Entity_ForwardStateToParent



#include "tomba.h"
void Entity_ForwardStateToParent(int param_1)

{
  Entity_CheckStateAndSet(param_1->parent);
  return;
}
