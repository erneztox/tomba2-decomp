// FUN_08033a44

/* WARNING: Control flow encountered bad instruction data */

char FUN_08033a44(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x5f);
  if (cVar1 == '\0') {
    if (-1 < *(short *)(param_1 + 0x44)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x00045cac(param_1,(int)-*(short *)(param_1 + 0x80),
                            (int)((((uint)*(ushort *)(param_1 + 0x86) -
                                   (uint)*(ushort *)(param_1 + 0x84)) + -0x18) * 0x10000) >> 0x10,
                            (int)*(short *)(param_1 + 0x60));
    if (iVar2 != 0) {
      *(char *)(param_1 + 0x5f) = *(char *)(param_1 + 0xbe) + '\x02';
    }
    cVar1 = *(char *)(param_1 + 0x5f);
  }
  return cVar1;
}

