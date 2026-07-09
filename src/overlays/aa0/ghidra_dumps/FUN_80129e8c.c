// FUN_80129e8c

void FUN_80129e8c(undefined2 param_1)

{
  uint uVar1;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s0 + 0x6a) = 0;
  uVar1 = (uint)*(ushort *)(*(int *)(unaff_s0 + 0xc0) + 0x38);
  if ((int)uVar1 <= (int)*(short *)(unaff_s0 + 100)) {
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x38) = *(undefined2 *)(unaff_s0 + 100);
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) = *(undefined2 *)(unaff_s0 + 0x66);
    FUN_80133610();
    *(undefined1 *)(unaff_s0 + 5) = 3;
    *(undefined1 *)(unaff_s0 + 6) = 0;
    FUN_80132e90();
    return;
  }
  if ((uVar1 < 0xe00) && (*(short *)(unaff_s0 + 0x6a) == 0)) {
    *(undefined2 *)(unaff_s0 + 0x6a) = param_1;
    unaff_s1 = 5;
  }
  if (unaff_s1 != 0) {
    func_0x80051b04(*(undefined4 *)(unaff_s0 + 0xc0),0xc);
  }
  *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x3c) =
       *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x38);
  FUN_80133774();
  FUN_80133700();
  return;
}

