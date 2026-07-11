/**
 * @brief Timed lifecycle: entity[4] state 0->1->2->3, timer 0x3C, dealloc at state 3
 * @note Original: func_80072520 at 0x80072520
 */
// Entity_Behavior_TimedLife



void FUN_80072520(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(byte *)(param_1 + 3) < 2) {
      FUN_80071dfc();
    }
    else if (*(byte *)(param_1 + 3) == 2) {
      FUN_80072308();
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined2 *)(param_1 + 0x40) = 0x3c;
    }
  }
  else if ((bVar1 != 2) && (bVar1 == 3)) {
    FUN_8007a624();
  }
  return;
}
