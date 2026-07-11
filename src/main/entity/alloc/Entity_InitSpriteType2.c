/**
 * @brief Sets up sprite config bytes for type 2: state=2, size=2, count=2
 * @note Original: func_8002343C at 0x8002343C
 */
// Entity_InitSpriteType2



void FUN_8002343c(undefined1 *param_1)

{
  *param_1 = 2;
  param_1[4] = 2;
  param_1[5] = 2;
  param_1[6] = 0;
  return;
}
