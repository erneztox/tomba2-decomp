/**
 * @brief Loads 4x4 identity matrix in GTE fixed-point format (0x1000 = 1.0)
 * @note Original address: 0x80051794
 */

void GTE_LoadIdentityMatrix(undefined4 *param_1)

{
  *param_1 = 0x1000;
  param_1[1] = 0;
  param_1[2] = 0x1000;
  param_1[3] = 0;
  param_1[4] = 0x1000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

