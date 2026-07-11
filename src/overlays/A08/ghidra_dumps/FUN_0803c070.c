// FUN_0803c070

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803c070(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = func_0x00135158();
  if (iVar2 == -1) {
    return;
  }
  func_0x00135574(param_1,100,300);
  if (*(char *)(param_1 + 6) == '\0') {
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0x19,0x10);
    func_0x00135630(param_1,0,6);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    sVar1 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    if (sVar1 != 1) {
      return;
    }
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0x19,1);
    *(undefined1 *)(param_1 + 5) = 10;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 0x40) = 6;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

