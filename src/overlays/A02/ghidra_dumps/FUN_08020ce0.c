// FUN_08020ce0

/* WARNING: Control flow encountered bad instruction data */

void FUN_08020ce0(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    sVar2 = func_0x00119f78(param_1);
    if (sVar2 != 0) {
      if (*(short *)(param_1 + 0x40) == 0) {
        *param_1 = 1;
        param_1[5] = 0;
        param_1[6] = 2;
        *(undefined2 *)(param_1 + 0x40) = 1;
      }
      else {
        param_1[5] = 2;
        param_1[6] = 0;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_08020da4:
    param_1[0x2b] = 0;
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x00119390(param_1);
      param_1[0x2b] = 0;
    }
    else {
      param_1[0x2b] = 0;
    }
  }
  else if (bVar1 == 2) {
    func_0x0011a348(param_1);
    param_1[0x2b] = 0;
  }
  else {
    if (bVar1 == 3) {
      func_0x00119510(param_1);
      goto LAB_08020da4;
    }
    param_1[0x2b] = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

