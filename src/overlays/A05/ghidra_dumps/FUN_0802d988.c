// FUN_0802d988

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802d988(int param_1)

{
  short sVar1;
  undefined1 uVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined2 *)(param_1 + 0x40) = 0x5a;
    func_0x00077c40(param_1,0x80142108,9);
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    sVar1 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    if (sVar1 == 1) {
      uVar2 = func_0x00123108(param_1);
      *(undefined1 *)(param_1 + 5) = uVar2;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

