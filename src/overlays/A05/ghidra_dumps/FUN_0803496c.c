// FUN_0803496c

void FUN_0803496c(int param_1)

{
  if ((uint)(int)*(short *)(param_1 + 0x74) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x080349a8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(short *)(param_1 + 0x74) * 4 + -0x7fef61ac))();
    return;
  }
  if ((0 < *(short *)(param_1 + 0x74)) &&
     ((int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x52) < 1)) {
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x52) = 0;
    *(undefined2 *)(param_1 + 0x74) = 0xffff;
  }
  return;
}

