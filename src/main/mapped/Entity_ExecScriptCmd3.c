/**
 * @brief Executes script command via FUN_800521f4 with entity[0x72-0x76] params
 * @note Original: func_800439E4 at 0x800439E4
 */
// Entity_ExecScriptCmd3



undefined4 FUN_800439e4(int param_1)

{
  FUN_800521f4(0,*(undefined1 *)(param_1 + 0x74),*(undefined1 *)(param_1 + 0x76),
               *(undefined1 *)(param_1 + 0x72));
  return 1;
}
