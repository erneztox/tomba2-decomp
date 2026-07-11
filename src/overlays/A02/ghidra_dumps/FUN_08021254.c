// FUN_08021254

/* WARNING: Control flow encountered bad instruction data */

void FUN_08021254(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 0x40) == 0) {
    sVar1 = func_0x00119694(param_1,(int)*(short *)(param_1 + 0x2e),
                            (int)((*(ushort *)(param_1 + 0x36) - 0x1c2) * 0x10000) >> 0x10);
    if (sVar1 != 0) {
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 0x5e) = 5;
    }
  }
  else {
    sVar1 = func_0x00119694(param_1,(int)*(short *)(param_1 + 0x2e),(int)*(short *)(param_1 + 0x36))
    ;
    if (sVar1 != 0) {
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

