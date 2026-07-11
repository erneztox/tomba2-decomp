/**
 * @brief Wraps Math_ApproachAngle for entity[0x56] rotation field
 * @note Original: func_80041438 at 0x80041438
 */
// Entity_ApproachAngle



void Entity_ApproachAngle(int param_1,s16 param_2,s16 param_3)

{
  Math_ApproachAngle(param_1 + 0x56,(int)param_2,(int)param_3);
  return;
}
