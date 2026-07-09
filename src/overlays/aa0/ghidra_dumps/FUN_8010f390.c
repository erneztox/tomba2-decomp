// FUN_8010f390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010f390(int param_1)

{
  undefined4 uVar1;
  undefined2 in_v1;
  int unaff_s0;
  int unaff_s2;
  
  *(undefined2 *)(unaff_s2 + 0x84) = in_v1;
  if (((DAT_1f800137 == '\0') && ((ushort)(_DAT_1f800162 + 0x9c3U) < 0x3e9)) &&
     (*(short *)(param_1 + 4) == 0x1401)) {
    uVar1 = func_0x8007e038(0x66,2);
    *(undefined4 *)(unaff_s0 + 0x28) = uVar1;
    *(undefined4 *)(unaff_s0 + 0x2c) = 0x46;
    FUN_8012149c();
    return;
  }
  return;
}

