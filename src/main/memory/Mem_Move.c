/**
 * @brief Memory move: copies up to param_3 bytes from param_2 to param_1 (non-overlapping)
 * @note Original: func_8009B940 at 0x8009B940
 */
// Mem_Move



undefined1 * FUN_8009b940(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_1 < param_2) {
    for (; 0 < param_3; param_3 = param_3 + -1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
  }
  else {
    while (0 < param_3) {
      param_3 = param_3 + -1;
      param_1[param_3] = param_2[param_3];
    }
  }
  return param_1;
}
