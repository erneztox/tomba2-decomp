// FUN_801253e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801253e8(void)

{
  undefined2 in_v0;
  int iVar1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x42) = in_v0;
  _DAT_1f8000c0 = *(undefined2 *)(unaff_s0 + 0x2e);
  _DAT_1f8000c2 = *(undefined2 *)(unaff_s0 + 0x32);
  _DAT_1f8000c4 = *(undefined2 *)(unaff_s0 + 0x36);
  _DAT_1f8000c8 = *(undefined2 *)(unaff_s0 + 0x48);
  _DAT_1f8000cc = *(undefined2 *)(unaff_s0 + 0x4c);
  iVar1 = func_0x80072ddc();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012e478;
    func_0x8009a450();
    return;
  }
  return;
}

