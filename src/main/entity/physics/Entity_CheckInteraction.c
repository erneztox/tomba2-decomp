/**
 * @brief Checks if two entities can interact: same type, valid spawn check
 * @note Original: func_80023618 at 0x80023618
 */
// Entity_CheckInteraction



#include "tomba.h"
void FUN_80023618(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1->collision_dir == param_2->collision_dir) &&
     (iVar1 = FUN_8001f9dc(), iVar1 != 0)) {
    FUN_8001e860(param_1,param_2,0,0);
    if (param_1->kind - 1 < 9) {
      param_2->move_mode = 1;
    }
    DAT_1f800182 = 0;
  }
  return;
}
