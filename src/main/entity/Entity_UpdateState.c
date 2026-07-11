/**
 * @brief Updates entity state machine
 * @note Original address: 0x800726D4
 */
// Entity_UpdateState

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Entity_UpdateState(int param_1)

{
  undefined1 *puVar1;
  short sVar2;
  short sVar3;
  uint *puVar4;
  int iVar5;
  undefined1 uVar6;
  
  puVar4 = _DAT_800bf544;
  sVar2 = **(short **)(param_1 + 0x10);
  sVar3 = **(short **)(param_1 + 0x10);
  if (-1 < sVar2) {
    puVar1 = (undefined1 *)((int)_DAT_800bf544 + 3);
    _DAT_800bf544 = _DAT_800bf544 + 4;
    *puVar1 = 3;
    *(undefined1 *)((int)puVar4 + 7) = 0x60;
    uVar6 = (undefined1)sVar3;
    *(undefined1 *)((int)puVar4 + 6) = uVar6;
    *(undefined1 *)((int)puVar4 + 5) = uVar6;
    puVar4->flags = uVar6;
    if (sVar2 != 0xff) {
      *(undefined1 *)((int)puVar4 + 7) = 0x62;
    }
    *(undefined2 *)(puVar4 + 3) = 0x140;
    *(undefined2 *)((int)puVar4 + 10) = 0;
    *(undefined2 *)(puVar4 + 2) = 0;
    *(undefined2 *)((int)puVar4 + 0xe) = 0xf0;
    iVar5 = _DAT_800ed8c8;
    *puVar4 = *(uint *)(_DAT_800ed8c8 + 0x28) | 0x3000000;
    *(uint **)(iVar5 + 0x28) = puVar4;
    puVar4 = _DAT_800bf544;
    FUN_80083de0(_DAT_800bf544,0,0,0,0);
    iVar5 = _DAT_800ed8c8;
    *puVar4 = *(uint *)(_DAT_800ed8c8 + 0x28) | 0x2000000;
    *(uint **)(iVar5 + 0x28) = puVar4;
    _DAT_800bf544 = _DAT_800bf544 + 3;
  }
  return;
}

