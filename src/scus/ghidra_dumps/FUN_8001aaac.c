
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8001aaac(void)

{
  undefined1 uVar1;
  undefined4 in_v0;
  undefined4 uVar2;
  int in_v1;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *unaff_s6;
  
  _DAT_80039ec8 = in_v0;
  if (in_v1 != 0) {
    puVar4 = &DAT_80039ea8;
    iVar3 = 7;
    if (unaff_s6 != (undefined1 *)0x0) {
      do {
        uVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + -1;
        *unaff_s6 = uVar1;
        unaff_s6 = unaff_s6 + 1;
      } while (iVar3 != -1);
    }
    uVar2 = 0;
    if (DAT_80026bac == '\x05') {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_80017e4c(0xffffffff);
}

