// FUN_8010ef94

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_8010ef94(void)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined2 in_v1;
  int unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  
  *(undefined2 *)(unaff_s2 + 0x56) = in_v1;
  uVar2 = *(ushort *)(unaff_s2 + 0x42);
  *(ushort *)(unaff_s2 + 0x42) = uVar2 - 1;
  if ((int)((uint)uVar2 << 0x10) < 1) {
    unaff_s4 = 1;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(unaff_s2 + 3)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    sVar1 = *(short *)(unaff_s2 + 0x32);
    iVar3 = func_0x80083f50((int)*(short *)(unaff_s3 + 0x10));
    iVar4 = func_0x8009a450();
    *(short *)(unaff_s3 + 0x10) = *(short *)(unaff_s3 + 0x10) + (short)(iVar4 >> 9);
    iVar3 = ((int)sVar1 + (iVar3 >> 5)) - (int)*(short *)(unaff_s2 + 0x32);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    *(short *)(unaff_s2 + 0x32) = *(short *)(unaff_s2 + 0x32) + (short)(iVar3 >> 4);
    return unaff_s4;
  }
}

