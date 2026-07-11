// FUN_0801c608

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801c608(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = func_0x000310f4(0x615,0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 3) = 1;
    *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
    *(undefined2 *)(iVar2 + 0x50) = *(undefined2 *)(*(int *)(param_1 + 0xdc) + 0x2c);
    *(undefined2 *)(iVar2 + 0x52) = *(undefined2 *)(*(int *)(param_1 + 0xdc) + 0x30);
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 0xdc) + 0x34);
    *(undefined2 *)(iVar2 + 0x58) = 0x3d80;
    *(undefined2 *)(iVar2 + 0x5a) = 0xe118;
    *(undefined2 *)(iVar2 + 0x5c) = 0x2882;
    *(undefined2 *)(iVar2 + 0x54) = uVar1;
    _DAT_800bf868 = iVar2;
    func_0x00074590(0x38,0xd,0);
  }
  return 1;
}

