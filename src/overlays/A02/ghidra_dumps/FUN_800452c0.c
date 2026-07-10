// FUN_800452c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800452c0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined1 uVar5;
  
  if (*(char *)(_DAT_1f800138 + 0x6d) == '\0') {
    uVar2 = 1 << (*(byte *)(_DAT_1f800138 + 0x6e) & 0x1f);
    if (((uint)DAT_1f8001ff == (uint)*(byte *)(_DAT_1f800138 + 0x6e)) &&
       ((_DAT_800bfe56 & uVar2) == (_DAT_1f800278 & uVar2))) {
      FUN_80045258((_DAT_800bf89e & 0xf) << 1,0x2f);
      DAT_1f800206 = 0;
      DAT_1f80019b = 1;
      FUN_80051fb4();
    }
  }
  FUN_8001cf2c();
  while (_DAT_801fe0e0 != 0) {
    FUN_80051f80(1);
  }
  *(undefined1 *)(_DAT_1f800138 + 0x6d) = 2;
  DAT_1f8001ff = *(undefined1 *)(_DAT_1f800138 + 0x6e);
  _DAT_1f800278 = _DAT_800bfe56;
  DAT_800bf872 = *(undefined1 *)(_DAT_1f800138 + 0x6e);
  DAT_800bf870 = *(char *)(_DAT_1f800138 + 0x6e);
  FUN_80045080(0x80108f9c,DAT_800bf870 + '\x03');
  FUN_8007566c(DAT_800bf870,_DAT_1f80022c);
  FUN_80044f58();
  DAT_800a3ec8 = _DAT_800ef480 >> 0xb;
  FUN_8001dc40(0x8018a000,DAT_800be100 + DAT_800a3ec8,_DAT_800ef484 - _DAT_800ef480);
  if (DAT_800bf89c == '\x02') {
    FUN_80045558(0);
  }
  FUN_80045258((_DAT_800bf89e & 0xf) << 1,0x2f);
  iVar1 = _DAT_800ef488;
  puVar4 = (uint *)&DAT_800ef48c;
  iVar3 = 0;
  if (0 < _DAT_800ef488) {
    do {
      iVar3 = iVar3 + 1;
      *(uint *)(&DAT_800ecf58 + (*puVar4 >> 0x18) * 4) = (*puVar4 & 0xffffff) + 0x8018a000;
      puVar4 = puVar4 + 1;
    } while (iVar3 < iVar1);
  }
  if (DAT_800bf870 == '\b') {
    _DAT_800ecf94 = _DAT_800ecf94 + 0x11000;
    uVar5 = 0x22;
    if (((8 < DAT_800bf871) && (uVar5 = 0x26, 0xf < DAT_800bf871)) &&
       (uVar5 = 0x28, DAT_800bf871 < 0x15)) {
      uVar5 = 0x24;
    }
    FUN_80045258(uVar5,8);
    DAT_800bfe60 = uVar5;
  }
  DAT_1f800206 = 1;
  DAT_1f80019b = 1;
  FUN_80051fb4();
  return;
}

