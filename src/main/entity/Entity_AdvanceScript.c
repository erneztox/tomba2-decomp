/**
 * @brief Entity script advance: reads u8 at entity[0x14], dispatches commands
 * @note Original: func_8007D14C at 0x8007D14C
 */
// Entity_AdvanceScript



#include "tomba.h"
void Entity_AdvanceScript(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x14);
  if (**(char **)(param_1 + 0x14) == -1) {
LAB_8007d17c:
    param_1->behavior_state = 0;
  }
  else {
    iVar2 = Entity_ScriptRun_2(param_1,1);
    if (iVar2 == 1) {
      bVar1 = param_1->anim_id | 1;
    }
    else {
      if (iVar2 < 2) {
        if (iVar2 != 0) goto LAB_8007d1e4;
        goto LAB_8007d17c;
      }
      if (iVar2 != 2) goto LAB_8007d1e4;
      bVar1 = param_1->anim_id | 0x81;
    }
    param_1->anim_id = bVar1;
  }
LAB_8007d1e4:
  if (param_1->behavior_state != '\0') {
    param_1->behavior_state = 1;
  }
  return;
}
