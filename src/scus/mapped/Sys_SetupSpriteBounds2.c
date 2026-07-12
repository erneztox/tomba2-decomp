/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80014854 at 0x80014854
 */
// Sys_SetupSpriteBounds2



void Sys_SetupSpriteBounds2(int param_1,short *param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 2;
  uVar1 = Sys_SetupSpriteBounds2((int)*param_2,(int)param_2[1]);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}
