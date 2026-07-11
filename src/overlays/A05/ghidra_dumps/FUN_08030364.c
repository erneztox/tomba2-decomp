// FUN_08030364

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030364(void)

{
  int in_v0;
  undefined1 in_v1;
  undefined1 *unaff_s0;
  
  if (in_v0 == 0) {
    *unaff_s0 = in_v1;
    *(undefined2 *)(unaff_s0 + 0x7c) = 0;
    if (DAT_800bf816 == '\0') {
      func_0x0007778c();
      goto LAB_080303b8;
    }
  }
  if (DAT_800bf817 == unaff_s0[3]) {
    func_0x00077ebc();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_080303b8:
  if ((byte)unaff_s0[3] < 9) {
                    /* WARNING: Could not emulate address calculation at 0x080303d8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)(byte)unaff_s0[3] * 4 + -0x7fef62d8))();
    return;
  }
  if (unaff_s0[1] != '\0') {
    func_0x000517f8();
  }
  unaff_s0[0x29] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

