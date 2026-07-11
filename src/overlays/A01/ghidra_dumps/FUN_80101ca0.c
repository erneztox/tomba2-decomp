// FUN_80101ca0

undefined4 FUN_80101ca0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(char *)(*(int *)(param_1 + 0x158) + 0xc) == '\x04') &&
      (uVar1 = 0, *(char *)(*(int *)(param_1 + 0x158) + 2) == '\x16')) &&
     (uVar1 = FUN_8010a0f0(), -0xb7c < *(short *)(param_1 + 0x32))) {
    *(undefined2 *)(param_1 + 0x16e) = 0;
    func_0x800232f4(param_1);
  }
  return uVar1;
}

