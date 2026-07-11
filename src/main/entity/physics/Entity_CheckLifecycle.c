/**
 * @brief Entity lifecycle check: tests entity[5]==3, entity[0x42]==-1 for completion
 * @note Original: func_80041F34 at 0x80041F34
 */
// Entity_CheckLifecycle



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80041f34(int param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 5) == '\x03') {
    if (*(short *)(param_1 + 0x42) == -1) {
      *(undefined2 *)(param_1 + 0x42) = 0;
    }
    if (((_DAT_800e7e68 & _DAT_1f800174) != 0) && ((*(byte *)(param_1 + 0x46) & 1) == 0)) {
      *(undefined1 *)(param_1 + 5) = 10;
      return 1;
    }
  }
  return 0;
}
