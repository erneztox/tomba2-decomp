// FUN_8010ee6c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8010ee6c(void)

{
  short sVar1;
  ushort uVar2;
  int in_v0;
  int iVar3;
  int iVar4;
  int in_v1;
  int unaff_s2;
  int unaff_s3;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  undefined2 uStack0000001c;
  
  uStack0000001c = (undefined2)(in_v0 * 0x20 + in_v1 * 0x1f >> 4);
  uStack00000010 = *(undefined2 *)(*(int *)(unaff_s2 + 0xc4) + 0x2c);
  uStack00000012 = *(undefined2 *)(*(int *)(unaff_s2 + 0xc4) + 0x30);
  uStack00000014 = *(undefined2 *)(*(int *)(unaff_s2 + 0xc4) + 0x34);
  func_0x80133cac(0);
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

