/**
 * @brief Sets up GPU draw mode: primitive[3]=2, encodes tpage, sets draw params
 * @note Original: func_80081D78 at 0x80081D78
 */
// GPU_SetupDrawMode



void FUN_80081d78(int param_1,short *param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 2;
  uVar1 = FUN_80082370((int)*param_2,(int)param_2[1]);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}
