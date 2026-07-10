// FUN_000317cc

/* WARNING: Control flow encountered bad instruction data */

void FUN_000317cc(int param_1)

{
  int in_v0;
  int iVar1;
  int in_v1;
  int unaff_s0;
  
  if (in_v0 == 0) {
    if (in_v1 == 5) {
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
      return;
    }
  }
  else if (in_v1 == 1) {
    iVar1 = func_0x0011c364();
    *(int *)(unaff_s0 + 0x14) = iVar1;
    if (iVar1 == 0) {
      return;
    }
    func_0x0004ed0c(0x95,4);
    func_0x0004d650(0x95,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

