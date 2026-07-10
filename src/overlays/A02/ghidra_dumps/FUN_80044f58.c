// FUN_80044f58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80044f58(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  if (*(char *)(_DAT_1f800138 + 0x6d) == '\x02') {
    uVar2 = 4;
    if (((int)(uint)_DAT_800bfe56 >> (*(byte *)(_DAT_1f800138 + 0x6e) & 0x1f) & 1U) != 0) {
      uVar2 = 0x1a;
    }
    iVar4 = DAT_800be0f0 + (uint)*(byte *)(_DAT_1f800138 + 0x6e);
  }
  else {
    uVar2 = (uint)*(byte *)(_DAT_1f800138 + 0x6e);
    iVar4 = DAT_800be0f0;
  }
  FUN_8001dc40(&DAT_800ef478,iVar4 + uVar2,0x800);
  puVar5 = &DAT_800ef478;
  FUN_8001dc40(0x8018a000,DAT_800be0f8 + (_DAT_800ef478 >> 0xb),_DAT_800ef47c - _DAT_800ef478);
  FUN_80044e84(0x8018a000,0x1fd000);
  iVar4 = 0;
  puVar3 = (undefined4 *)&DAT_800fb170;
  do {
    puVar1 = (undefined4 *)(puVar5 + 0x100);
    puVar5 = puVar5 + 4;
    iVar4 = iVar4 + 1;
    *puVar3 = *puVar1;
    puVar3 = puVar3 + 1;
  } while (iVar4 < 0x2a);
  if (*(char *)(_DAT_1f800138 + 0x6d) == '\0') {
    DAT_1f80019b = 1;
    FUN_80051fb4();
  }
  return;
}

