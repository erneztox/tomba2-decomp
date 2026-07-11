// FUN_08026cec

/* WARNING: Control flow encountered bad instruction data */

void FUN_08026cec(int param_1)

{
  if ((DAT_800bf816 != '\0') && (DAT_800bf817 == *(char *)(param_1 + 3))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x88);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x8c);
  func_0x00073328();
  return;
}

