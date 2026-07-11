/**
 * @brief Loads 3D scale matrix (x,y,z shorts) in GTE format
 * @note Original address: 0x800517BC
 */
// GTE_LoadScaleMatrix

void GTE_LoadScaleMatrix(int *param_1,short param_2,short param_3,short param_4)

{
  *param_1 = (int)param_2;
  param_1[1] = 0;
  param_1[2] = (int)param_3;
  param_1[3] = 0;
  param_1[4] = (int)param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

