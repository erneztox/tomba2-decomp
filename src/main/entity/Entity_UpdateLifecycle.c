/**
 * @brief Lifecycle callback: entity[4] state machine, checks done flag, dealloc at state 3
 * @note Original: func_8007263C at 0x8007263C
 */
// Entity_UpdateLifecycle



void FUN_8007263c(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (**(short **)(param_1 + 0x10) == -2) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 0xb) = 8;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
  else if (bVar1 < 4) {
    FUN_8007a624();
  }
  return;
}
