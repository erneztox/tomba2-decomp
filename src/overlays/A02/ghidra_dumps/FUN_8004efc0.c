// FUN_8004efc0

char FUN_8004efc0(char *param_1,short *param_2)

{
  short sVar1;
  char cVar2;
  byte local_20 [8];
  
  cVar2 = '\0';
  *param_2 = 0;
  while( true ) {
    sVar1 = FUN_8004ea4c(param_1,local_20);
    if (*param_2 < sVar1) {
      *param_2 = sVar1;
    }
    cVar2 = cVar2 + '\x01';
    if (param_1[local_20[0]] == -1) break;
    param_1 = param_1 + local_20[0] + 1;
  }
  return cVar2;
}

