/**
 * @brief Checks if two entities can interact: same type, valid spawn check
 * @note Original: func_80023618 at 0x80023618
 */
// Entity_CheckInteraction



#include "tomba.h"
void Entity_CheckInteraction(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1->collision_dir == param_2->collision_dir) &&
     (iVar1 = Entity_CalcAngle6(), iVar1 != 0)) {
    Entity_InitFull(param_1,param_2,0,0);
    if (param_1->kind - 1 < 9) {
      param_2->move_mode = 1;
    }
    g_State182 = 0;
  }
  return;
}
