
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80043634(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x72);
  if ((uVar1 & 0x1000) == 0) {
    iVar2 = FUN_8006fb0c(param_1,uVar1 & 0xfff);
  }
  else {
    iVar2 = FUN_8006fde8(param_1,uVar1 & 0xfff);
  }
  _DAT_800bf844 = iVar2;
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x5e) = *(undefined1 *)(param_1 + 0x74);
    *(undefined2 *)(iVar2 + 0x60) = *(undefined2 *)(param_1 + 0x76);
  }
  return 1;
}

