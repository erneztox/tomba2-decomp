// FUN_08037610

/* WARNING: Control flow encountered bad instruction data */

void FUN_08037610(int param_1)

{
  if (*(char *)(param_1 + 0x5e) == '\x03') {
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      func_0x00042354(1,2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (*(char *)(*(int *)(param_1 + 0x14) + 0x5e) != '\0') {
    if (*(char *)(param_1 + 0x5e) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00040d68(param_1,0x80146604);
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}

