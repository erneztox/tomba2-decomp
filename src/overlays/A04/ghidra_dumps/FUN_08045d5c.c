// FUN_08045d5c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08045d5c(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      func_0x0004d4c4(0x75,1);
      func_0x00040b48(0x6d);
      *(undefined1 *)(param_1 + 4) = 3;
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x40) = 0x3c;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x62) = 0xffe0;
    *(undefined2 *)(param_1 + 100) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  sVar2 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar2 + -1;
  if (sVar2 == 1) {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  func_0x0004bd64(param_1,1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xdc),0,param_1 + 0x60);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

