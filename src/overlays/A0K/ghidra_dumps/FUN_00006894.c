// FUN_00006894

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006894(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x2b) = 1;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00076d68(param_1);
  if (DAT_1f800137 == '\0') {
    *(undefined1 *)(param_1 + 0x180) = 0x14;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    func_0x00054d14(param_1,2,6);
  }
  return;
}

