/**
 * @brief Overlay dispatcher: 0xFF=pad test, 0xFE=init, else loads overlay via Sys_LoadBinary
 * @note Original: func_800750D8 at 0x800750D8
 */
// Sys_OverlayDispatch



uint Sys_OverlayDispatch(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0xff) {
    uVar1 = DAT_800be0e4 & 4;
  }
  else if (param_1 == 0xfe) {
    uVar1 = Pad_InitReset();
  }
  else {
    Sys_LoadBinary();
    uVar1 = 0;
  }
  return uVar1;
}
