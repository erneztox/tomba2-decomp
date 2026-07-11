/**
 * @brief Executes script command via FUN_800438d4 with entity[0x72-0x76] params
 * @note Original: func_80043964 at 0x80043964
 */
// Entity_ExecScriptCmd1



void FUN_80043964(int param_1)

{
  FUN_800438d4((int)*(short *)(param_1 + 0x72),
               *(undefined1 *)(*(short *)(param_1 + 0x74) + -0x7ff4064c),
               *(undefined1 *)(param_1 + 0x76));
  return;
}
