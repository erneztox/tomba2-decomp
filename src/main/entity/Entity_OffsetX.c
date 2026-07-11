/**
 * @brief Entity X offset: entity[0x2E] += 8 if entity[0x60] != 0
 * @note Original: func_80070650 at 0x80070650
 */
// Entity_OffsetX



void FUN_80070650(int param_1)

{
  short sVar1;
  
  if (param_1->draw_x != 0) {
    sVar1 = param_1->pos_y + 8;
    param_1->pos_y = sVar1;
    if (param_1->draw_x <= sVar1) {
      param_1->pos_y = param_1->draw_x;
      param_1->draw_x = 0;
    }
  }
  return;
}
