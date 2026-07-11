// FUN_08026f74

/* WARNING: Control flow encountered bad instruction data */

void FUN_08026f74(int param_1)

{
  if ((DAT_800bf816 != '\0') && (DAT_800bf817 == *(char *)(param_1 + 3))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x8c);
  if ((DAT_800e7ff4 & 4) != 0) {
    func_0x00073328(param_1);
  }
  func_0x000735f4(param_1,0x84);
  return;
}

