
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_80055e28(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x14a) & 1;
  *(byte *)(param_1 + 0x14a) = bVar1;
  if ((_DAT_800ecf54 & 0xa0) == 0) {
    *(byte *)(param_1 + 0x14a) = bVar1 | 2;
    *(undefined1 *)(param_1 + 0x14b) = 0;
  }
  else {
    if ((_DAT_800ecf54 & _DAT_1f80016c) == 0) {
      if ((_DAT_800ecf54 & _DAT_1f80016e) != 0) {
        *(undefined1 *)(param_1 + 0x14a) = 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x14a) = 0;
    }
    if (_DAT_800ecf48 == 7) {
      *(undefined1 *)(param_1 + 0x14b) = DAT_800ecf50;
    }
    else {
      *(undefined1 *)(param_1 + 0x14b) = 3;
    }
  }
  if ((_DAT_800ecf54 & 0x10) == 0) {
    if ((_DAT_800ecf54 & 0x40) == 0) goto LAB_80055f0c;
    bVar1 = *(byte *)(param_1 + 0x14a) | 8;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x14a) | 4;
  }
  *(byte *)(param_1 + 0x14a) = bVar1;
LAB_80055f0c:
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x14a) & 2) == 0)) {
    *(byte *)(param_1 + 0x147) = *(byte *)(param_1 + 0x14a) & 1;
    FUN_80055284(param_1);
  }
  return *(undefined1 *)(param_1 + 0x14a);
}

