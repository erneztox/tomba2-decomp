// FUN_0803c1f8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803c1f8(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = func_0x00134904();
  if (iVar2 < 2) {
    if (*(short *)(param_1 + 0x70) < 0x47f) {
      *(undefined2 *)(param_1 + 0x72) = 1;
      halt_baddata();
    }
  }
  else {
    sVar1 = func_0x00135230(param_1);
    if (0x1fd < sVar1) {
      if (sVar1 < 0x352) {
        *(undefined2 *)(param_1 + 0x72) = 1;
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x72) = 0;
      func_0x00135630(param_1,*(short *)(param_1 + 0x72) + 8,4);
      return;
    }
  }
  *(undefined2 *)(param_1 + 0x72) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

