// FUN_0802f054

undefined4 FUN_0802f054(int param_1)

{
  ushort uVar1;
  int in_v0;
  
  if ((*(char *)(in_v0 + -0x7f2) == '\0') &&
     (uVar1 = *(ushort *)(param_1 + 0x72), *(ushort *)(param_1 + 0x72) = uVar1 - 1,
     0 < (int)((uint)uVar1 << 0x10))) {
    return 0;
  }
  return 1;
}

