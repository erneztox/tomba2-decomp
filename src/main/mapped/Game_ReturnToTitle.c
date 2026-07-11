/**
 * @brief Returns to title screen: plays SFX 0x7F, resets state, calls level cleanup
 * @note Original: func_80042310 at 0x80042310
 */
// Game_ReturnToTitle



undefined4 FUN_80042310(void)

{
  FUN_8001cf78();
  FUN_80074590(0x7f,0,0);
  DAT_1f800137 = 0;
  FUN_80074f24(DAT_800bf870);
  return 1;
}
