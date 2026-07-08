
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004fb4c(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  short local_30;
  short sStack_2e;
  short local_2c;
  undefined2 uStack_2a;
  short local_28;
  short local_26;
  undefined2 local_24;
  undefined2 local_22;
  
  puVar1 = _DAT_800bf544;
  local_30 = (short)*param_1;
  local_2c = (short)param_1[1];
  sStack_2e = (short)((uint)*param_1 >> 0x10);
  _local_30 = CONCAT22(sStack_2e,local_30 + -4);
  uStack_2a = (undefined2)((uint)param_1[1] >> 0x10);
  _local_2c = CONCAT22(uStack_2a,local_2c + 8);
  if ((*(byte *)((int)param_1 + 10) < 3) && (*(byte *)((int)param_1 + 10) != 0)) {
    local_24 = 0x140;
    local_22 = 0xf0;
    local_28 = 0;
    _DAT_800bf544 = _DAT_800bf544 + 3;
    local_26 = (ushort)DAT_1f800135 << 8;
    FUN_80081cf8(puVar1,&local_28);
    iVar2 = _DAT_800ed8c8;
    *puVar1 = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x2000000;
    *(uint **)(iVar2 + 0xc) = puVar1;
    FUN_8004eb94(param_1 + 4,
                 (int)(((uint)*(ushort *)((int)param_1 + 2) + (uint)*(byte *)((int)param_1 + 0xb)) *
                      0x10000) >> 0x10);
    if (*(char *)((int)param_1 + 10) == '\x01') {
      FUN_8004eb94((int)param_1 + 0x3d,
                   (int)(((uint)*(ushort *)((int)param_1 + 2) + (uint)*(byte *)((int)param_1 + 0xb)
                         + -8) * 0x10000) >> 0x10);
    }
    puVar1 = _DAT_800bf544;
    _DAT_800bf544 = _DAT_800bf544 + 3;
    local_28 = local_30;
    local_22 = uStack_2a;
    local_26 = sStack_2e + (ushort)DAT_1f800135 * 0x100;
    local_24 = local_2c;
    FUN_80081cf8(puVar1,&local_28);
    iVar2 = _DAT_800ed8c8;
    *puVar1 = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x2000000;
    *(uint **)(iVar2 + 0xc) = puVar1;
  }
  else {
    FUN_8004eb94(param_1 + 4,
                 (int)(((uint)*(ushort *)((int)param_1 + 2) + (uint)*(byte *)((int)param_1 + 0xb)) *
                      0x10000) >> 0x10);
  }
  FUN_8005019c(&local_30,*(undefined1 *)(param_1 + 0x22),0,3);
  return;
}

