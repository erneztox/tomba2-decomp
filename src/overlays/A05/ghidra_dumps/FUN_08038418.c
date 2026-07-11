// FUN_08038418

/* WARNING: Control flow encountered bad instruction data */

void FUN_08038418(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined2 *)(param_1 + 0x40) = 0x2d;
    *(undefined2 *)(param_1 + 0x4a) = 0xe000;
    *(undefined2 *)(param_1 + 0x50) = 0x200;
    *(undefined2 *)(param_1 + 0x48) = 8;
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(short *)(*(int *)(param_1 + 0xc0) + 4) =
         *(short *)(*(int *)(param_1 + 0xc0) + 4) - *(short *)(param_1 + 0x48);
    *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = *(short *)(*(int *)(param_1 + 0xc0) + 0xc) + 0x40;
    *(short *)(*(int *)(param_1 + 200) + 4) =
         *(short *)(*(int *)(param_1 + 200) + 4) + *(short *)(param_1 + 0x48);
    *(short *)(*(int *)(param_1 + 200) + 0xc) = *(short *)(*(int *)(param_1 + 200) + 0xc) + -0x40;
    *(short *)(*(int *)(param_1 + 0xc4) + 10) = *(short *)(*(int *)(param_1 + 0xc4) + 10) + -0x20;
    *(short *)(*(int *)(param_1 + 0xc4) + 0xc) = *(short *)(*(int *)(param_1 + 0xc4) + 0xc) + -0x40;
    sVar1 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar1;
    if (sVar1 != 0) {
      if (sVar1 == 0x28) {
        func_0x00074590(0x2d,8,0);
      }
      func_0x000517f8(param_1);
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 4) = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

