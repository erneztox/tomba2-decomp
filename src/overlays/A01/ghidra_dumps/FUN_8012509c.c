// FUN_8012509c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012509c(undefined1 param_1)

{
  int iVar1;
  int in_v1;
  int unaff_s0;
  
  if (in_v1 != 0) {
    FUN_8012e1a4();
    return;
  }
  *(undefined4 *)(unaff_s0 + 0x40) = 0x801387c0;
  *(undefined4 *)(unaff_s0 + 0x3c) = 0x801387c0;
  *(undefined4 *)(unaff_s0 + 0x50) = 0x80138160;
  *(undefined1 *)(unaff_s0 + 4) = param_1;
  *(undefined1 *)(unaff_s0 + 5) = 0;
  iVar1 = func_0x8009a450();
  *(short *)(unaff_s0 + 0x2c) = (short)(iVar1 >> 5) + 0x4e0a;
  iVar1 = func_0x8009a450();
  *(short *)(unaff_s0 + 0x30) = (short)(iVar1 >> 4) + 8000;
  *(undefined2 *)(unaff_s0 + 0x2e) = 0xe890;
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  *(undefined2 *)(unaff_s0 + 0x32) = 0xa0;
  if (*(char *)(unaff_s0 + 5) == '\0') {
    if (*(short *)(unaff_s0 + 0x2e) < -0x1a0e) {
      *(undefined1 *)(unaff_s0 + 5) = 1;
      FUN_8012e144();
      return;
    }
    *(short *)(unaff_s0 + 0x2e) = *(short *)(unaff_s0 + 0x2e) + -0x1a;
    iVar1 = func_0x8009a450();
    *(short *)(unaff_s0 + 0x2c) = *(short *)(unaff_s0 + 0x2c) + -0x10 + (short)(iVar1 >> 0xb);
    iVar1 = func_0x8009a450();
    *(short *)(unaff_s0 + 0x30) = *(short *)(unaff_s0 + 0x30) + -0x10 + (short)(iVar1 >> 0xb);
    FUN_8012e144();
    return;
  }
  if (*(char *)(unaff_s0 + 5) != '\x01') {
    FUN_8012e144();
    return;
  }
  *(int *)(unaff_s0 + 0x3c) = *(int *)(unaff_s0 + 0x40);
  if (*(int *)(unaff_s0 + 0x40) == 0) {
    *(undefined1 *)(unaff_s0 + 4) = 2;
  }
  iVar1 = func_0x8002b278();
  if (iVar1 == 0) {
    func_0x80031708();
    FUN_8012e1a4();
    return;
  }
  *(short *)(unaff_s0 + 0x48) = -_DAT_1f8000f0;
  *(short *)(unaff_s0 + 0x4a) = -_DAT_1f8000f2;
  *(short *)(unaff_s0 + 0x4c) = -_DAT_1f8000f4;
  FUN_8012e1a4();
  return;
}

