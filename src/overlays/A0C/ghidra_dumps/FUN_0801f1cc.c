// FUN_0801f1cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_0801f1cc(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x29);
  if (cVar1 == '\0') {
    cVar1 = func_0x000495dc(param_1,0,0);
    *(char *)(param_1 + 0x29) = cVar1;
    if ((cVar1 != '\0') && (((int)_DAT_1f8001a6 & 0x8000U) != 0)) {
      *(undefined1 *)(param_1 + 0x5e) = 1;
    }
    cVar1 = *(char *)(param_1 + 0x29);
  }
  return cVar1;
}

