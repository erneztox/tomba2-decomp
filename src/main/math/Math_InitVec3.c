/**
 * @brief Initializes 3D vector: zeros XY, sets Z=0x1000 (default scale)
 * @note Original: func_8007B2AC at 0x8007B2AC
 */
// Math_InitVec3



void FUN_8007b2ac(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 3) = 0x1000;
  return;
}
