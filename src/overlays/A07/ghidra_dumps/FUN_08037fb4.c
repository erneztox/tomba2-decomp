// FUN_08037fb4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_08037fb4(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x29);
  if (cVar1 == '\0') {
    _DAT_1f8000c0 = 0;
    _DAT_1f8000c4 = 0;
    _DAT_1f8000c2 = *(short *)(param_1 + 0x86) - *(short *)(param_1 + 0x84);
    iVar2 = func_0x0012f1bc(param_1 + 0x2c,&DAT_1f8000c0,0);
    if (0 < iVar2) {
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
    cVar1 = *(char *)(param_1 + 0x29);
  }
  return cVar1;
}

