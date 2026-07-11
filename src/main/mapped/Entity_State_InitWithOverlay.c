/**
 * @brief Entity state: init + load anim 0x40, conditionally calls overlay func_0x8010c780
 * @note Original: func_800653F4 at 0x800653F4
 */
// Entity_State_InitWithOverlay



void FUN_800653f4(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    FUN_80054198(param_1);
    FUN_80054d14(param_1,0x40,0);
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    return;
  }
  if (DAT_800bf870 == '\0') {
    func_0x8010c780(param_1);
  }
  return;
}
