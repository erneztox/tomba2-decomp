// FUN_08030bcc

/* WARNING: Control flow encountered bad instruction data */

bool FUN_08030bcc(int param_1)

{
  if (*(char *)(param_1 + 0x78) == '\0') {
    func_0x00041718(param_1,0x2e,4);
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 5) = 1;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(char *)(*(int *)(param_1 + 0x14) + 5) == '\x02';
}

