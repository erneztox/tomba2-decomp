// FUN_0000b1dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000b1dc(void)

{
  short sVar1;
  uint *puVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint *puVar7;
  int iVar8;
  
  puVar2 = _DAT_800bf544;
  iVar8 = 0;
  sVar1 = (short)(_DAT_1f8000f0 * -0x8e8 >> 0xc);
  sVar4 = sVar1 + 0x78;
  *(short *)((int)_DAT_800bf544 + 10) = sVar1 + -0x78;
  *(short *)((int)_DAT_800bf544 + 0x12) = sVar1 + -0x78;
  sVar5 = sVar1 + 0x3c;
  sVar6 = sVar1 + 0xb4;
  *(short *)((int)_DAT_800bf544 + 0x1a) = sVar5;
  *(short *)((int)_DAT_800bf544 + 0x22) = sVar5;
  *(short *)((int)_DAT_800bf544 + 0x2e) = sVar5;
  *(short *)((int)_DAT_800bf544 + 0x36) = sVar5;
  *(short *)((int)_DAT_800bf544 + 0x3e) = sVar4;
  *(short *)((int)_DAT_800bf544 + 0x46) = sVar4;
  *(short *)((int)_DAT_800bf544 + 0x52) = sVar4;
  *(short *)((int)_DAT_800bf544 + 0x5a) = sVar4;
  _DAT_800bf544[3] = 0xac0606;
  _DAT_800bf544[1] = 0xac0606;
  _DAT_800bf544[7] = 0xac0606;
  _DAT_800bf544[5] = 0xac0606;
  _DAT_800bf544[0xc] = 0xac0606;
  _DAT_800bf544[10] = 0xac0606;
  _DAT_800bf544[0x10] = 0xea9898;
  _DAT_800bf544[0xe] = 0xea9898;
  *(short *)((int)_DAT_800bf544 + 0x62) = sVar6;
  *(short *)((int)_DAT_800bf544 + 0x6a) = sVar6;
  _DAT_800bf544[0x15] = 0xea9898;
  _DAT_800bf544[0x13] = 0xea9898;
  _DAT_800bf544[0x19] = 0x390000;
  _DAT_800bf544[0x17] = 0x390000;
  *(short *)((int)_DAT_800bf544 + 0x76) = sVar6;
  *(short *)((int)_DAT_800bf544 + 0x7e) = sVar6;
  *(short *)((int)_DAT_800bf544 + 0x86) = sVar1 + 600;
  *(short *)((int)_DAT_800bf544 + 0x8e) = sVar1 + 600;
  _DAT_800bf544[0x1e] = 0x390000;
  _DAT_800bf544[0x1c] = 0x390000;
  _DAT_800bf544[0x22] = 0x390000;
  _DAT_800bf544[0x20] = 0x390000;
  puVar7 = _DAT_800bf544;
  do {
    *(undefined1 *)((int)puVar7 + 7) = 0x38;
    *(undefined2 *)(puVar7 + 2) = 0;
    *(undefined2 *)(puVar7 + 4) = 0x140;
    *(undefined2 *)(puVar7 + 6) = 0;
    *(undefined2 *)(puVar7 + 8) = 0x140;
    iVar3 = _DAT_800ed8c8;
    *puVar7 = *(uint *)(_DAT_800ed8c8 + 0x1ffc) | 0x8000000;
    *(uint **)(iVar3 + 0x1ffc) = puVar7;
    iVar8 = iVar8 + 1;
    puVar7 = puVar7 + 9;
  } while (iVar8 < 4);
  puVar7 = _DAT_800bf544 + 0x24;
  _DAT_800bf544 = puVar7;
  func_0x00083de0(puVar7,0,1,0,0);
  iVar8 = _DAT_800ed8c8;
  *puVar7 = *(uint *)(_DAT_800ed8c8 + 0x1ffc) | 0x2000000;
  *(uint **)(iVar8 + 0x1ffc) = puVar7;
  _DAT_800bf544 = puVar2 + 0x27;
  func_0x00111e14();
  return;
}

