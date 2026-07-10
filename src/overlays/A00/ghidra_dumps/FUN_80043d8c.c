// FUN_80043d8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80043d8c(int param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    _DAT_1f800190 = 0;
    if (DAT_800bf816 == param_2) {
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    }
    else if (*(short *)(param_1 + 0x74) == 0) {
      _DAT_1f800190 = _DAT_1f80016c;
    }
    else {
      _DAT_1f800190 = _DAT_1f80016e;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return 0;
    }
    if (*(short *)(param_1 + 0x76) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 2;
    }
    else {
      _DAT_1f800190 = 0;
      _DAT_1f800192 = *(undefined2 *)(param_1 + 0x74);
      DAT_800e7e85 = 0x1f;
      DAT_800e7e86 = 0;
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
  }
  else {
    if (bVar1 != 2) {
      return 0;
    }
    if (DAT_800bf816 != param_2) {
      return 0;
    }
    if (DAT_800bf80e == '\x01') {
      return 1;
    }
  }
  return 0;
}

