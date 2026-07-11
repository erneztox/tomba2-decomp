/**
 * @brief Checks if action trigger conditions met: sets sub-state to 0xB
 * @note Original: func_80055C30 at 0x80055C30
 */
// Entity_CheckActionTrigger



undefined4 FUN_80055c30(int param_1)

{
  if ((*(short *)(param_1 + 0x16e) == 0) || (DAT_1f800137 != '\0')) {
    return 0;
  }
  if (((*(byte *)(param_1 + 0x29) & 0x80) != 0) && ((*(ushort *)(param_1 + 0x6a) & 0x10) != 0)) {
    *(undefined1 *)(param_1 + 5) = 0xb;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    return 1;
  }
  return 0;
}
