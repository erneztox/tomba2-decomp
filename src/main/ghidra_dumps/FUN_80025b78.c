
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80025b78(int param_1)

{
  int iVar1;
  uint uVar2;
  short local_28;
  short local_26;
  undefined2 local_24;
  undefined2 local_22;
  
  iVar1 = _DAT_800bf544;
  local_24 = 0x140;
  local_22 = 0xf0;
  local_28 = 0;
  local_26 = (ushort)DAT_1f800135 << 8;
  FUN_80081cf8(_DAT_800bf544,&local_28);
  FUN_80083c30(_DAT_800ed8c8 + 0x20,iVar1);
  local_24 = 0;
  local_22 = 0;
  _DAT_800bf544 = _DAT_800bf544 + 0xc;
  local_26 = 0xd4;
  local_28 = *(char *)(param_1 + 6) + 0xa0;
  FUN_8007e938(*(undefined4 *)(param_1 + 0x3c),(int)local_28,0xd4,8,
               (int)*(short *)(&DAT_8009d286 +
                              (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + 8) + 0x22) * 4));
  iVar1 = *(byte *)(param_1 + 8) - 1;
  if (iVar1 < 0) {
    iVar1 = *(byte *)(param_1 + 7) - 1;
  }
  local_28 = local_28 + -0x20;
  FUN_8007e938(*(undefined4 *)(param_1 + 0x3c),(int)local_28,(int)local_26,8,
               (int)*(short *)(&DAT_8009d286 + (uint)*(byte *)(param_1 + iVar1 + 0x22) * 4));
  uVar2 = *(byte *)(param_1 + 8) + 1;
  if (*(byte *)(param_1 + 7) <= uVar2) {
    uVar2 = 0;
  }
  local_28 = local_28 + 0x40;
  FUN_8007e938(*(undefined4 *)(param_1 + 0x3c),(int)local_28,(int)local_26,8,
               (int)*(short *)(&DAT_8009d286 + (uint)*(byte *)(param_1 + uVar2 + 0x22) * 4));
  iVar1 = _DAT_800bf544;
  local_28 = 0x90;
  local_24 = 0x20;
  local_22 = 0xe0;
  local_26 = (ushort)DAT_1f800135 << 8;
  FUN_80081cf8(_DAT_800bf544,&local_28);
  FUN_80083c30(_DAT_800ed8c8 + 0x20,iVar1);
  _DAT_800bf544 = _DAT_800bf544 + 0xc;
  return;
}

