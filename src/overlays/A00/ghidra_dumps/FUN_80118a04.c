// FUN_80118a04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80118a04(int param_1)

{
  int iVar1;
  int unaff_s0;
  
  if (param_1 != 0) {
    FUN_80121b30();
    return;
  }
  iVar1 = func_0x800519e0();
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_s0 + 0x3c) = _DAT_800ecfd0;
    func_0x80077c40();
    *(undefined2 *)(unaff_s0 + 0x80) = 0x8c;
    *(undefined2 *)(unaff_s0 + 0x82) = 0x118;
    *(undefined2 *)(unaff_s0 + 0x84) = 0x80;
    *(undefined2 *)(unaff_s0 + 0x86) = 0x100;
    *(undefined1 *)(unaff_s0 + 0xb) = 0;
    *(undefined1 *)(unaff_s0 + 0x2b) = 0;
    *(undefined2 *)(unaff_s0 + 0x44) = 0x180;
    *(undefined1 *)(unaff_s0 + 0x47) = 0;
    *(char *)(unaff_s0 + 4) = *(char *)(unaff_s0 + 4) + '\x01';
    FUN_80121b30();
    return;
  }
  return;
}

