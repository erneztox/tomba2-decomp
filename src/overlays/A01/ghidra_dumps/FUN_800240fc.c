// FUN_800240fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800240fc(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
          >> 0x10;
  iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
          >> 0x10;
  uVar1 = FUN_80084080(iVar4 * iVar4 + iVar3 * iVar3);
  uVar2 = 0;
  if ((int)(uVar1 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    if ((int)(short)*(ushort *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
              (((uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x86)) -
              (uint)*(ushort *)(param_1 + 0x84)) & 0xffff)) {
      uVar2 = 0;
    }
    else {
      _DAT_1f80009c = FUN_80085690(-iVar3,iVar4);
      uVar2 = 1;
    }
  }
  return uVar2;
}

