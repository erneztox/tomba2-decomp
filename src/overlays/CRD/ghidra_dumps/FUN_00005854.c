// FUN_00005854

void FUN_00005854(byte *param_1)

{
  func_0x0018d418();
  func_0x0018d26c(param_1);
  if (*param_1 - 1 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x000058ac */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((*param_1 - 1) * 4 + -0x7fe75e8c))();
    return;
  }
  return;
}

