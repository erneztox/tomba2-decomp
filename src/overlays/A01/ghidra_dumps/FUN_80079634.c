// FUN_80079634

uint FUN_80079634(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char local_10 [16];
  
  iVar3 = param_1;
  pcVar4 = local_10;
  do {
    pcVar5 = pcVar4;
    iVar2 = iVar3 / 10;
    iVar3 = iVar3 % 10;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    *pcVar5 = (char)iVar3 + '0';
    pcVar4 = pcVar5 + 1;
    iVar3 = iVar2;
  } while (iVar2 != 0);
  if (param_1 < 0) {
    *pcVar4 = '-';
    pcVar4 = pcVar5 + 2;
  }
  pcVar5 = pcVar4 + -1;
  if (local_10 <= pcVar5) {
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + -1;
      *param_2 = cVar1;
      param_2 = param_2 + 1;
    } while (local_10 <= pcVar5);
  }
  *param_2 = '\0';
  return (int)pcVar4 - (int)local_10 & 0xff;
}

