// FUN_0802feec

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802feec(int param_1)

{
  if (DAT_800bf8e2 == -1) {
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00051b70(param_1,0xc,0x21);
  return;
}

