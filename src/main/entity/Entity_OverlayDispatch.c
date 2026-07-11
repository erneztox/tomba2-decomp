/**
 * @brief Entity overlay dispatch: calls overlay func based on DAT_800bf870 state
 * @note Original: func_800662D8 at 0x800662D8
 */
// Entity_OverlayDispatch



void FUN_800662d8(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x16e) == 0) {
    param_2 = 0;
  }
  if (DAT_800bf870 == 6) {
    func_0x80110f28(param_1,param_2);
  }
  else {
    if (DAT_800bf870 < 7) {
      if (DAT_800bf870 == 0) {
        func_0x80114c5c();
        return;
      }
    }
    else if (DAT_800bf870 == 8) {
      if (DAT_800bf873 != '\0') {
        DAT_800bf871 = 0x11;
        return;
      }
      DAT_800bf871 = 1;
      return;
    }
    if ((&DAT_800a47e8)[DAT_800bf870] != -1) {
      DAT_800bf871 = (&DAT_800a47e8)[DAT_800bf870];
    }
  }
  return;
}
