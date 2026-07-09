// FUN_801183f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801183f0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x2c) < 0x65) {
    if (*(int *)(param_1 + 0x28) == 0) {
      if ((((DAT_800e7eaa == '\x03') && (DAT_1f800137 == '\0')) &&
          ((ushort)(_DAT_1f800162 + 0x9c3U) < 0x3e9)) && (_DAT_800e7e84 == 0x1401)) {
        uVar1 = func_0x8007e038(0x66,2);
        *(undefined4 *)(param_1 + 0x28) = uVar1;
        *(undefined4 *)(param_1 + 0x2c) = 0x46;
        FUN_8012149c();
        return;
      }
    }
    else {
      if (_DAT_1f800162 < -0x9c3) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      if (DAT_800e7ea9 == -0x7f) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      uVar2 = *(int *)(param_1 + 0x2c) - 1;
      *(uint *)(param_1 + 0x2c) = uVar2;
      if (100 < uVar2) {
        *(undefined1 *)(*(int *)(param_1 + 0x28) + 4) = 2;
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
    }
  }
  else if (DAT_800e7ea9 == -0x7f) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    FUN_8012149c();
    return;
  }
  return;
}

