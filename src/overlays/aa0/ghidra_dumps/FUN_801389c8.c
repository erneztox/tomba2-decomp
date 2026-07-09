// FUN_801389c8

/* WARNING: Control flow encountered bad instruction data */

int FUN_801389c8(int param_1,int param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  int in_v0;
  int iVar4;
  int unaff_s2;
  short unaff_s3;
  
  iVar4 = func_0x800781e0(param_3 - param_1,in_v0 - param_2);
  if (0x13f < iVar4) {
    unaff_s3 = 1;
  }
  if ((*(ushort *)(unaff_s2 + 0x62) & 1) != 0) {
    iVar4 = FUN_801419dc();
    return iVar4;
  }
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

