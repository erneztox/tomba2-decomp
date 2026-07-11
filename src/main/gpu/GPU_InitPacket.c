/**
 * @brief GPU packet init: stores 3 params + zeros at offset 4-7 in packet struct
 * @note Original: func_80083BF0 at 0x80083BF0
 */
// GPU_InitPacket



void FUN_80083bf0(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[3] = param_5;
  return;
}
