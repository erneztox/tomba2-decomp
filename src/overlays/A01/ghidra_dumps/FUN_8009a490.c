// FUN_8009a490

char * FUN_8009a490(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_1 != (char *)0x0) {
    if (param_2 == (char *)0x0) {
      return (char *)0x0;
    }
    iVar2 = FUN_8009a600(param_1);
    iVar3 = FUN_8009a600(param_2);
    if (param_1 + iVar2 != param_2 + iVar3) {
      cVar1 = *param_1;
      pcVar4 = param_1;
      while (cVar1 != '\0') {
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
      }
      do {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      return param_1;
    }
  }
  return (char *)0x0;
}

