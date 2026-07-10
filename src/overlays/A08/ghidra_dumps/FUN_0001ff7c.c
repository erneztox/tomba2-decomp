// FUN_0001ff7c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001ff7c(int param_1)

{
  short sVar1;
  int in_v1;
  
  if (in_v1 == 0) {
    if (cRam800bfa3b == '\x0e') {
      *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (in_v1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar1 = *(short *)(param_1 + 0x32) + 0x10;
    *(short *)(param_1 + 0x32) = sVar1;
    if (499 < sVar1) {
      cRam800bfa3b = '\x0f';
      *(undefined1 *)(param_1 + 4) = 3;
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x000517f8();
  return;
}

