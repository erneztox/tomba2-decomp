/**
 * @brief Variant point transform: uses pre-computed matrix, no translation add
 * @note Original: func_80051D90 at 0x80051D90
 */
// Entity_TransformPoint2



void FUN_80051d90(int param_1,undefined4 param_2,short *param_3)

{
  FUN_800844c0(param_1 + 0x18);
  *param_3 = *param_3 + *(short *)(param_1 + 0x2c);
  param_3[1] = param_3[1] + *(short *)(param_1 + 0x30);
  param_3[2] = param_3[2] + *(short *)(param_1 + 0x34);
  return;
}
