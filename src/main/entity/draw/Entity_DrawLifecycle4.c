/**
 * @brief Entity draw lifecycle variant 4: entity[4]=1, different draw path
 * @note Original: func_80033380 at 0x80033380
 */
// Entity_DrawLifecycle4



void FUN_80033380(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x2e) = 0xf95c;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 0xff;
  }
  *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + -0x42;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) - (*(byte *)(param_1 + 7) >> 2);
  if (*(short *)(param_1 + 0x30) < 500) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined **)(param_1 + 0x38) = &DAT_800a0c5c;
      *(undefined **)(param_1 + 0x34) = &DAT_800a0c5c;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}
