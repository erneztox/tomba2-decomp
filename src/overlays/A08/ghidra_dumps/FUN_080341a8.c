// FUN_080341a8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080341a8(undefined1 *param_1)

{
  if (param_1[0x71] == -1) {
    if (param_1[6] == '\0') {
      if (param_1[0x5e] == '\x05') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00041768(param_1,0xb,4);
      func_0x00074590(3,0,0);
    }
    param_1[5] = 0;
    *param_1 = 9;
  }
  return;
}

