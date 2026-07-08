
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004514c(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  FUN_8001dc40(0x80157000,DAT_800be110,DAT_800be114);
  FUN_80044f58();
  iVar4 = _DAT_800ef484 - _DAT_800ef480;
  FUN_8001dc40(0x80158000,DAT_800be100 + (_DAT_800ef480 >> 0xb),iVar4);
  iVar1 = _DAT_800ef488;
  puVar3 = (uint *)&DAT_800ef48c;
  iVar2 = 0;
  _DAT_1f800228 = iVar4 + -0x7fea8000;
  _DAT_800ed014 = _DAT_1f800228;
  if (0 < _DAT_800ef488) {
    do {
      iVar2 = iVar2 + 1;
      *(uint *)(&DAT_800ecf58 + (*puVar3 >> 0x18) * 4) = (*puVar3 & 0xffffff) + 0x80158000;
      puVar3 = puVar3 + 1;
    } while (iVar2 < iVar1);
  }
  _DAT_1f80022c = FUN_800754f4(0x80182000);
  DAT_1f80019b = 1;
  FUN_80051fb4();
  return;
}

