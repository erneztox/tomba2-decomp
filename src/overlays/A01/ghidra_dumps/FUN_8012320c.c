// FUN_8012320c

/* WARNING: Control flow encountered bad instruction data */

void FUN_8012320c(void)

{
  int in_v1;
  undefined1 *unaff_s0;
  
  if (in_v1 < 6) {
    *unaff_s0 = 1;
    unaff_s0[4] = 1;
  }
  else if (in_v1 == 6) {
    if (unaff_s0[6] == '\0') {
      *unaff_s0 = 2;
      func_0x80042354(1,1);
      unaff_s0[6] = unaff_s0[6] + '\x01';
    }
    else if (unaff_s0[6] != '\x01') {
      FUN_8012c29c();
      return;
    }
    *(short *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) =
         *(short *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) + -0x400;
    if (*(ushort *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) < 0x400) {
      DAT_800bf9fc = DAT_800bf9fc | 1;
      func_0x80027144(*(undefined4 *)(*(int *)(unaff_s0 + 0xc0) + 0x40),unaff_s0 + 0x2c,0x400,0xc);
      func_0x80074590(0xc,0,0);
      unaff_s0[4] = 3;
      func_0x80074590(0x97,0,0);
    }
    func_0x80051844();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

