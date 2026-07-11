// FUN_080203f4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080203f4(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    sVar2 = func_0x00119d58(param_1,0);
    if (sVar2 == 0) {
      return;
    }
    if (*(short *)(param_1 + 0x40) == 0) {
      param_1[5] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[6] = param_1[6] + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(*(int *)(param_1 + 0x14) + 0x2b) != '\x02') {
        return;
      }
      *(undefined2 *)(param_1 + 0x40) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    if (param_1[0x2b] != '\x01') {
      return;
    }
    if (DAT_800bf80a != '\x01') {
      return;
    }
    if (1 < (byte)(DAT_800bf80b + 0x7dU)) {
      return;
    }
    sVar2 = func_0x00119dec(param_1);
    if (sVar2 == 0) {
      return;
    }
    *param_1 = 2;
    param_1[5] = 1;
    param_1[6] = 0;
    param_1[0x5e] = 2;
  }
  else if (bVar1 == 3) {
    sVar2 = func_0x00119d58(param_1,1);
    if (sVar2 != 0) {
      if (*(short *)(param_1 + 0x40) != 0) {
        param_1[5] = 3;
        halt_baddata();
      }
      *param_1 = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x2b) = 0;
      param_1[6] = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

