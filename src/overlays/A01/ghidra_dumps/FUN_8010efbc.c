// FUN_8010efbc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8010efbc(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_v1;
  int unaff_s2;
  int unaff_s3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(in_v1) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(unaff_s2 + 0x32);
  iVar2 = func_0x80083f50((int)*(short *)(unaff_s3 + 0x10));
  iVar3 = func_0x8009a450();
  *(short *)(unaff_s3 + 0x10) = *(short *)(unaff_s3 + 0x10) + (short)(iVar3 >> 9);
  iVar2 = ((int)sVar1 + (iVar2 >> 5)) - (int)*(short *)(unaff_s2 + 0x32);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  *(short *)(unaff_s2 + 0x32) = *(short *)(unaff_s2 + 0x32) + (short)(iVar2 >> 4);
  return;
}

