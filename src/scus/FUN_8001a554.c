
undefined4 FUN_8001a554(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 unaff_s1;
  byte *unaff_s2;
  uint unaff_s3;
  int unaff_s6;
  undefined1 *unaff_s7;
  
  *DAT_80026b94 = unaff_s1;
  if ((*unaff_s2 != unaff_s3) && (*unaff_s2 != 5)) {
    if (unaff_s6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_80017e4c(0xffffffff);
    }
    return 0;
  }
  *unaff_s2 = (byte)unaff_s3;
  puVar4 = &DAT_80039ea8;
  iVar3 = 7;
  if (unaff_s7 != (undefined1 *)0x0) {
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
      *unaff_s7 = uVar1;
      unaff_s7 = unaff_s7 + 1;
    } while (iVar3 != -1);
  }
  uVar2 = FUN_80019dc8();
  return uVar2;
}

