// FUN_0801e100

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801e100(int param_1)

{
  short sVar1;
  
  if ((DAT_800bf816 != '\0') && (DAT_800bf817 == '\x06')) {
    func_0x0007703c();
    if (*(char *)(param_1 + 6) == '\0') {
      if (DAT_800bfa2c == '\x01') {
        func_0x00074590(0x85,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar1 = *(short *)(param_1 + 0x56) + -0x40;
      *(short *)(param_1 + 0x56) = sVar1;
      if (sVar1 < -0xa40) {
        DAT_800bfa2c = '\x02';
        *(undefined2 *)(param_1 + 0x56) = 0xf600;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
    }
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x000517f8(param_1);
    }
  }
  return;
}

