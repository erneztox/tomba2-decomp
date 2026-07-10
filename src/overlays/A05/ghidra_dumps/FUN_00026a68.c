// FUN_00026a68

void FUN_00026a68(void)

{
  undefined4 in_v0;
  int unaff_s0;
  int unaff_s2;
  
  *(undefined4 *)(unaff_s2 + 0x48) = in_v0;
  if (*(byte *)(unaff_s0 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00026a8c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(unaff_s0 + 6) * 4 + -0x7fef6130))();
    return;
  }
  if (*(short *)(unaff_s0 + 0x7e) != 0) {
    func_0x0012f7c0();
  }
  func_0x000517f8();
  *(undefined1 *)(unaff_s0 + 1) = 1;
  return;
}

