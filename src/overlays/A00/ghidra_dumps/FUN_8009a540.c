// FUN_8009a540

int FUN_8009a540(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    iVar2 = 0;
    if ((param_1 != param_2) && (iVar2 = -1, param_1 != (char *)0x0)) {
      iVar2 = 1;
    }
  }
  else {
    do {
      cVar1 = *param_1;
      if (*param_1 != *param_2) {
        return (int)*param_1 - (int)*param_2;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    iVar2 = 0;
  }
  return iVar2;
}

