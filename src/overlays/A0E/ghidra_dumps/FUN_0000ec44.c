// FUN_0000ec44

/* WARNING: Control flow encountered bad instruction data */

char FUN_0000ec44(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x5f);
  if (cVar1 == '\0') {
    if (-1 < *(short *)(param_1 + 0x44)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x000468ac(param_1,(int)-*(short *)(param_1 + 0x80),0,
                            (int)*(short *)(param_1 + 0x60));
    if (iVar2 != 0) {
      *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0xbe) | 1;
      *(undefined2 *)(param_1 + 100) = 0;
    }
    cVar1 = *(char *)(param_1 + 0x5f);
  }
  return cVar1;
}

