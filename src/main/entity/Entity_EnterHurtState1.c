/**
 * @brief Enters hurt state variant 1: calls EnterHurtState, sets g_HurtState=1, saves entity->sub_type
 * @note Original: func_800732C0 at 0x800732C0
 */
// Entity_EnterHurtState1



#include "tomba.h"
void Entity_EnterHurtState1(int param_1)

{
  Entity_EnterHurtState();
  g_HurtState = 1;
  g_HurtParam = param_1->sub_type;
  return;
}
