// FUN_00027144

/* WARNING: Control flow encountered bad instruction data */

void FUN_00027144(void)

{
  undefined2 in_v0;
  int in_v1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x84) = in_v0;
  *(undefined2 *)(unaff_s0 + 0x86) = 0xd0;
  *(undefined1 *)(unaff_s0 + 0x2b) = 0;
  *(undefined1 *)(unaff_s0 + 0x29) = 0;
  *(undefined2 *)(unaff_s0 + 0x58) = 0;
  *(undefined2 *)(unaff_s0 + 0x56) = 0;
  *(undefined2 *)(unaff_s0 + 0x54) = 0;
  if (in_v1 != 0) {
    *(undefined4 *)(unaff_s0 + 0x2c) = 0x11c60000;
    *(undefined4 *)(unaff_s0 + 0x30) = 0xdf260000;
    *(undefined4 *)(unaff_s0 + 0x34) = 0x24ce0000;
    *(undefined1 *)(unaff_s0 + 0x2a) = 10;
    *(undefined2 *)(unaff_s0 + 0x56) = 0;
    *(undefined1 *)(unaff_s0 + 0x7b) = 0;
    func_0x00041718();
    *(char *)(unaff_s0 + 4) = *(char *)(unaff_s0 + 4) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

