
char * FUN_8007b26c(void)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = &DAT_800ec188;
  do {
    iVar2 = iVar2 + 1;
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
      return pcVar1;
    }
    pcVar1 = pcVar1 + 0x40;
  } while (iVar2 < 0x28);
  return (char *)0x0;
}

