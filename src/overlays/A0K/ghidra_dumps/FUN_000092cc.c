// FUN_000092cc

/* WARNING: Control flow encountered bad instruction data */

void FUN_000092cc(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if (DAT_800bfa28 < 7) goto LAB_00009390;
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined2 *)(param_1 + 0x4a) = 0xd000;
    *(undefined2 *)(param_1 + 0x50) = 0x180;
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bfa28 < 8) {
      sVar1 = *(short *)(param_1 + 0x4a);
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -0xc;
      *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + 0x80;
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar1 * 0x100;
LAB_00009390:
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077ebc(param_1);
      func_0x000517f8(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 4) = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

