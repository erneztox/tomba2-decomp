
undefined4 FUN_8001b054(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *unaff_s0;
  byte unaff_s1;
  int unaff_s2;
  
  DAT_80026bae = 0;
  DAT_80026bad = 0;
  DAT_80026bac = 2;
  *DAT_80026b94 = 0;
  *DAT_80026ba0 = 0;
  *DAT_80026ba4 = 0x1325;
  FUN_8001a0c0(1,0,0,0);
  if ((DAT_800268dc & 0x10) != 0) {
    FUN_8001a0c0(1,0,0,0);
  }
  iVar3 = FUN_8001a0c0(10,0,0,0);
  if (((iVar3 != 0) || (iVar3 = FUN_8001a0c0(0xc,0,0,0), iVar3 != 0)) ||
     (iVar3 = FUN_80019b78(0,0), iVar3 != 2)) {
    return 0xffffffff;
  }
  if ((iRam00006b14 == 0) || (unaff_s0 != (undefined1 *)0x0)) {
    FUN_80019b78(0,0);
    if (unaff_s1 == 2) {
      iVar3 = 0;
      puVar2 = unaff_s0;
      do {
        (&DAT_800268e8)[iVar3] = *puVar2;
        iVar3 = iVar3 + 1;
        puVar2 = unaff_s0 + iVar3;
      } while (iVar3 < 4);
    }
    if (unaff_s1 == 0xe) {
      DAT_800268ec = *unaff_s0;
    }
    iVar3 = (uint)unaff_s1 * 4;
    DAT_80026bac = 0;
    if (*(int *)(&DAT_80026a14 + iVar3) != 0) {
      DAT_80026bad = 0;
    }
    *DAT_80026b94 = 0;
    iVar4 = 0;
    puVar2 = unaff_s0;
    if (0 < *(int *)(&DAT_80026b14 + iVar3)) {
      do {
        *DAT_80026b9c = *puVar2;
        iVar4 = iVar4 + 1;
        puVar2 = unaff_s0 + iVar4;
      } while (iVar4 < *(int *)(&DAT_80026b14 + iVar3));
    }
    DAT_800268ed = unaff_s1;
    *DAT_80026b98 = unaff_s1;
    uVar1 = 0;
    if (unaff_s2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_80017e4c(0xffffffff);
    }
  }
  else {
    uVar1 = 0xfffffffe;
    if (0 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(&DAT_80010764,DAT_800268f6);
    }
  }
  return uVar1;
}

