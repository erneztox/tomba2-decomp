/**
 * @brief MDEC decode step: entity[0x46] state, processes macroblock
 * @note Original: func_80089508 at 0x80089508
 */
// MDEC_DecodeStep



void FUN_80089508(int param_1)

{
  byte bVar1;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  if (*(char *)(param_1 + 0x46) == '\0') {
LAB_800895a0:
    if (**(char **)(param_1 + 0x3c) != -0xd) {
      **(undefined1 **)(param_1 + 0x30) = 0xff;
      *(undefined1 *)(*(int *)(param_1 + 0x30) + 1) = 0;
      *(undefined1 *)(param_1 + 0xe8) = 0;
      *(undefined1 *)(param_1 + 0x35) = 0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x46) == '\x01') {
      bVar1 = *(byte *)(param_1 + 0x4a);
      if (10 < bVar1) {
        *(undefined1 *)(param_1 + 0x49) = 2;
        *(undefined1 *)(param_1 + 0x46) = 0xff;
        return;
      }
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x4a);
      if (10 < bVar1) {
        if (*(char *)(param_1 + 0x49) != '\0') {
          (*DAT_800abe3c)(param_1);
        }
        goto LAB_800895a0;
      }
    }
    *(byte *)(param_1 + 0x4a) = bVar1 + 1;
  }
  return;
}
