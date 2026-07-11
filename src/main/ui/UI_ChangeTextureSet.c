/**
 * @brief Changes UI texture set: updates globals and reloads via Texture_LoadUI
 * @note Original: func_8004B4E8 at 0x8004B4E8
 */
// UI_ChangeTextureSet



void FUN_8004b4e8(s32 param_1,u8 param_2)

{
  FUN_8004d4c4(param_1,1);
  g_SpriteParam2 = param_2;
  DAT_800e7eed = param_2;
  FUN_80067da8();
  return;
}
