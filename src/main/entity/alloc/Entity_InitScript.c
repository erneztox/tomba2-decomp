/**
 * @brief Entity script init: entity->action_state=0, calls Entity_InitFromScript to load script data
 * @note Original: func_800713F8 at 0x800713F8
 */
// Entity_InitScript



#include "tomba.h"
void Entity_InitScript(int param_1)

{
  if (param_1->action_state == '\0') {
    Entity_InitFromScript(param_1,&PTR_DAT_8001b860,
                 *(s32 *)
                  ((uint)DAT_800bf830 * 4 + *(int *)(&DAT_800a4bbc + (uint)g_GameState * 4)));
    param_1->anim_check = 2;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if ((param_1->action_state == '\x01') && (param_1->anim_check == -1)) {
    Entity_SetStateCombat();
  }
  Entity_ScriptRun(param_1);
  Entity_MoveInCircle(param_1);
  Entity_SetAnimFlag79(param_1);
  return;
}
