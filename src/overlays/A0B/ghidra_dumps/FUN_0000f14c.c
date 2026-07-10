// FUN_0000f14c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_0000f14c(int param_1)

{
  byte bVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x29);
  if (cVar2 == '\0') {
    if (*(char *)(param_1 + 0xbe) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar2 = func_0x000455c0(param_1,0,0,
                            (int)((*(ushort *)(param_1 + 0x60) + 0x800) * 0x10000) >> 0x10);
    *(char *)(param_1 + 0x29) = cVar2;
    if (cVar2 != '\0') {
      if (((int)_DAT_1f8001a6 & 0x8000U) != 0) {
        *(undefined2 *)(param_1 + 0x40) = 0;
      }
      bVar1 = *(byte *)(param_1 + 0x29);
      *(byte *)(param_1 + 0x29) = bVar1 & 1;
      if ((bVar1 & 1) != 0) {
        func_0x00049674(param_1);
        *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
      }
    }
    cVar2 = *(char *)(param_1 + 0x29);
  }
  return cVar2;
}

