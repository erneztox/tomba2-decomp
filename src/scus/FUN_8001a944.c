
undefined4 FUN_8001a944(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int in_v1;
  int iVar3;
  int iVar4;
  undefined1 *unaff_s0;
  byte unaff_s1;
  int unaff_s2;
  
  if (unaff_s0 == (undefined1 *)0x0) {
    uVar1 = 0xfffffffe;
    if (0 < DAT_800268d8) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(&DAT_80010764,*(undefined4 *)(&DAT_800268f4 + in_v1));
    }
  }
  else {
    FUN_80019b78(param_1,0);
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
  return uVar1;
}

