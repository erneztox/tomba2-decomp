// FUN_0802fe94

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802fe94(int param_1)

{
  func_0x00051b70(param_1,0xc,0x20);
  if (DAT_800bf8e2 == -1) {
    *(undefined1 *)(param_1 + 5) = 10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x2e) = 0x3fc;
  *(undefined2 *)(param_1 + 0x36) = 0x7f0;
  return;
}

