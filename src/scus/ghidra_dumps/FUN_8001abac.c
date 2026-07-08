
undefined4 FUN_8001abac(void)

{
  byte bVar1;
  undefined1 uVar2;
  byte *in_v0;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  char *unaff_s2;
  undefined1 *unaff_s4;
  undefined1 *unaff_s6;
  
  bVar1 = *in_v0;
  do {
    uVar3 = FUN_8001961c();
    if (uVar3 == 0) {
      *DAT_80026b94 = bVar1 & 3;
      if (*unaff_s2 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_80017e4c(0xffffffff);
      }
      puVar6 = &DAT_80039ea8;
      iVar5 = 7;
      if (unaff_s6 != (undefined1 *)0x0) {
        do {
          uVar2 = *puVar6;
          puVar6 = puVar6 + 1;
          iVar5 = iVar5 + -1;
          *unaff_s6 = uVar2;
          unaff_s6 = unaff_s6 + 1;
        } while (iVar5 != -1);
      }
      uVar4 = 0;
      if (DAT_80026bac == '\x05') {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
    if (((uVar3 & 4) != 0) && (DAT_800268d4 != (code *)0x0)) {
      (*DAT_800268d4)(*unaff_s4,&DAT_80039eb0);
    }
  } while (((uVar3 & 2) == 0) || (DAT_800268d0 == (code *)0x0));
  (*DAT_800268d0)(*unaff_s2,&DAT_80039ea8);
  uVar4 = FUN_8001a3bc();
  return uVar4;
}

