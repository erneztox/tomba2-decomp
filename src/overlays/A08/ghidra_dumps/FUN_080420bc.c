// FUN_080420bc

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080420bc(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    if (DAT_800bf80f != '\0') {
      return 0;
    }
    *(undefined1 *)(param_1 + 6) = 1;
    func_0x00042354(1,2);
    func_0x00040cdc(param_1,0x80148790,0x801478e4);
    *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 6) == '\x01') {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x00042310();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

