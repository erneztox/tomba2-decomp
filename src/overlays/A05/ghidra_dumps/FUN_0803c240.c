// FUN_0803c240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803c240(void)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short local_30 [4];
  
  iVar5 = 0;
  iVar6 = 0x400;
  do {
    puVar1 = _DAT_800bf544;
    iVar2 = iVar5 * 3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    sVar7 = ((ushort)iVar2 & 0x3c) * 4 + 0x280;
    local_30[1] = 0x100;
    local_30[2] = 0x10;
    local_30[3] = 0x4e;
    local_30[0] = sVar7;
    func_0x00083ce0(_DAT_800bf544,local_30,0x2f0,0xb2);
    puVar4 = puVar1 + 6;
    puVar3 = (uint *)(iVar6 + _DAT_800ed8c8);
    _DAT_800bf544 = puVar4;
    *puVar1 = *puVar1 & 0xff000000 | *puVar3 & 0xffffff;
    *puVar3 = *puVar3 & 0xff000000 | (uint)puVar1 & 0xffffff;
    local_30[1] = 0x180;
    local_30[2] = 0x10;
    local_30[3] = 0x4c;
    local_30[0] = sVar7;
    func_0x00083ce0(puVar4,local_30,0x230,0x1b4);
    iVar5 = iVar5 + 1;
    _DAT_800bf544 = puVar1 + 0xc;
    puVar3 = (uint *)(iVar6 + _DAT_800ed8c8);
    iVar6 = iVar6 + 0xc0;
    puVar1[6] = puVar1[6] & 0xff000000 | *puVar3 & 0xffffff;
    *puVar3 = *puVar3 & 0xff000000 | (uint)puVar4 & 0xffffff;
    puVar1 = _DAT_800bf544;
  } while (iVar5 < 0x10);
  local_30[1] = 0x100;
  local_30[0] = 0x370;
  local_30[2] = 0x10;
  local_30[3] = 0x4e;
  func_0x00083ce0(_DAT_800bf544,local_30,0x2f0,0xb2);
  iVar5 = _DAT_800ed8c8;
  puVar3 = puVar1 + 6;
  _DAT_800bf544 = puVar3;
  *puVar1 = *puVar1 & 0xff000000 | *(uint *)(_DAT_800ed8c8 + 0x1ffc) & 0xffffff;
  *(uint *)(iVar5 + 0x1ffc) = *(uint *)(iVar5 + 0x1ffc) & 0xff000000 | (uint)puVar1 & 0xffffff;
  local_30[1] = 0x180;
  local_30[0] = 0x370;
  local_30[2] = 0x10;
  local_30[3] = 0x4c;
  func_0x00083ce0(puVar3,local_30,0x230,0x1b4);
  iVar5 = _DAT_800ed8c8;
  puVar1[6] = puVar1[6] & 0xff000000 | *(uint *)(_DAT_800ed8c8 + 0x1ffc) & 0xffffff;
  _DAT_800bf544 = puVar1 + 0xc;
  *(uint *)(iVar5 + 0x1ffc) = *(uint *)(iVar5 + 0x1ffc) & 0xff000000 | (uint)puVar3 & 0xffffff;
  return;
}

