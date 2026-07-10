// FUN_8007fcc8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007fcc8(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 uint param_5)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  
  puVar1 = _DAT_800bf544;
  iVar3 = 1;
  if ((param_5 & 0x80) != 0) {
    iVar3 = 0x7ff;
  }
  if ((param_5 & 0x7f) == 0) {
    puVar2 = _DAT_800bf544 + 1;
    _DAT_800bf544 = _DAT_800bf544 + 4;
    *puVar2 = 0x460000;
  }
  else {
    puVar2 = _DAT_800bf544 + 1;
    _DAT_800bf544 = _DAT_800bf544 + 4;
    *puVar2 = 0;
  }
  *(undefined1 *)((int)puVar1 + 3) = 3;
  *(undefined1 *)((int)puVar1 + 7) = 0x60;
  *(undefined2 *)(puVar1 + 2) = param_1;
  *(undefined2 *)((int)puVar1 + 10) = param_2;
  *(undefined2 *)(puVar1 + 3) = param_3;
  *(undefined2 *)((int)puVar1 + 0xe) = param_4;
  puVar2 = (uint *)(_DAT_800ed8c8 + iVar3 * 4);
  *puVar1 = *puVar2 | 0x3000000;
  *puVar2 = (uint)puVar1;
  return;
}

