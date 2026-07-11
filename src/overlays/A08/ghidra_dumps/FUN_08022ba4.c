// FUN_08022ba4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08022ba4(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (0 < *(short *)(param_1 + 0x4e)) {
          if ((_DAT_1f80017c & 1) != 0) {
            *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + -1;
          }
          *(undefined1 *)(param_1 + 1) = 1;
          halt_baddata();
        }
      }
      else if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624();
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 0x4e) = 0;
  }
  if ((*(short *)(param_1 + 0x4e) < 8) && ((_DAT_1f80017c & 1) != 0)) {
    *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 1;
  }
  *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

