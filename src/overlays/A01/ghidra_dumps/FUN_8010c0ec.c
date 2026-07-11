// FUN_8010c0ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010c0ec(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 1) = 1;
    if (DAT_800bf9fa != '\x16') {
      *(undefined4 *)(param_1 + 0x2c) = 0x4bf60000;
      *(undefined4 *)(param_1 + 0x30) = 0xe53e0000;
      *(undefined4 *)(param_1 + 0x34) = 0x23400000;
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      FUN_80115248();
      return;
    }
    *(short *)(param_1 + 0x2e) =
         (short)((*(int *)(_DAT_800e7f50 + 0x2c) + *(int *)(_DAT_800e7f5c + 0x2c)) / 2);
    *(short *)(param_1 + 0x32) =
         (short)((*(int *)(_DAT_800e7f50 + 0x30) + *(int *)(_DAT_800e7f5c + 0x30)) / 2);
    *(short *)(param_1 + 0x36) =
         (short)((*(int *)(_DAT_800e7f50 + 0x34) + *(int *)(_DAT_800e7f5c + 0x34)) / 2);
    FUN_80115248();
    return;
  }
  if (*(char *)(param_1 + 5) != '\x01') {
    FUN_80115248();
    return;
  }
  func_0x8007778c(param_1);
  if (*(char *)(param_1 + 6) == '\0') {
    if (DAT_800bf9fa == '\x17') goto LAB_8010c294;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    iVar1 = param_1 + 0x2c;
    if (DAT_800bf9fa == '\x1a') {
      func_0x80027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),iVar1,0x800,8);
      func_0x80027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),iVar1,0x400,8);
      func_0x8003116c(0x205,iVar1,0xfffffff6);
      DAT_800bf9fa = '\x1b';
      *(undefined1 *)(param_1 + 4) = 3;
    }
LAB_8010c294:
    if (*(char *)(param_1 + 4) != '\x03') {
      FUN_80114e50(param_1);
    }
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x800517f8(param_1);
    }
    return;
  }
  return;
}

