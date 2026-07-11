/**
 * @brief Entity action check: tests DAT_1f800230 + entity[0x181] + input flags
 * @note Original: func_800552EC at 0x800552EC
 */
// Entity_CheckAction



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800552ec(int param_1)

{
  if ((((DAT_1f800230 == '\0') && (*(char *)(param_1 + 0x181) == '\0')) &&
      ((_DAT_800ecf54 & 0x40) != 0)) && ((*(ushort *)(param_1 + 0x17e) & 0x7c00) != 0)) {
    if (DAT_800bf8eb != '\0') {
      return 1;
    }
    if ((byte)(&DAT_800a4550)[*(ushort *)(param_1 + 0x17e) & 0xf] >> 1 <= DAT_800bf87e) {
      return 1;
    }
  }
  return 0;
}
