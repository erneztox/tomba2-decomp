/**
 * @brief Dispatches entity action: calls overlay func or local handler based on flags
 * @note Original: func_8005A910 at 0x8005A910
 */
// Entity_DispatchAction



void FUN_8005a910(int param_1)

{
  if (((DAT_800bf816 == '\0') && (*(char *)(param_1 + 0x17c) != '\0')) &&
     ((*(ushort *)(param_1 + 0x17e) & 0x640) == 0)) {
    func_0x80112b50();
  }
  else {
    FUN_8005a970();
  }
  return;
}
