/**
 * @brief Entity bounce state: entity->action_state=0, checks flag, sets velocity
 * @note Original: func_8006A080 at 0x8006A080
 */
// Entity_State_Bounce



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006a080(undefined1 *param_1)

{
  char *pcVar1;
  
  if (param_1->action_state == '\0') {
    *(undefined2 *)(param_1 + 0x66) = 3;
    if ((DAT_800e7fc6 != '\0') && (_DAT_800e7fee != 0)) {
      DAT_800e7e85 = 0x19;
      DAT_800e7e86 = 0;
      DAT_800e7e87 = 0;
      param_1->action_state = param_1->action_state + '\x01';
    }
  }
  else if (param_1->action_state == '\x01') {
    param_1->target_angle = _DAT_800e7ed6;
    param_1->type_flags = _DAT_800e7ed8;
  }
  pcVar1 = _DAT_1f800208;
  if (_DAT_1f800208 != (char *)0x1) {
    if (_DAT_1f800208 != (char *)0x0) {
      if ((int)_DAT_1f800208 < 0) {
        if ((_DAT_1f800208[0xc] == '\x02') && (*_DAT_1f800208 != '\x01')) {
          _DAT_1f800208 = (char *)0x0;
          if ((DAT_1f80027b != '\x02') && (DAT_800e7fc6 == '\x04')) {
            DAT_800e7fc6 = '\0';
          }
        }
        else {
          param_1->pos_y = _DAT_1f800208->pos_y + param_1->draw_x
          ;
          *(short *)(param_1 + 0x32) = *(short *)(pcVar1 + 0x32) + param_1->angle_delta;
          param_1->pos_z = pcVar1->pos_z + *(short *)(param_1 + 100);
        }
      }
      else {
        FUN_80069cd8(param_1);
      }
    }
    FUN_80069858(param_1,0,1);
  }
  _DAT_1f800200 = param_1->pos_y;
  _DAT_1f800202 = *(undefined2 *)(param_1 + 0x32);
  _DAT_1f800204 = param_1->pos_z;
  if (DAT_800e7fc6 == '\0') {
    *param_1 = 2;
    param_1->state = param_1->state + '\x01';
    DAT_800e7ef9 = 0;
    DAT_1f80023a = 0;
  }
  return;
}
