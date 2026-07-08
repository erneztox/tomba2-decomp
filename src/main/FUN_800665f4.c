
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800665f4(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x6a) & 0xf00;
  if (((int)*(short *)(param_1 + 0x6a) & 0x8000U) == 0) {
    return 0;
  }
  if ((uVar1 != 0x100) && (uVar1 != 0x200)) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 0x17e) & 0x100) == 0) {
    *(undefined1 *)(param_1 + 5) = 4;
    *(undefined1 *)(param_1 + 6) = 0xb;
    return 1;
  }
  if (DAT_800bf870 == '\0') {
    func_0x801140d0(param_1);
    *(undefined1 *)(param_1 + 0x144) = 0;
  }
  else {
    if (DAT_800bf870 == '\x06') {
      if ((_DAT_800bfe56 & 0x40) != 0) {
        func_0x80110dd0(param_1);
        *(undefined1 *)(param_1 + 0x144) = 0;
        goto LAB_800666d0;
      }
      *(undefined1 *)(param_1 + 5) = 4;
      *(undefined1 *)(param_1 + 6) = 0xb;
    }
    else {
      if (DAT_800bf870 == '\b') {
        func_0x8010f110(param_1);
        *(undefined1 *)(param_1 + 0x144) = 0;
        goto LAB_800666d0;
      }
      if (DAT_800bf870 == '\x0e') {
        func_0x8010a3dc(param_1);
      }
    }
    *(undefined1 *)(param_1 + 0x144) = 0;
  }
LAB_800666d0:
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x145) = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  return 1;
}

