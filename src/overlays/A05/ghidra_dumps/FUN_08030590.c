// FUN_08030590

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030590(int param_1)

{
  if ((DAT_800bf816 != '\0') && (DAT_800bf817 == *(char *)(param_1 + 3))) {
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x88) + -0x26d;
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x8a);
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x8c) + 0x394;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x88);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x8a);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x8c);
  func_0x00073328(param_1);
  func_0x000735f4(param_1,0x58);
  return;
}

