// FUN_0801f4e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f4e0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint local_30;
  uint local_2c;
  int local_28;
  
  local_28 = func_0x0003f7a0(param_1,&local_30);
  iVar2 = func_0x0003f7a0(param_2,&local_2c);
  puVar4 = _DAT_800bf544;
  iVar2 = (local_28 + iVar2) / 2 + 0x10;
  uVar3 = iVar2 >> 10;
  local_28 = (iVar2 >> (uVar3 & 0x1f)) + uVar3 * 0x200;
  if (0x7fb < local_28 - 4U) {
    local_28 = -1;
  }
  if (0 < local_28) {
    _DAT_800bf544[1] = (int)param_3 / 2;
    *(undefined1 *)((int)puVar4 + 7) = 0x58;
    puVar4[3] = param_3;
    puVar4[5] = 0;
    *(undefined1 *)((int)puVar4 + 3) = 7;
    *(undefined1 *)((int)puVar4 + 0x17) = 0;
    *(undefined1 *)((int)puVar4 + 7) = 0x5a;
    puVar4[4] = (int)(local_30 + local_2c) / 2;
    puVar4[2] = local_30;
    puVar4[7] = 0x55555555;
    puVar4[6] = local_2c;
    puVar1 = _DAT_800bf544;
    puVar5 = (uint *)(local_28 * 4 + _DAT_800ed8c8);
    puVar6 = _DAT_800bf544 + 8;
    _DAT_800bf544 = puVar6;
    *puVar4 = *puVar4 & 0xff000000 | *puVar5 & 0xffffff;
    *puVar5 = *puVar5 & 0xff000000 | (uint)puVar4 & 0xffffff;
    func_0x00083de0(puVar6,0,0,0x120,0);
    puVar4 = (uint *)(local_28 * 4 + _DAT_800ed8c8);
    puVar1[8] = puVar1[8] & 0xff000000 | *puVar4 & 0xffffff;
    _DAT_800bf544 = _DAT_800bf544 + 3;
    *puVar4 = *puVar4 & 0xff000000 | (uint)puVar6 & 0xffffff;
  }
  return;
}

