// FUN_00022554

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00022554(void)

{
  int in_v0;
  int unaff_s0;
  undefined2 uStack00000012;
  short sStack00000016;
  undefined2 uStack0000001a;
  
  if (0x1800 < in_v0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((_DAT_1f80017c & 0xf) == 0) {
    uStack00000012 = *(undefined2 *)(unaff_s0 + 0x2e);
    sStack00000016 = *(short *)(unaff_s0 + 0x32) + 0x50;
    uStack0000001a = *(undefined2 *)(unaff_s0 + 0x36);
    FUN_0003116c(0x502,&stack0x00000010,0xffffffce);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0012a80c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

