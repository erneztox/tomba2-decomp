
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_800166c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  
  iVar3 = FUN_800163f4(_DAT_80039e04,param_1);
  iVar2 = _DAT_80039e00;
  iVar1 = _DAT_80039dfc;
  iVar5 = 0;
  if (-1 < iVar3) {
    puVar4 = (undefined2 *)((uint)*(ushort *)(param_1 + 0x70) * 8 + _DAT_80039e00);
    *(int *)(param_1 + 0x60) = _DAT_80039dfc;
    *(int *)(param_1 + 100) = iVar2;
    *(undefined2 *)(param_1 + 0x40) = *puVar4;
    *(undefined2 *)(param_1 + 0x42) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x70) * 8 + iVar2 + 2);
    *(undefined2 *)(param_1 + 0x44) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x70) * 8 + iVar2 + 4);
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)((uint)*(ushort *)(param_1 + 0x72) * 8 + iVar2)
    ;
    *(undefined2 *)(param_1 + 0x4a) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x72) * 8 + iVar2 + 2);
    *(undefined2 *)(param_1 + 0x4c) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x72) * 8 + iVar2 + 4);
    *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)((uint)*(ushort *)(param_1 + 0x74) * 8 + iVar2)
    ;
    *(undefined2 *)(param_1 + 0x52) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x74) * 8 + iVar2 + 2);
    *(undefined2 *)(param_1 + 0x54) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x74) * 8 + iVar2 + 4);
    _DAT_80039e04 = _DAT_80039e04 + iVar3;
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)((uint)*(ushort *)(param_1 + 0x76) * 8 + iVar2)
    ;
    *(undefined2 *)(param_1 + 0x5a) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x76) * 8 + iVar2 + 2);
    *(undefined2 *)(param_1 + 0x5c) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x76) * 8 + iVar2 + 4);
    *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)((uint)*(ushort *)(param_1 + 0x68) * 8 + iVar1)
    ;
    *(undefined2 *)(param_1 + 0x22) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x68) * 8 + iVar1 + 2);
    *(undefined2 *)(param_1 + 0x24) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x68) * 8 + iVar1 + 4);
    *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6a) * 8 + iVar1)
    ;
    *(undefined2 *)(param_1 + 0x2a) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6a) * 8 + iVar1 + 2);
    *(undefined2 *)(param_1 + 0x2c) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6a) * 8 + iVar1 + 4);
    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6c) * 8 + iVar1)
    ;
    *(undefined2 *)(param_1 + 0x32) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6c) * 8 + iVar1 + 2);
    *(undefined2 *)(param_1 + 0x34) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6c) * 8 + iVar1 + 4);
    *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6e) * 8 + iVar1)
    ;
    *(undefined2 *)(param_1 + 0x3a) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6e) * 8 + iVar1 + 2);
    *(undefined2 *)(param_1 + 0x3c) =
         *(undefined2 *)((uint)*(ushort *)(param_1 + 0x6e) * 8 + iVar1 + 4);
    iVar5 = param_1;
  }
  return iVar5;
}

