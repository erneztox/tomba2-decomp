/**
 * @brief Calculates angle from entity to its script target at entity[0x72]
 * @note Original: func_80041378 at 0x80041378
 */
// Entity_CalcAngleToTarget



#include "tomba.h"
void Entity_CalcAngleToTarget(int param_1)

{
  Entity_CalcAngleToward(param_1,(int)param_1->event_id);
  return;
}
