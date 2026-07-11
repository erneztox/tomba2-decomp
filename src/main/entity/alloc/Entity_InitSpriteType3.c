/**
 * @brief Sets up sprite config bytes for type 3: state=3, size=2, count=11
 * @note Original: func_80023528 at 0x80023528
 */
// Entity_InitSpriteType3



void FUN_80023528(undefined1 *param_1)

{
  *param_1 = 3;
  param_1[4] = 2;
  param_1[5] = 0xb;
  param_1[6] = 0;
  return;
}
