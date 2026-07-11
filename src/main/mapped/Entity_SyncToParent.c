/**
 * @brief Syncs entity position to parent if parent is in state 1
 * @note Original: func_8006AFC4 at 0x8006AFC4
 */
// Entity_SyncToParent



void FUN_8006afc4(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x10);
  if (((pcVar1 != (char *)0x0) && (*pcVar1 == '\x01')) && (pcVar1[4] == '\x01')) {
    *(undefined2 *)(pcVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(pcVar1 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(pcVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
  }
  return;
}
