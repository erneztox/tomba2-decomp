/**
 * @brief Dispatches level-specific draw function from table at 0x8009D22C by game state
 * @note Original: func_80024CF4 at 0x80024CF4
 */
// Engine_DispatchLevelDraw



void FUN_80024cf4(void)

{
  (**(code **)(&DAT_8009d22c + (uint)DAT_800bf870 * 4))();
  return;
}
