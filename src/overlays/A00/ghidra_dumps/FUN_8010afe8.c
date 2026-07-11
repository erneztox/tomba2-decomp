// FUN_8010afe8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_8010afe8(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int unaff_s0;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  undefined4 *unaff_s7;
  
  iVar3 = func_0x80024bd8();
  if (((iVar3 != 0) && (*(char *)(unaff_s3 + 0x147) == '\0')) &&
     ((int)*(short *)(unaff_s3 + 0x2e) <=
      *(int *)(*(int *)(unaff_s0 + 0xc4) + 0x2c) - (int)*(short *)(unaff_s0 + 0x80))) {
    *(undefined2 *)(unaff_s3 + 0x156) = 0x14;
    sVar1 = *(short *)(unaff_s0 + 0x80);
    sVar2 = *(short *)(unaff_s3 + 0x80);
    *(undefined1 *)(unaff_s3 + 0x164) = 2;
    *(int *)(unaff_s5 + 0x80) = unaff_s0;
    *(undefined1 *)(unaff_s6 + 0x182) = 0;
    *(short *)(unaff_s3 + 0x152) = -(sVar1 + sVar2);
    uVar4 = FUN_80114088();
    return uVar4;
  }
  while (DAT_1f800182 != '\0') {
    pbVar5 = (byte *)*unaff_s7;
    *(char *)(unaff_s6 + 0x182) = *(char *)(unaff_s6 + 0x182) + -1;
    unaff_s7 = unaff_s7 + 1;
    if ((*pbVar5 & 1) != 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(pbVar5[2]) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return _DAT_1f800080;
}

