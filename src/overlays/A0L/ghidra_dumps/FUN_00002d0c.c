// FUN_00002d0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002d0c(void)

{
  short sVar1;
  uint *puVar2;
  int iVar3;
  short sVar4;
  uint *puVar5;
  int iVar6;
  
  puVar2 = _DAT_800bf544;
  iVar6 = 0;
  sVar1 = (short)(_DAT_1f8000f0 * -0x8e8 >> 0xc);
  sVar4 = sVar1 + 0xcc;
  *(short *)((int)_DAT_800bf544 + 0x1a) = sVar4;
  *(short *)((int)_DAT_800bf544 + 0x22) = sVar4;
  *(short *)((int)_DAT_800bf544 + 0x2e) = sVar4;
  *(short *)((int)_DAT_800bf544 + 0x36) = sVar4;
  sVar4 = sVar1 + 0x108;
  *(short *)((int)_DAT_800bf544 + 10) = sVar1 + 0x90;
  *(short *)((int)_DAT_800bf544 + 0x12) = sVar1 + 0x90;
  *(short *)((int)_DAT_800bf544 + 0x62) = sVar1 + 0x1d0;
  *(short *)((int)_DAT_800bf544 + 0x6a) = sVar1 + 0x1d0;
  _DAT_800bf544[3] = 0xf8f8a8;
  _DAT_800bf544[1] = 0xf8f8a8;
  _DAT_800bf544[7] = 0xf87c54;
  _DAT_800bf544[5] = 0xf87c54;
  *(short *)((int)_DAT_800bf544 + 0x3e) = sVar4;
  *(short *)((int)_DAT_800bf544 + 0x46) = sVar4;
  _DAT_800bf544[0xc] = 0xf87c54;
  _DAT_800bf544[10] = 0xf87c54;
  _DAT_800bf544[0x10] = 0xba3e2a;
  _DAT_800bf544[0xe] = 0xba3e2a;
  *(short *)((int)_DAT_800bf544 + 0x52) = sVar4;
  *(short *)((int)_DAT_800bf544 + 0x5a) = sVar4;
  _DAT_800bf544[0x15] = 0xba3e2a;
  _DAT_800bf544[0x13] = 0xba3e2a;
  _DAT_800bf544[0x19] = 0x7c0000;
  _DAT_800bf544[0x17] = 0x7c0000;
  puVar5 = _DAT_800bf544;
  do {
    *(undefined1 *)((int)puVar5 + 7) = 0x38;
    *(undefined2 *)(puVar5 + 2) = 0;
    *(undefined2 *)(puVar5 + 4) = 0x140;
    *(undefined2 *)(puVar5 + 6) = 0;
    *(undefined2 *)(puVar5 + 8) = 0x140;
    iVar3 = _DAT_800ed8c8;
    *puVar5 = *(uint *)(_DAT_800ed8c8 + 0x1ff8) | 0x8000000;
    *(uint **)(iVar3 + 0x1ff8) = puVar5;
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 9;
  } while (iVar6 < 3);
  puVar5 = _DAT_800bf544 + 0x1b;
  _DAT_800bf544 = puVar5;
  func_0x00083de0(puVar5,0,1,0,0);
  iVar6 = _DAT_800ed8c8;
  *puVar5 = *(uint *)(_DAT_800ed8c8 + 0x1ff8) | 0x2000000;
  *(uint **)(iVar6 + 0x1ff8) = puVar5;
  _DAT_800bf544 = puVar2 + 0x1e;
  return;
}

