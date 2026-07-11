/**
 * @brief Sets entity sub-state: entity[5]=9, entity[6]=0, entity[7]=0
 * @note Original: func_800645CC at 0x800645CC
 */
// Entity_SetStateTo9



void FUN_800645cc(int param_1)

{
  *(undefined1 *)(param_1 + 5) = 9;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}
