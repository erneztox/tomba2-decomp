// FUN_0802cb84

/* WARNING: Control flow encountered bad instruction data */

bool FUN_0802cb84(int param_1)

{
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 5) = 1;
    func_0x00041718(param_1,0x19,4);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(char *)(*(int *)(param_1 + 0x14) + 0x5e) == '\0';
}

