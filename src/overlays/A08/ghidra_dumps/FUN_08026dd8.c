// FUN_08026dd8

/* WARNING: Control flow encountered bad instruction data */

void FUN_08026dd8(int param_1)

{
  if (*(short *)(param_1 + 0x66) == 0) {
    func_0x0011de38();
    func_0x0011d798(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0011daa4(param_1);
  func_0x000735f4(param_1,0x7e);
  return;
}

