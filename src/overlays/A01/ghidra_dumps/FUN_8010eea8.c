// FUN_8010eea8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8010eea8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int unaff_s2;
  int unaff_s3;
  undefined2 uStack00000014;
  
  uStack00000014 = *(undefined2 *)(*(int *)(unaff_s2 + 0xc4) + 0x34);
  func_0x80133cac(0,param_2,param_3,&stack0x00000018);
  uVar2 = *(ushort *)(unaff_s2 + 0x42);
  *(ushort *)(unaff_s2 + 0x42) = uVar2 - 1;
  if (0 < (int)((uint)uVar2 << 0x10)) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(unaff_s2 + 3)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar1 = *(short *)(unaff_s2 + 0x32);
    iVar3 = func_0x80083f50((int)*(short *)(unaff_s3 + 0x10));
    iVar4 = func_0x8009a450();
    *(short *)(unaff_s3 + 0x10) = *(short *)(unaff_s3 + 0x10) + (short)(iVar4 >> 9);
    iVar3 = ((int)sVar1 + (iVar3 >> 5)) - (int)*(short *)(unaff_s2 + 0x32);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    *(short *)(unaff_s2 + 0x32) = *(short *)(unaff_s2 + 0x32) + (short)(iVar3 >> 4);
    return;
  }
  if (*(char *)(unaff_s2 + 0x46) != '\b') {
    *(undefined1 *)(unaff_s2 + 0x46) = 8;
    *(int *)(*(int *)(unaff_s2 + 0xc4) + 0x40) = _DAT_800ecfc4 + *(int *)(_DAT_800ecfc4 + 8);
    func_0x80077cfc();
  }
  *(undefined2 *)(unaff_s2 + 0x42) = 0x3c;
  *(char *)(unaff_s2 + 7) = *(char *)(unaff_s2 + 7) + '\x01';
  return;
}

