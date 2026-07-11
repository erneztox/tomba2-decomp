// FUN_8010ed60

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8010ed60(void)

{
  short sVar1;
  ushort uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  ulonglong uVar7;
  
  *(short *)(unaff_s2 + 0x56) = *(short *)(unaff_s2 + 0x56) + 1;
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
    iVar5 = func_0x80083f50((int)*(short *)(unaff_s3 + 0x10));
    iVar4 = func_0x8009a450();
    *(short *)(unaff_s3 + 0x10) = *(short *)(unaff_s3 + 0x10) + (short)(iVar4 >> 9);
    iVar5 = ((int)sVar1 + (iVar5 >> 5)) - (int)*(short *)(unaff_s2 + 0x32);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    *(short *)(unaff_s2 + 0x32) = *(short *)(unaff_s2 + 0x32) + (short)(iVar5 >> 4);
    return;
  }
  *(undefined2 *)(unaff_s2 + 0x42) = 0xb4;
  if (*(char *)(unaff_s2 + 0x46) != '\x0e') {
    *(undefined1 *)(unaff_s2 + 0x46) = 0xe;
    *(int *)(*(int *)(unaff_s2 + 0xc4) + 0x40) = _DAT_800ecfc4 + *(int *)(_DAT_800ecfc4 + 8);
    func_0x80077cfc();
  }
  uVar6 = 0x8a;
  func_0x80074590(0x8a,7,0);
  if (*(byte *)(unaff_s2 + 7) + 1 < 0x44d) {
    iVar5 = 2;
    if (1000 < uVar6) {
      iVar5 = 1;
    }
    if (iVar5 == 0) {
      uVar6 = func_0x8009a450();
      uVar3 = *(undefined1 *)((uVar6 & 1) + 0x8013722c);
    }
    else {
      uVar7 = func_0x8009a450();
      uVar3 = 5;
      if (((uVar7 & 1) != 0) && (uVar3 = 5, *(char *)(unaff_s1 + 0xbf) == '\0')) {
        if ((DAT_800bf9fd & 1) == 0) {
          iVar5 = func_0x8005308c();
          if (iVar5 != 0) {
            func_0x80042354(1,1);
            func_0x80040b48(0xb);
            FUN_8012a00c();
            return;
          }
        }
        else {
          if (((int)(uVar7 >> 0x20) != 8) || ((DAT_800bf9fd & 2) != 0)) {
            FUN_8012a00c();
            return;
          }
          iVar5 = func_0x8005308c();
          if (iVar5 != 0) {
            func_0x80042354(1,1);
            func_0x80040b48(0xb);
            FUN_8012a00c();
            return;
          }
        }
        if (*(short *)(unaff_s0 + 0x4a) != 0) {
          FUN_8012997c();
        }
        return;
      }
    }
    *(undefined1 *)(unaff_s1 + 5) = uVar3;
    *(undefined1 *)(unaff_s1 + 6) = 0;
    *(undefined1 *)(unaff_s1 + 7) = 0;
    FUN_801208b4();
    return;
  }
  FUN_80120e84();
  return;
}

