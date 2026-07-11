// FUN_0803bfcc

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803bfcc(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = func_0x00135158();
  if (iVar2 == -1) {
    return;
  }
  func_0x00135574(param_1,0x14,200);
  if (*(char *)(param_1 + 6) == '\0') {
    func_0x00135630(param_1,2,4);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    sVar1 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    if (sVar1 != 1) {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 10;
    *(undefined1 *)(param_1 + 6) = 1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

