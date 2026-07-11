/**
 * @brief Executes script command variant with different data offset
 * @note Original: func_800439A4 at 0x800439A4
 */
// Entity_ExecScriptCmd2



void FUN_800439a4(int param_1)

{
  FUN_800438d4((int)*(short *)(param_1 + 0x72),
               *(undefined1 *)(*(short *)(param_1 + 0x74) + -0x7ff4074c),
               *(undefined1 *)(param_1 + 0x76));
  return;
}
