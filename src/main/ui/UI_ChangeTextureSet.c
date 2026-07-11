/**
 * @brief Changes UI texture set: updates globals and reloads via Texture_LoadUI
 * @note Original: func_8004B4E8 at 0x8004B4E8
 */
// UI_ChangeTextureSet



void FUN_8004b4e8(undefined4 param_1,undefined1 param_2)

{
  FUN_8004d4c4(param_1,1);
  DAT_800bf88d = param_2;
  DAT_800e7eed = param_2;
  FUN_80067da8();
  return;
}
