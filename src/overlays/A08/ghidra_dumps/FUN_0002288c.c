// FUN_0002288c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0002288c(void)

{
  short in_v0;
  int unaff_s0;
  
  *(short *)(unaff_s0 + 0x32) = in_v0 + 6;
  if (*(short *)(unaff_s0 + 0x62) <= (short)(in_v0 + 6)) {
    *(undefined2 *)(unaff_s0 + 0x32) = *(undefined2 *)(unaff_s0 + 0x62);
    *(undefined1 *)(unaff_s0 + 5) = 0;
    *(undefined1 *)(unaff_s0 + 6) = 0;
    func_0x00077cfc();
  }
  func_0x000518fc();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

