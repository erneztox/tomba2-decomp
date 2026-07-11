// FUN_08026d58

/* WARNING: Control flow encountered bad instruction data */

void FUN_08026d58(int param_1)

{
  if ((DAT_800bf816 != '\0') && (DAT_800bf817 == *(char *)(param_1 + 3))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x88);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x8c);
  func_0x00073328(param_1);
  func_0x000735f4(param_1,0x7d);
  return;
}

