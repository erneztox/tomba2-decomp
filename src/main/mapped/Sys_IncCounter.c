/**
 * @brief Increments global counter at 0x800BF87E with upper limit cap
 * @note Original: func_80026100 at 0x80026100
 */
// Sys_IncCounter



void FUN_80026100(char param_1)

{
  DAT_800bf87e = DAT_800bf87e + param_1;
  if (DAT_800bf87f < DAT_800bf87e) {
    DAT_800bf87e = DAT_800bf87f;
  }
  DAT_800ed065 = DAT_800ed065 | 1;
  return;
}
