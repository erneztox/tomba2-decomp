// FUN_80111e8c

void FUN_80111e8c(undefined4 param_1,undefined2 param_2)

{
  ushort uVar1;
  int unaff_s0;
  uint unaff_s1;
  
  if (*(char *)(unaff_s0 + 0x70) != -1) {
LAB_80111ee4:
    func_0x8004190c();
    return;
  }
  if (*(byte *)(unaff_s0 + 6) == 0) {
    param_2 = 0x60fc;
    *(undefined1 *)(unaff_s0 + 0x7a) = 0;
    func_0x80040d68();
    *(undefined1 *)(unaff_s0 + 0x70) = 2;
    *(char *)(unaff_s0 + 6) = (char)unaff_s1;
  }
  else if (*(byte *)(unaff_s0 + 6) == unaff_s1) {
    *(undefined1 *)(unaff_s0 + 5) = 0;
    goto LAB_80111ee4;
  }
  *(undefined2 *)(unaff_s1 + 0x4a) = param_2;
  func_0x8007778c();
  if (*(short *)(unaff_s1 + 0x60) == 0) {
    if (*(char *)(unaff_s1 + 1) == '\0') {
      *(short *)(unaff_s1 + 0x60) = *(short *)(unaff_s1 + 0x60) + 1;
      *(undefined2 *)(unaff_s1 + 0x62) = 0x5a;
      FUN_80123f10();
      return;
    }
  }
  else {
    if (*(short *)(unaff_s1 + 0x60) != unaff_s0) {
      FUN_80123f10();
      return;
    }
    if (*(char *)(unaff_s1 + 1) != '\0') {
      *(undefined2 *)(unaff_s1 + 0x60) = 0;
      FUN_80123f10();
      return;
    }
    uVar1 = *(short *)(unaff_s1 + 0x62) - 1;
    *(ushort *)(unaff_s1 + 0x62) = uVar1;
    if ((int)((uint)uVar1 << 0x10) < 0) {
      DAT_800bf9d4 = 0;
      *(undefined1 *)(unaff_s1 + 4) = 3;
      FUN_80123f10();
      return;
    }
  }
  return;
}

