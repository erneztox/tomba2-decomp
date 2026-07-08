
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004fd30(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined2 local_18;
  short local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  puVar1 = _DAT_800bf544;
  if (_DAT_800bf550 != 0) {
    if (DAT_800bf549 == '\x01') {
      local_14 = 0x140;
      local_12 = 0xf0;
      local_18 = 0;
      _DAT_800bf544 = _DAT_800bf544 + 3;
      local_16 = (ushort)DAT_1f800135 << 8;
      FUN_80081cf8(puVar1,&local_18);
      iVar2 = _DAT_800ed8c8;
      *puVar1 = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x2000000;
      *(uint **)(iVar2 + 0xc) = puVar1;
    }
    iVar2 = 0;
    if (0 < _DAT_800bf550) {
      iVar3 = 0xc;
      do {
        FUN_8004fb4c(&DAT_800bf548 + iVar3);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x8c;
      } while (iVar2 < _DAT_800bf550);
    }
    puVar1 = _DAT_800bf544;
    if (DAT_800bf549 == '\x01') {
      local_18 = 0x10;
      local_14 = 0x120;
      local_12 = 0x36;
      _DAT_800bf544 = _DAT_800bf544 + 3;
      local_16 = (ushort)DAT_1f800135 * 0x100 + 0x99;
      FUN_80081cf8(puVar1,&local_18);
      iVar2 = _DAT_800ed8c8;
      *puVar1 = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x2000000;
      *(uint **)(iVar2 + 0xc) = puVar1;
    }
  }
  return;
}

