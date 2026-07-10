// FUN_8004d514

void FUN_8004d514(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  
  if ((&DAT_800bfab4)[param_1] == '\0') {
    bVar1 = (&DAT_800bfbb4)[param_1];
    (&DAT_800bfbb4)[param_1] = 0;
    pcVar2 = &DAT_800a2be8;
    iVar3 = 0;
    if ((&DAT_800a2be8)[param_1 * 0xc] != '\0') {
      DAT_800bf8a1 = DAT_800bf8a1 + -1;
      do {
        if ((*pcVar2 != '\0') && (bVar1 < (byte)(&DAT_800bfbb4)[iVar3])) {
          (&DAT_800bfbb4)[iVar3] = (&DAT_800bfbb4)[iVar3] - 1;
        }
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 0xc;
      } while (iVar3 < 0x100);
      return;
    }
    DAT_800bf8a2 = DAT_800bf8a2 + -1;
    do {
      if ((*pcVar2 == '\0') && (bVar1 < (byte)(&DAT_800bfbb4)[iVar3])) {
        (&DAT_800bfbb4)[iVar3] = (&DAT_800bfbb4)[iVar3] - 1;
      }
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 0xc;
    } while (iVar3 < 0x100);
  }
  return;
}

