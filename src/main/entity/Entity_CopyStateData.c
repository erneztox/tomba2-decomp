/**
 * @brief Entity state data copy: saves camera target at 0x800E806C/F to scratchpad
 * @note Original: func_8006E1C0 at 0x8006E1C0
 */
// Entity_CopyStateData



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006e1c0(u8 param_1)

{
  DAT_800e806f = g_CameraEntity;
  g_CameraEntity = param_1;
  DAT_800e800c = 0;
  DAT_800e800d = 0;
  _DAT_800e800e = 0;
  return;
}
