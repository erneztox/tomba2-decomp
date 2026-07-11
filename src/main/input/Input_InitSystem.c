/**
 * @brief Initializes input/pad system: resets flag, calls FUN_8001cf2c, FUN_80074b44, FUN_80074e48
 * @note Original: func_80074BC4 at 0x80074BC4
 */
// Input_InitSystem



void FUN_80074bc4(void)

{
  DAT_1f80027e = 0;
  FUN_8001cf2c();
  FUN_80074b44();
  FUN_80074e48();
  return;
}
