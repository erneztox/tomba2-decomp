/**
 * @brief UI element updater: checks _DAT_800e7fee, updates element state
 * @note Original: func_80049E54 at 0x80049E54
 */
// UI_ElementUpdate



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80049e54(int param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar2 = _DAT_800e7fee;
  if (*(char *)(param_1 + 7) == '\0') {
    if ((short)_DAT_800e7fee < 1) {
      uVar4 = 0;
    }
    else {
      *(undefined1 *)(param_1 + 7) = 1;
      *(undefined2 *)(param_1 + 0x40) = 0x10;
      uVar5 = (uint)_DAT_800e7fee;
      DAT_800ed061 = DAT_800ed061 | 2;
      _DAT_800e7fee = (ushort)(uVar5 + param_2);
      bVar1 = _DAT_800e7ff0 != uVar2;
      if ((int)(uint)DAT_800bf87d <= (int)((uVar5 + param_2) * 0x10000) >> 0x10) {
        _DAT_800e7fee = (ushort)DAT_800bf87d;
      }
      _DAT_800e7ff0 = _DAT_800e7fee;
      if (bVar1) {
        _DAT_800e7ff0 = _DAT_800e7fee - 1;
      }
      FUN_80072114(param_1,param_2);
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
    if (*(char *)(param_1 + 7) == '\x01') {
      sVar3 = *(short *)(param_1 + 0x40) + -1;
      *(short *)(param_1 + 0x40) = sVar3;
      uVar4 = 0;
      if (sVar3 == -1) {
        uVar4 = 1;
        DAT_800ed061 = DAT_800ed061 & 0xfd;
      }
    }
  }
  return uVar4;
}
