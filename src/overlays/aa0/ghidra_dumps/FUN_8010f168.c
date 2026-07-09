// FUN_8010f168

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010f168(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int unaff_s0;
  short *unaff_s1;
  
  uVar2 = _DAT_1f800164;
  uVar1 = _DAT_1f800162;
  if (*(char *)(unaff_s0 + 5) == '\x02') {
    *(undefined2 *)(unaff_s0 + 0x2e) = _DAT_1f800160;
    *(undefined2 *)(unaff_s0 + 0x32) = uVar1;
    *(undefined2 *)(unaff_s0 + 0x36) = uVar2;
    FUN_80118194();
    return;
  }
  *(short *)(unaff_s0 + 0x2e) =
       *unaff_s1 + (short)((uint)(*(short *)(*(int *)(unaff_s0 + 0xc0) + 0x1a) * 9) >> 8);
  *(short *)(unaff_s0 + 0x32) =
       unaff_s1[1] + (short)((uint)(*(short *)(*(int *)(unaff_s0 + 0xc0) + 0x20) * 9) >> 8);
  *(short *)(unaff_s0 + 0x58) = -unaff_s1[6];
  func_0x800517f8();
  func_0x8004b374();
  return;
}

