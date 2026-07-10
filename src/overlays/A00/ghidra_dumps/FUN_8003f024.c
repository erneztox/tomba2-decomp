// FUN_8003f024

void FUN_8003f024(void)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = &DAT_800ec188;
  do {
    if (*pcVar1 != '\0') {
      FUN_8003d23c(pcVar1);
    }
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0x40;
  } while (iVar2 < 0x28);
  return;
}

