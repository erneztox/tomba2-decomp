// FUN_0801efcc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801efcc(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short local_30 [4];
  
  iVar5 = 0;
  iVar7 = 0;
  do {
    puVar1 = _DAT_800bf544;
    iVar3 = iVar7 * 4;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    sVar6 = ((ushort)iVar5 & 0xf) * 0x10 + 0x280;
    local_30[1] = 0x100;
    local_30[2] = 0x10;
    local_30[3] = 0x4b;
    local_30[0] = sVar6;
    func_0x00083ce0(_DAT_800bf544,local_30,0x2f0,0xb5);
    iVar3 = ((iVar3 >> 4) + 0x100) * 4;
    puVar4 = puVar1 + 6;
    puVar2 = (uint *)(iVar3 + _DAT_800ed8c8);
    _DAT_800bf544 = puVar4;
    *puVar1 = *puVar1 & 0xff000000 | *puVar2 & 0xffffff;
    *puVar2 = *puVar2 & 0xff000000 | (uint)puVar1 & 0xffffff;
    local_30[1] = 0x180;
    local_30[2] = 0x10;
    local_30[3] = 0x4f;
    local_30[0] = sVar6;
    func_0x00083ce0(puVar4,local_30,0x230,0x1b1);
    iVar7 = iVar7 + 0xdd;
    iVar5 = iVar5 + 1;
    puVar2 = (uint *)(iVar3 + _DAT_800ed8c8);
    puVar1[6] = puVar1[6] & 0xff000000 | *puVar2 & 0xffffff;
    _DAT_800bf544 = puVar1 + 0xc;
    *puVar2 = *puVar2 & 0xff000000 | (uint)puVar4 & 0xffffff;
    puVar1 = _DAT_800bf544;
  } while (iVar5 < 0x10);
  local_30[1] = 0x100;
  local_30[0] = 0x370;
  local_30[2] = 0x10;
  local_30[3] = 0x4b;
  func_0x00083ce0(_DAT_800bf544,local_30,0x2f0,0xb5);
  iVar5 = _DAT_800ed8c8;
  puVar2 = puVar1 + 6;
  _DAT_800bf544 = puVar2;
  *puVar1 = *puVar1 & 0xff000000 | *(uint *)(_DAT_800ed8c8 + 0x1ffc) & 0xffffff;
  *(uint *)(iVar5 + 0x1ffc) = *(uint *)(iVar5 + 0x1ffc) & 0xff000000 | (uint)puVar1 & 0xffffff;
  local_30[1] = 0x180;
  local_30[0] = 0x370;
  local_30[2] = 0x10;
  local_30[3] = 0x4f;
  func_0x00083ce0(puVar2,local_30,0x230,0x1b1);
  iVar5 = _DAT_800ed8c8;
  puVar1[6] = puVar1[6] & 0xff000000 | *(uint *)(_DAT_800ed8c8 + 0x1ffc) & 0xffffff;
  _DAT_800bf544 = puVar1 + 0xc;
  *(uint *)(iVar5 + 0x1ffc) = *(uint *)(iVar5 + 0x1ffc) & 0xff000000 | (uint)puVar2 & 0xffffff;
  return;
}

