/**
 * @brief CD mode setter: sets DAT_800ac620=0 or 1 based on param, zeros counter
 * @note Original: func_80099370 at 0x80099370
 */
// CD_SetMode



void FUN_80099370(int param_1)

{
  if (param_1 == 0) {
    DAT_800ac620 = 0;
  }
  else {
    DAT_800ac620 = 0;
    if (param_1 == 1) {
      DAT_800ac620 = 1;
    }
  }
  DAT_800ac594 = param_1;
  return;
}
