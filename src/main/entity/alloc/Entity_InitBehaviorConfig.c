/**
 * @brief Configures entity behavior: sets sprite bounds, draw func, and state to 1
 * @note Original: func_8006C59C at 0x8006C59C
 */
// Entity_InitBehaviorConfig



#include "tomba.h"
void FUN_8006c59c(u8 *param_1)

{
  param_1->anim_counter = 0x1000;
  param_1->bounds_min_x = 0x3c;
  param_1->bounds_size = 0x78;
  param_1->bounds_min_y = 100;
  param_1->bounds_max_y = 200;
  *param_1 = 1;
  param_1->timer1 = 0xd;
  param_1->render_flags = 0x20;
  param_1->input_flags = 0;
  param_1->move_mode = 0;
  param_1->timer2 = 0;
  param_1->script_data = FUN_8002c138;
  param_1->draw_x = 0;
  param_1->state = param_1->state + '\x01';
  return;
}
