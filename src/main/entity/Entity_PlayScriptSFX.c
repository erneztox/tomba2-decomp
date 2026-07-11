/**
 * @brief Plays SFX from entity script data at entity[0x72-0x76]
 * @note Original: func_80043A10 at 0x80043A10
 */
// Entity_PlayScriptSFX



undefined4 FUN_80043a10(int param_1)

{
  FUN_80074590(*(undefined1 *)(param_1 + 0x72),(int)*(char *)(param_1 + 0x74),
               (int)*(char *)(param_1 + 0x76));
  return 1;
}
