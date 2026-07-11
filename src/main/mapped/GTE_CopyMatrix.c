/**
 * @brief Copies 5-word GTE matrix from source to destination
 * @note Original: func_80051B34 at 0x80051B34
 */
// GTE_CopyMatrix



void FUN_80051b34(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  return;
}
