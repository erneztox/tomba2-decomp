// FUN_000034ec

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000034ec(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    if (*(char *)(param_1 + 0x2b) != '\x03') {
      return 0;
    }
    *(undefined1 *)(param_1 + 6) = 1;
    func_0x00042354(1,2);
    func_0x00040cdc(param_1,0x8010d904,0x8010d7b4);
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

