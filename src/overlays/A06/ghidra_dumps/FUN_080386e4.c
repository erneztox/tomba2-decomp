// FUN_080386e4

char FUN_080386e4(int param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  
  cVar1 = *(char *)(param_1 + 0x29);
  if (cVar1 == '\0') {
    cVar1 = func_0x00049250(param_1,0,0xc0);
    *(char *)(param_1 + 0x5f) = cVar1;
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x29) = 4;
      if (*(char *)(param_1 + 0x5f) == '\x02') {
        return '\x04';
      }
      *(undefined1 *)(param_1 + 0x5f) = 0;
    }
    bVar3 = *(byte *)(param_1 + 0x29);
    iVar2 = func_0x0004954c(param_1,0x30,0x60);
    bVar3 = bVar3 | iVar2 != 0;
    *(byte *)(param_1 + 0x29) = bVar3;
    iVar2 = func_0x0004954c(param_1,0x30,0xffffff60);
    bVar3 = bVar3 | iVar2 != 0;
    *(byte *)(param_1 + 0x29) = bVar3;
    iVar2 = func_0x000493e8(param_1,0,0xfffffec0);
    if (iVar2 != 0) {
      bVar3 = bVar3 | 2;
    }
    *(byte *)(param_1 + 0x29) = bVar3;
    cVar1 = *(char *)(param_1 + 0x29);
  }
  return cVar1;
}

