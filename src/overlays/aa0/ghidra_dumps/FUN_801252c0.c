// FUN_801252c0

void FUN_801252c0(undefined4 param_1,undefined4 param_2)

{
  int unaff_s0;
  int unaff_s1;
  
  func_0x8004bd64(param_1,param_2,0,*(undefined4 *)(unaff_s1 + 0xd0));
  *(undefined1 *)(unaff_s0 + 1) = *(undefined1 *)(unaff_s1 + 1);
  if (DAT_800bf9b5 == '\x06') {
    func_0x8004d4c4(0x23,1);
    func_0x8004b0d8();
    *(undefined1 *)(unaff_s0 + 4) = 3;
  }
  return;
}

