// FUN_800506d0

void FUN_800506d0(void)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar3 = (short *)&DAT_801fe000;
  psVar2 = (short *)&DAT_801fe002;
  do {
    if ((*psVar3 == 1) && (sVar1 = *psVar2, *psVar2 = sVar1 + -1, sVar1 == 1)) {
      *psVar3 = 2;
    }
    psVar3 = psVar3 + 0x38;
    psVar2 = psVar2 + 0x38;
  } while (psVar3 < (short *)0x801fe150);
  return;
}

