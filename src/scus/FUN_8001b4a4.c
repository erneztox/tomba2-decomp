
void FUN_8001b4a4(void)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *DAT_80026b94;
  do {
    uVar2 = FUN_8001961c();
    if (uVar2 == 0) {
      *DAT_80026b94 = bVar1 & 3;
      return;
    }
    if (((uVar2 & 4) != 0) && (DAT_800268d4 != (code *)0x0)) {
      (*DAT_800268d4)(DAT_80026bad,&DAT_80039eb0);
    }
  } while (((uVar2 & 2) == 0) || (DAT_800268d0 == (code *)0x0));
  (*DAT_800268d0)(DAT_80026bac,&DAT_80039ea8);
  FUN_8001acd8();
  return;
}

