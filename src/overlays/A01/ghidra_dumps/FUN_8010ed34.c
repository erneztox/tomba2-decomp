// FUN_8010ed34

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8010ed34(void)

{
  short sVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int unaff_s0;
  int unaff_s1;
  int iVar8;
  int unaff_s2;
  int unaff_s3;
  ulonglong uVar9;
  
  iVar4 = func_0x80083e80((int)*(short *)(unaff_s2 + 0x40) - (int)*(short *)(unaff_s2 + 0x56));
  if (iVar4 < 0) {
    iVar4 = 0;
    if ((*(short *)(unaff_s2 + 0x56) - 1U & 0x8200) == 0) {
      iVar4 = (int)(((uint)_DAT_1f800160 - (uint)*(ushort *)(unaff_s0 + 0x2e)) * 0x10000) >> 0x10;
      iVar5 = (int)(((uint)_DAT_1f800164 - (uint)*(ushort *)(unaff_s0 + 0x36)) * 0x10000) >> 0x10;
      iVar8 = (uint)_DAT_1f800162 - (uint)*(ushort *)(unaff_s0 + 0x32);
      iVar6 = iVar8 * 0x10000 >> 0x10;
      uVar3 = func_0x80084080(iVar4 * iVar4 + iVar5 * iVar5 + iVar6 * iVar6);
      if ((2000 < uVar3) || (0x44c < (iVar8 + 800U & 0xffff))) {
        FUN_80120d60();
        return;
      }
      iVar4 = 2;
      if (1000 < uVar3) {
        iVar4 = 1;
      }
    }
    if (iVar4 != 0) {
      *(undefined1 *)(unaff_s0 + 5) = 2;
      *(undefined1 *)(unaff_s0 + 6) = 0;
      *(undefined1 *)(unaff_s0 + 7) = 0;
      if (*(int *)(unaff_s0 + 0x14) != 0) {
        *(undefined1 *)(*(int *)(unaff_s0 + 0x14) + 4) = 3;
      }
    }
    FUN_801208b4();
    return;
  }
  if (0 < iVar4) {
    *(short *)(unaff_s2 + 0x56) = *(short *)(unaff_s2 + 0x56) + 1;
  }
  uVar3 = *(ushort *)(unaff_s2 + 0x42);
  *(ushort *)(unaff_s2 + 0x42) = uVar3 - 1;
  if (0 < (int)((uint)uVar3 << 0x10)) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(unaff_s2 + 3)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar1 = *(short *)(unaff_s2 + 0x32);
    iVar4 = func_0x80083f50((int)*(short *)(unaff_s3 + 0x10));
    iVar5 = func_0x8009a450();
    *(short *)(unaff_s3 + 0x10) = *(short *)(unaff_s3 + 0x10) + (short)(iVar5 >> 9);
    iVar4 = ((int)sVar1 + (iVar4 >> 5)) - (int)*(short *)(unaff_s2 + 0x32);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
    }
    *(short *)(unaff_s2 + 0x32) = *(short *)(unaff_s2 + 0x32) + (short)(iVar4 >> 4);
    return;
  }
  *(undefined2 *)(unaff_s2 + 0x42) = 0xb4;
  if (*(char *)(unaff_s2 + 0x46) != '\x0e') {
    *(undefined1 *)(unaff_s2 + 0x46) = 0xe;
    *(int *)(*(int *)(unaff_s2 + 0xc4) + 0x40) = _DAT_800ecfc4 + *(int *)(_DAT_800ecfc4 + 8);
    func_0x80077cfc();
  }
  uVar7 = 0x8a;
  func_0x80074590(0x8a,7,0);
  if (*(byte *)(unaff_s2 + 7) + 1 < 0x44d) {
    iVar4 = 2;
    if (1000 < uVar7) {
      iVar4 = 1;
    }
    if (iVar4 == 0) {
      uVar7 = func_0x8009a450();
      uVar2 = *(undefined1 *)((uVar7 & 1) + 0x8013722c);
    }
    else {
      uVar9 = func_0x8009a450();
      uVar2 = 5;
      if (((uVar9 & 1) != 0) && (uVar2 = 5, *(char *)(unaff_s1 + 0xbf) == '\0')) {
        if ((DAT_800bf9fd & 1) == 0) {
          iVar4 = func_0x8005308c();
          if (iVar4 != 0) {
            func_0x80042354(1,1);
            func_0x80040b48(0xb);
            FUN_8012a00c();
            return;
          }
        }
        else {
          if (((int)(uVar9 >> 0x20) != 8) || ((DAT_800bf9fd & 2) != 0)) {
            FUN_8012a00c();
            return;
          }
          iVar4 = func_0x8005308c();
          if (iVar4 != 0) {
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
    *(undefined1 *)(unaff_s1 + 5) = uVar2;
    *(undefined1 *)(unaff_s1 + 6) = 0;
    *(undefined1 *)(unaff_s1 + 7) = 0;
    FUN_801208b4();
    return;
  }
  FUN_80120e84();
  return;
}

