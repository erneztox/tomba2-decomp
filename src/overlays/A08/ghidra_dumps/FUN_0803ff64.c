// FUN_0803ff64

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803ff64(int param_1)

{
  short sVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined2 *)(param_1 + 0x40) = 0x1e;
    func_0x00077c40(param_1,0x80149a50,9);
    *(undefined2 *)(*(int *)(param_1 + 0xd0) + 0x38) = 0x1000;
    *(undefined2 *)(*(int *)(param_1 + 0xd0) + 0x3a) = 0x1000;
    *(undefined2 *)(*(int *)(param_1 + 0xd0) + 0x3c) = 0x1000;
    bVar2 = *(byte *)(param_1 + 0x2b) & 1 ^ 1;
    *(byte *)(param_1 + 0xbe) = bVar2;
    if (bVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x60);
    *(undefined2 *)(param_1 + 0x6e) = 0xffff;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 3;
    *(undefined1 *)(param_1 + 7) = 0;
    func_0x00077cfc(param_1,0x80149a50,0,4);
  }
  return;
}

