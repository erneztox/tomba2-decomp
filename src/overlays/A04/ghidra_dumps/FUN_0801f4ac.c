// FUN_0801f4ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f4ac(void)

{
  short sVar1;
  uint *puVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  uint *puVar6;
  int iVar7;
  
  puVar2 = _DAT_800bf544;
  iVar7 = 0;
  sVar1 = (short)(_DAT_1f8000f0 * -0x8e8 >> 0xc);
  sVar4 = sVar1 + 0x78;
  *(short *)((int)_DAT_800bf544 + 10) = sVar1 + -200;
  *(short *)((int)_DAT_800bf544 + 0x12) = sVar1 + -200;
  *(short *)((int)_DAT_800bf544 + 0x1a) = sVar1;
  *(short *)((int)_DAT_800bf544 + 0x22) = sVar1;
  *(short *)((int)_DAT_800bf544 + 0x2e) = sVar1;
  *(short *)((int)_DAT_800bf544 + 0x36) = sVar1;
  sVar5 = sVar1 + 0x168;
  *(short *)((int)_DAT_800bf544 + 0x3e) = sVar4;
  *(short *)((int)_DAT_800bf544 + 0x46) = sVar4;
  *(short *)((int)_DAT_800bf544 + 0x52) = sVar4;
  *(short *)((int)_DAT_800bf544 + 0x5a) = sVar4;
  _DAT_800bf544[3] = 0xea9898;
  _DAT_800bf544[1] = 0xea9898;
  _DAT_800bf544[7] = 0xea9898;
  _DAT_800bf544[5] = 0xea9898;
  _DAT_800bf544[0xc] = 0xea9898;
  _DAT_800bf544[10] = 0xea9898;
  _DAT_800bf544[0x10] = 0xcb4f4f;
  _DAT_800bf544[0xe] = 0xcb4f4f;
  *(short *)((int)_DAT_800bf544 + 0x62) = sVar5;
  *(short *)((int)_DAT_800bf544 + 0x6a) = sVar5;
  _DAT_800bf544[0x15] = 0xcb4f4f;
  _DAT_800bf544[0x13] = 0xcb4f4f;
  _DAT_800bf544[0x19] = 0xac0606;
  _DAT_800bf544[0x17] = 0xac0606;
  *(short *)((int)_DAT_800bf544 + 0x76) = sVar5;
  *(short *)((int)_DAT_800bf544 + 0x7e) = sVar5;
  *(short *)((int)_DAT_800bf544 + 0x86) = sVar1 + 600;
  *(short *)((int)_DAT_800bf544 + 0x8e) = sVar1 + 600;
  _DAT_800bf544[0x1e] = 0xac0606;
  _DAT_800bf544[0x1c] = 0xac0606;
  _DAT_800bf544[0x22] = 0xac0606;
  _DAT_800bf544[0x20] = 0xac0606;
  puVar6 = _DAT_800bf544;
  do {
    *(undefined1 *)((int)puVar6 + 7) = 0x38;
    *(undefined2 *)(puVar6 + 2) = 0;
    *(undefined2 *)(puVar6 + 4) = 0x140;
    *(undefined2 *)(puVar6 + 6) = 0;
    *(undefined2 *)(puVar6 + 8) = 0x140;
    iVar3 = _DAT_800ed8c8;
    *puVar6 = *(uint *)(_DAT_800ed8c8 + 0x1ffc) | 0x8000000;
    *(uint **)(iVar3 + 0x1ffc) = puVar6;
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 9;
  } while (iVar7 < 4);
  puVar6 = _DAT_800bf544 + 0x24;
  _DAT_800bf544 = puVar6;
  func_0x00083de0(puVar6,0,1,0,0);
  iVar7 = _DAT_800ed8c8;
  *puVar6 = *(uint *)(_DAT_800ed8c8 + 0x1ffc) | 0x2000000;
  *(uint **)(iVar7 + 0x1ffc) = puVar6;
  _DAT_800bf544 = puVar2 + 0x27;
  return;
}

