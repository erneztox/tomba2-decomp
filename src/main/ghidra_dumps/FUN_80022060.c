
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80022060(int param_1,undefined1 *param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_1f80027a == '\0') {
    iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
            >> 0x10;
    iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
            >> 0x10;
    uVar2 = FUN_80084080(iVar4 * iVar4 + iVar3 * iVar3);
    bVar1 = false;
    if (((int)(uint)uVar2 <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) &&
       (bVar1 = false,
       (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
             (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
       (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
      _DAT_1f80008c = (int)(short)uVar2;
      _DAT_1f80009c = FUN_80085690(-iVar3,iVar4);
      bVar1 = true;
    }
    if (bVar1) {
      *param_2 = 2;
      param_2[4] = 2;
      param_2[5] = 0;
      param_2[6] = 0;
      DAT_800bf81e = 0;
    }
  }
  return;
}

