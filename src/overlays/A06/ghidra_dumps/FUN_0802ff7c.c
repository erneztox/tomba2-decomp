// FUN_0802ff7c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0802ff7c(void)

{
  int in_v0;
  int in_v1;
  int unaff_s0;
  
  *(int *)(unaff_s0 + 0x30) = in_v1 + in_v0 * 0x100;
  *(short *)(unaff_s0 + 0x4a) = *(short *)(unaff_s0 + 0x4a) + *(short *)(unaff_s0 + 0x50);
  if (*(short *)(unaff_s0 + 0x66) <= *(short *)(unaff_s0 + 0x32)) {
    *(undefined2 *)(unaff_s0 + 0x32) = *(undefined2 *)(unaff_s0 + 0x66);
    *(undefined1 *)(unaff_s0 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

