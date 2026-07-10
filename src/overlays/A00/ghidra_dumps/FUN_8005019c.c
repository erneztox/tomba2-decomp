// FUN_8005019c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8005019c(short *param_1,ushort param_2,char param_3,int param_4)

{
  undefined1 *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  uint *puVar5;
  ushort uVar6;
  uint *puVar7;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  
  puVar5 = _DAT_800bf544;
  if ((param_2 & 0x40) == 0) {
    param_2 = param_2 + 6;
    if (param_3 != '\0') {
      param_2 = param_2 | 0x80;
    }
  }
  else {
    param_2 = param_2 + 0xd;
  }
  local_22 = 8;
  local_24 = 8;
  sVar2 = *param_1;
  sVar3 = param_1[1];
  puVar1 = (undefined1 *)((int)_DAT_800bf544 + 7);
  _DAT_800bf544 = _DAT_800bf544 + 4;
  *puVar1 = 0x74;
  if ((param_2 & 0x80) != 0) {
    *(undefined1 *)((int)puVar5 + 7) = 0x76;
  }
  if ((param_2 & 0x40) == 0) {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3e;
  }
  else {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3f;
  }
  *(ushort *)((int)puVar5 + 0xe) = uVar6;
  if ((param_2 & 0x20) == 0) {
    *(byte *)((int)puVar5 + 7) = *(byte *)((int)puVar5 + 7) | 1;
  }
  else {
    *(undefined1 *)((int)puVar5 + 6) = 0x40;
    *(undefined1 *)((int)puVar5 + 5) = 0x40;
    *(undefined1 *)(puVar5 + 1) = 0x40;
  }
  *(short *)(puVar5 + 2) = sVar2 + -8;
  *(undefined1 *)(puVar5 + 3) = 0xb8;
  *(undefined1 *)((int)puVar5 + 0xd) = 0x88;
  *(short *)((int)puVar5 + 10) = sVar3 + -8;
  puVar7 = (uint *)(_DAT_800ed8c8 + param_4 * 4);
  *puVar5 = *puVar7 | 0x3000000;
  *puVar7 = (uint)puVar5;
  puVar5 = _DAT_800bf544;
  sVar2 = *param_1;
  sVar4 = param_1[2];
  puVar1 = (undefined1 *)((int)_DAT_800bf544 + 7);
  _DAT_800bf544 = _DAT_800bf544 + 4;
  *puVar1 = 0x74;
  if ((param_2 & 0x80) != 0) {
    *(undefined1 *)((int)puVar5 + 7) = 0x76;
  }
  if ((param_2 & 0x40) == 0) {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3e;
  }
  else {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3f;
  }
  *(ushort *)((int)puVar5 + 0xe) = uVar6;
  if ((param_2 & 0x20) == 0) {
    *(byte *)((int)puVar5 + 7) = *(byte *)((int)puVar5 + 7) | 1;
  }
  else {
    *(undefined1 *)((int)puVar5 + 6) = 0x40;
    *(undefined1 *)((int)puVar5 + 5) = 0x40;
    *(undefined1 *)(puVar5 + 1) = 0x40;
  }
  *(short *)(puVar5 + 2) = sVar2 + sVar4;
  *(undefined1 *)(puVar5 + 3) = 200;
  *(undefined1 *)((int)puVar5 + 0xd) = 0x88;
  *(short *)((int)puVar5 + 10) = sVar3 + -8;
  puVar7 = (uint *)(_DAT_800ed8c8 + param_4 * 4);
  *puVar5 = *puVar7 | 0x3000000;
  *puVar7 = (uint)puVar5;
  puVar5 = _DAT_800bf544;
  sVar2 = *param_1;
  local_26 = param_1[1] + param_1[3];
  puVar1 = (undefined1 *)((int)_DAT_800bf544 + 7);
  _DAT_800bf544 = _DAT_800bf544 + 4;
  *puVar1 = 0x74;
  if ((param_2 & 0x80) != 0) {
    *(undefined1 *)((int)puVar5 + 7) = 0x76;
  }
  if ((param_2 & 0x40) == 0) {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3e;
  }
  else {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3f;
  }
  *(ushort *)((int)puVar5 + 0xe) = uVar6;
  if ((param_2 & 0x20) == 0) {
    *(byte *)((int)puVar5 + 7) = *(byte *)((int)puVar5 + 7) | 1;
  }
  else {
    *(undefined1 *)((int)puVar5 + 6) = 0x40;
    *(undefined1 *)((int)puVar5 + 5) = 0x40;
    *(undefined1 *)(puVar5 + 1) = 0x40;
  }
  *(short *)(puVar5 + 2) = sVar2 + -8;
  *(undefined1 *)(puVar5 + 3) = 0xe8;
  *(undefined1 *)((int)puVar5 + 0xd) = 0x88;
  *(short *)((int)puVar5 + 10) = local_26;
  puVar7 = (uint *)(_DAT_800ed8c8 + param_4 * 4);
  *puVar5 = *puVar7 | 0x3000000;
  *puVar7 = (uint)puVar5;
  puVar5 = _DAT_800bf544;
  local_28 = *param_1 + param_1[2];
  puVar1 = (undefined1 *)((int)_DAT_800bf544 + 7);
  _DAT_800bf544 = _DAT_800bf544 + 4;
  *puVar1 = 0x74;
  if ((param_2 & 0x80) != 0) {
    *(undefined1 *)((int)puVar5 + 7) = 0x76;
  }
  if ((param_2 & 0x40) == 0) {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3e;
  }
  else {
    uVar6 = ((param_2 & 0x1f) + 0x1f0) * 0x40 | 0x3f;
  }
  *(ushort *)((int)puVar5 + 0xe) = uVar6;
  if ((param_2 & 0x20) == 0) {
    *(byte *)((int)puVar5 + 7) = *(byte *)((int)puVar5 + 7) | 1;
  }
  else {
    *(undefined1 *)((int)puVar5 + 6) = 0x40;
    *(undefined1 *)((int)puVar5 + 5) = 0x40;
    *(undefined1 *)(puVar5 + 1) = 0x40;
  }
  *(short *)(puVar5 + 2) = local_28;
  *(undefined1 *)(puVar5 + 3) = 0xf8;
  *(undefined1 *)((int)puVar5 + 0xd) = 0x88;
  *(short *)((int)puVar5 + 10) = local_26;
  puVar7 = (uint *)(_DAT_800ed8c8 + param_4 * 4);
  *puVar5 = *puVar7 | 0x3000000;
  *puVar7 = (uint)puVar5;
  puVar5 = _DAT_800bf544;
  _DAT_800bf544 = _DAT_800bf544 + 3;
  FUN_80083de0(puVar5,0,0,0x5f,0);
  puVar7 = (uint *)(_DAT_800ed8c8 + param_4 * 4);
  *puVar5 = *puVar7 | 0x2000000;
  *puVar7 = (uint)puVar5;
  local_24 = param_1[2];
  param_2 = param_2 & 0xff;
  local_22 = 8;
  local_28 = *param_1;
  local_26 = param_1[1] + -8;
  FUN_8004ffb4(&local_28,0,param_2,param_4);
  local_26 = param_1[1] + param_1[3];
  FUN_8004ffb4(&local_28,1,param_2,param_4);
  local_24 = 8;
  local_22 = param_1[3];
  local_26 = param_1[1];
  local_28 = *param_1 + -8;
  FUN_8004ffb4(&local_28,2,param_2,param_4);
  local_28 = *param_1 + param_1[2];
  FUN_8004ffb4(&local_28,3,param_2,param_4);
  FUN_8004ffb4(param_1,4,param_2,param_4);
  return;
}

