
char * FUN_8007ad98(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = &DAT_80100400;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    if (*pcVar1 == '\0') {
      return pcVar1;
    }
    pcVar1 = pcVar1 + 0x4c;
  } while (iVar2 < 8);
  return (char *)0x0;
}

