// FUN_08023c00

/* WARNING: Control flow encountered bad instruction data */

void FUN_08023c00(int param_1,short param_2,undefined2 param_3,undefined2 param_4)

{
  func_0x00077cfc(param_1,0x80141e14,6,6);
  *(undefined1 *)(param_1 + 0xbf) = 1;
  if (*(char *)(param_1 + 0xbe) != '\0') {
    *(short *)(param_1 + 0x44) = -param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x44) = param_2;
  *(undefined2 *)(param_1 + 0x4a) = param_3;
  *(undefined2 *)(param_1 + 0x50) = param_4;
  return;
}

