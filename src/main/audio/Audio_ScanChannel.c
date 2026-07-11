/**
 * @brief Audio channel scan: iterates DAT_80105cec channels, calls callback
 * @note Original: func_80095B90 at 0x80095B90
 */
// Audio_ScanChannel



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80095b90(short param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ('\0' < DAT_80105cec) {
    uVar1 = 0;
    do {
      if (((DAT_800ac3f4 & 1 << (uVar1 & 0x1f)) == 0) &&
         (*(short *)(uVar1 * 0x38 + -0x7fefab28) == param_1)) {
        _DAT_80105d10 = (ushort)uVar2 & 0xff;
        FUN_80094b50(0);
      }
      uVar2 = uVar2 + 1;
      uVar1 = uVar2 & 0xff;
    } while ((int)(uVar2 & 0xff) < (int)DAT_80105cec);
  }
  return;
}
