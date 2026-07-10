// FUN_8003fc8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8003fc8c(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_800bf816 == '\x01') {
    uVar1 = 0;
    if ((ushort)DAT_800bf817 == *(ushort *)(param_1 + 0x6a)) {
      FUN_8004766c();
      FUN_80048750(param_1);
      *(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0;
      uVar1 = 1;
      *(undefined2 *)(param_1 + 0x32) = _DAT_800bf812;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

