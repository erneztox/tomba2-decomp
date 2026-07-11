// FUN_080373d0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080373d0(undefined1 *param_1)

{
  if (param_1[6] == '\0') {
    if (param_1[0x2b] == '\x03') {
      func_0x00042354(1,2);
      func_0x00040d68(param_1,0x801463c4);
      param_1[0x70] = 1;
      param_1[5] = 1;
    }
    else {
      if (DAT_1f800207 == '\x01') {
        return;
      }
      *param_1 = 2;
      param_1[6] = param_1[6] + '\x01';
    }
  }
  else if (param_1[6] == '\x01') {
    if (DAT_1f800207 == '\x01') {
      *param_1 = 9;
      param_1[6] = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

