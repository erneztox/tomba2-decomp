/**
 * @brief Applies GTE transform if entity->render_flags has bit 0x40 or 0x80 set
 * @note Original: func_8003FAA4 at 0x8003FAA4
 */
// Entity_ApplyTransformCheck



#include "tomba.h"
void Entity_ApplyTransformCheck(int param_1)

{
  int iVar1;
  
  iVar1 = 0x50;
  if ((param_1->render_flags & 0x40) == 0) {
    if ((param_1->render_flags & 0x80) == 0) {
      return;
    }
    iVar1 = (int)param_1->bounds_min_x;
  }
  Entity_ApplyTransform(param_1,iVar1,0);
  return;
}
