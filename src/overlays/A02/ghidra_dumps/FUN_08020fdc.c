// FUN_08020fdc

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08020fdc(int param_1)

{
  func_0x00041098();
  if (*(char *)(param_1 + 0x71) != -1) {
    return 0;
  }
  if (*(char *)(param_1 + 6) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00040d68(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7fed6048));
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

