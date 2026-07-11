// FUN_08041694

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08041694(int param_1)

{
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined1 *)(param_1 + 0x5f) = 2;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    if (*(char *)(param_1 + 0x5f) != '\x03') {
      return 0;
    }
    func_0x00041718(param_1,0,0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

