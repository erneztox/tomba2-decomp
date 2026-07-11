// FUN_80123060

/* WARNING: Control flow encountered bad instruction data */

void FUN_80123060(void)

{
  int in_v1;
  int unaff_s0;
  
  *(short *)(in_v1 + 0x3a) = *(short *)(in_v1 + 0x3a) + -0x400;
  if (*(ushort *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) < 0x400) {
    DAT_800bf9fc = DAT_800bf9fc | 1;
    func_0x80027144(*(undefined4 *)(*(int *)(unaff_s0 + 0xc0) + 0x40),unaff_s0 + 0x2c,0x400,0xc);
    func_0x80074590(0xc,0,0);
    *(undefined1 *)(unaff_s0 + 4) = 3;
    func_0x80074590(0x97,0,0);
  }
  func_0x80051844();
  *(undefined1 *)(unaff_s0 + 0x2b) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

