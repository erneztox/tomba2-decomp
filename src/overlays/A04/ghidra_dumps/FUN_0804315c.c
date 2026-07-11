// FUN_0804315c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0804315c(int param_1,undefined4 param_2,int param_3)

{
  if (0 < *(short *)(param_1 + 0x50)) {
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + -0x199;
  }
  if (0x7f < *(short *)(param_3 + 4)) {
    *(undefined1 *)(param_1 + 5) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 6;
  *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x22;
  func_0x0002b278();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

