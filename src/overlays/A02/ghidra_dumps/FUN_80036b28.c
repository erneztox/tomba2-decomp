// FUN_80036b28

void FUN_80036b28(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_8009a600();
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*param_1 == '\n') {
        *param_2 = ' ';
      }
      else {
        *param_2 = *param_1;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  *param_2 = '\0';
  return;
}

