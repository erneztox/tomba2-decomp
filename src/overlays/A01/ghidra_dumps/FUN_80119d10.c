// FUN_80119d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80119d10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (uint)*(ushort *)(param_1 + 0x44) << 0x10;
  iVar2 = func_0x80049280(param_1,(iVar2 >> 0x18) + 0x20,
                          (int)*(short *)(param_1 + 0x4a) * (iVar2 >> 0x10) >> 0x10);
  if (((iVar2 != 0) || (uVar1 = 1, -0x1f5 < (int)*(short *)(param_1 + 0x32) - (int)_DAT_1f8001a4))
     && (uVar1 = 0, *(char *)(param_1 + 0x2a) == '\x10')) {
    if (0x36d8 < *(short *)(param_1 + 0x36)) {
      *(undefined2 *)(param_1 + 0x36) = 0x36d8;
      uVar1 = FUN_80122d3c();
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

