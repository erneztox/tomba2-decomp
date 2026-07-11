/**
 * @brief UI inventory updater: checks DAT_800bf87c/d state
 * @note Original: func_80049F80 at 0x80049F80
 */
// UI_InventoryUpdate



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80049f80(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 7) == '\0') {
    if (DAT_800bf87c == '\x10') {
      bVar1 = DAT_800bf87d + 1;
    }
    else {
      bVar1 = DAT_800bf87d + 1;
      if (7 < DAT_800bf87d) {
        DAT_800bf87c = DAT_800bf87c + '\x01';
        bVar1 = DAT_800bf87d;
      }
    }
    DAT_800bf87d = bVar1;
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    *(ushort *)(param_1 + 0x42) = DAT_800bf87d - _DAT_800e7fee;
    DAT_800ed061 = DAT_800ed061 | 2;
  }
  else if (*(char *)(param_1 + 7) != '\x01') {
    return 0;
  }
  if (*(short *)(param_1 + 0x42) == 0) {
    if (DAT_800bf87d == _DAT_800e7fee) {
      FUN_80072114(param_1,0);
    }
  }
  else {
    if ((short)_DAT_800e7fee < (short)(ushort)DAT_800bf87d) {
      if ((short)_DAT_800e7fee < 1) {
        *(undefined2 *)(param_1 + 0x42) = 0;
        *(undefined2 *)(param_1 + 0x40) = 0;
        return 1;
      }
      if (*(short *)(param_1 + 0x40) == 0) {
        *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + -1;
        *(undefined2 *)(param_1 + 0x40) = 4;
        _DAT_800e7ff0 = _DAT_800e7ff0 + 1;
        _DAT_800e7fee = _DAT_800e7fee + 1;
      }
      else {
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      }
      return 0;
    }
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0;
  }
  DAT_800ed061 = DAT_800ed061 & 0xfd;
  return 1;
}
