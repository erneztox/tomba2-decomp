/**
 * @brief Entity animation player: entity->state=1 state, calls advance + GTE compose
 * @note Original: func_80071A3C at 0x80071A3C
 */
// Entity_PlayAnimation



void FUN_80071a3c(int param_1)

{
  byte bVar1;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    FUN_80071768(param_1);
    if (param_1->flags != '\0') {
      FUN_800518fc(param_1);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_800716b4(param_1);
      if ((DAT_800bfae1 == '\0') || (DAT_800bf870 != '\x04')) {
        if ((DAT_800bfae6 != '\0') && (DAT_800bf870 == '\a')) {
          func_0x801178e4(param_1);
        }
      }
      else {
        func_0x8011b79c(param_1);
      }
    }
  }
  else if ((bVar1 != 2) && (bVar1 == 3)) {
    FUN_8007a624(param_1);
  }
  return;
}
