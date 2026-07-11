/**
 * @brief Transitions entity to state 3 with 60-frame timer, clears global flag
 * @note Original: func_80058F24 at 0x80058F24
 */
// Entity_StateTransition



void FUN_80058f24(undefined1 *param_1)

{
  if (DAT_1f800137 == '\0') {
    DAT_800bf80e = 0;
    *param_1 = 3;
    param_1->timer_172 = 0x3c;
    param_1->state = 1;
  }
  return;
}
