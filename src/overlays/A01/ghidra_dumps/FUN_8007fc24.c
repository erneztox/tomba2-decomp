// FUN_8007fc24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007fc24(void)

{
  undefined1 *puVar1;
  uint *puVar2;
  int iVar3;
  
  puVar2 = _DAT_800bf544;
  puVar1 = (undefined1 *)((int)_DAT_800bf544 + 7);
  _DAT_800bf544 = _DAT_800bf544 + 9;
  *puVar1 = 0x38;
  *(undefined1 *)((int)puVar2 + 6) = 0x46;
  *(undefined1 *)((int)puVar2 + 0xe) = 0x46;
  *(undefined1 *)((int)puVar2 + 0x16) = 0x46;
  *(undefined1 *)((int)puVar2 + 0x1e) = 0x10;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined1 *)((int)puVar2 + 5) = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined1 *)((int)puVar2 + 0xd) = 0;
  *(undefined1 *)(puVar2 + 5) = 0;
  *(undefined1 *)((int)puVar2 + 0x15) = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  *(undefined1 *)((int)puVar2 + 0x1d) = 0;
  *(undefined2 *)(puVar2 + 2) = 0;
  *(undefined2 *)((int)puVar2 + 10) = 0;
  *(undefined2 *)(puVar2 + 4) = 0x140;
  *(undefined2 *)((int)puVar2 + 0x12) = 0;
  *(undefined2 *)(puVar2 + 6) = 0;
  *(undefined2 *)((int)puVar2 + 0x1a) = 0xf0;
  *(undefined2 *)(puVar2 + 8) = 0x140;
  *(undefined2 *)((int)puVar2 + 0x22) = 0xf0;
  iVar3 = _DAT_800ed8c8;
  *puVar2 = *(uint *)(_DAT_800ed8c8 + 4) | 0x8000000;
  *(uint **)(iVar3 + 4) = puVar2;
  return;
}

