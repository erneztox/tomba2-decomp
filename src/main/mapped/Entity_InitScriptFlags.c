/**
 * @brief Sets entity script processing flags from u16: bit 0x1000=flag2, 0x4000=flag4
 * @note Original: func_80040D68 at 0x80040D68
 */
// Entity_InitScriptFlags



void FUN_80040d68(int param_1,ushort *param_2)

{
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  FUN_80040de0();
  *(undefined1 *)(param_1 + 0x71) = 0;
  if ((*param_2 & 0x1000) != 0) {
    *(undefined1 *)(param_1 + 0x71) = 2;
  }
  if ((*param_2 & 0x4000) != 0) {
    *(byte *)(param_1 + 0x71) = *(byte *)(param_1 + 0x71) | 4;
  }
  return;
}
