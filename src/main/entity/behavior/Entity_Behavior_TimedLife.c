/**
 * @brief Timed lifecycle: entity->state state 0->1->2->3, timer 0x3C, dealloc at state 3
 * @note Original: func_80072520 at 0x80072520
 */
// Entity_Behavior_TimedLife



void FUN_80072520(int param_1)

{
  byte bVar1;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    if (param_1->sub_type < 2) {
      FUN_80071dfc();
    }
    else if (param_1->sub_type == 2) {
      FUN_80072308();
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1->state = 1;
      param_1->timer1 = 0x3c;
    }
  }
  else if ((bVar1 != 2) && (bVar1 == 3)) {
    FUN_8007a624();
  }
  return;
}
