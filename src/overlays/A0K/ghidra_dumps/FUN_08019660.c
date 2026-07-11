// FUN_08019660

/* WARNING: Control flow encountered bad instruction data */

void FUN_08019660(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 5) != '\0') {
    if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar1 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar1;
    if (sVar1 == -1) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -10;
    func_0x000517f8();
    return;
  }
  if (2 < DAT_800bfa28) {
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined2 *)(param_1 + 0x40) = 0x3c;
  }
  if (*(short *)(param_1 + 0x60) != 0xe) {
    if (*(short *)(param_1 + 0x60) != 0x28) goto LAB_001126b4;
    *(undefined2 *)(param_1 + 0x60) = 0;
  }
  func_0x00074590(0x1c,0xfffffff1,0xffffffce);
LAB_001126b4:
  *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

