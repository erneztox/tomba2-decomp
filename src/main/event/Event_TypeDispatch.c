/**
 * @brief Event type dispatcher: returns action code by event type (0/1/2)
 * @note Original: func_80036560 at 0x80036560
 */
// Event_TypeDispatch



s32 FUN_80036560(int param_1,s32 *param_2)

{
  s32 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 2;
  }
  else {
    if (param_1 == 1) {
      *param_2 = 2;
      return 4;
    }
    if (param_1 == 2) {
      *param_2 = 6;
      return 3;
    }
    if (param_1 == 3) {
      *param_2 = 9;
      return 3;
    }
    if (param_1 == 4) {
      *param_2 = 0xc;
      return 1;
    }
    uVar1 = 0;
    if (param_1 == 5) {
      *param_2 = 0xd;
      return 1;
    }
  }
  *param_2 = 0;
  return uVar1;
}
