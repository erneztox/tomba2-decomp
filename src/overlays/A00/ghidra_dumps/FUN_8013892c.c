// FUN_8013892c

/* WARNING: Control flow encountered bad instruction data */

int FUN_8013892c(void)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int unaff_s0;
  int unaff_s2;
  short unaff_s3;
  
  iVar5 = func_0x800782b0();
  bVar3 = ((unaff_s0 - iVar5) + 0x400U & 0xfff) < 0x801;
  if ((*(ushort *)(unaff_s2 + 0x62) & 1) == 0) {
    bVar4 = true;
    if (bVar3) {
      bVar4 = false;
    }
  }
  else {
    bVar4 = false;
    if (bVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (bVar4) {
    *(char *)(unaff_s2 + 7) = *(char *)(unaff_s2 + 7) + '\x01';
    iVar5 = FUN_80141980();
    return iVar5;
  }
  if ((DAT_800e7e80 & 2) != 0) {
    *(undefined1 *)(unaff_s2 + 7) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(ushort *)(unaff_s2 + 0x62) & 1) == 0) {
    *(int *)(unaff_s2 + 0x2c) =
         *(int *)(unaff_s2 + 0x2c) +
         (int)*(short *)(unaff_s2 + 0x48) * (int)*(short *)(unaff_s2 + 0x4e);
    *(int *)(unaff_s2 + 0x34) =
         *(int *)(unaff_s2 + 0x34) +
         (int)*(short *)(unaff_s2 + 0x4c) * (int)*(short *)(unaff_s2 + 0x4e);
    cVar1 = *(char *)(unaff_s2 + 0x5f);
    if (cVar1 == '\0') {
      bVar3 = false;
    }
    else {
      if (cVar1 != '\x03') {
        uVar2 = *(ushort *)(unaff_s2 + 0x62);
      }
      else {
        uVar2 = *(ushort *)(unaff_s2 + 0x62);
      }
      bVar3 = cVar1 == '\x03';
      if ((uVar2 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if (bVar3) {
      unaff_s3 = -1;
    }
    *(short *)(unaff_s2 + 0x32) = *(short *)(unaff_s2 + 0x32) + 0x10;
    FUN_801406e4();
    if ((((unaff_s3 == 0) && (*(char *)(unaff_s2 + 0x66) == -0x7f)) &&
        (*(char *)(unaff_s2 + 0x29) == '\0')) && (*(char *)(unaff_s2 + 4) == '\x01')) {
      *(undefined4 *)(unaff_s2 + 4) = 0x20501;
    }
    return (int)unaff_s3;
  }
  iVar5 = FUN_801419dc();
  return iVar5;
}

