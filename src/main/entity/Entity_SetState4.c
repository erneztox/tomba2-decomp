/**
 * @brief Entity state set type 4: entity->move_mode=2, entity->flags=0, entity->state=2 if conditions met
 * @note Original: func_8006B0D8 at 0x8006B0D8
 */
// Entity_SetState4



#include "tomba.h"
void Entity_SetState4(char *param_1)

{
  if ((param_1->kind != '\x04') && (*param_1 == '\x02')) {
    param_1->move_mode = '\x02';
    param_1->flags = '\0';
    param_1->state = '\x02';
    param_1->sprite_param2 = '\x01';
    param_1->sprite_param3 = '\0';
    DAT_1f800231 = DAT_1f800231 + -1;
  }
  return;
}
