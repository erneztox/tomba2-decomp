// FUN_80118ed8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8012aeac) */

void FUN_80118ed8(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 in_v1;
  int iVar4;
  short sVar5;
  int iVar6;
  int unaff_s0;
  int unaff_s1;
  short unaff_s2;
  int unaff_s3;
  
  *(undefined1 *)(unaff_s1 + 6) = in_v1;
  iVar2 = *(int *)(unaff_s1 + 0x10);
  iVar6 = 0;
  if (iVar2 == 0) {
    *(undefined2 *)(unaff_s1 + 0x72) = 0;
    *(undefined2 *)(unaff_s1 + 0x6a) = 0xa0;
    FUN_801208b4();
    if (*(char *)(unaff_s1 + 3) == '\0') {
      *(undefined1 *)(unaff_s1 + 5) = 0;
      *(undefined1 *)(unaff_s1 + 6) = 0;
      *(undefined1 *)(unaff_s1 + 7) = 0;
    }
    return;
  }
  iVar4 = (*(short *)(iVar2 + 0x36) + -0xa0) * 0x10000 >> 0x10;
  iVar3 = iVar4;
  if (iVar4 < 0) {
    iVar3 = -iVar4;
  }
  if (iVar3 < 0x11) {
    while( true ) {
      unaff_s0 = unaff_s0 + 1;
      unaff_s2 = unaff_s2 + 0x32;
      if ((unaff_s3 <= unaff_s0) || (7 < unaff_s0)) break;
      iVar2 = func_0x8007b26c();
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 1) = 0;
        cVar1 = DAT_1f80017c;
        *(undefined2 *)(iVar2 + 0xc) = 0x2000;
        *(byte *)(iVar2 + 2) = cVar1 + (char)unaff_s0 & 7;
        *(undefined2 *)(iVar2 + 0x1e) = *(undefined2 *)(unaff_s1 + 0x2e);
        *(short *)(iVar2 + 0x22) = *(short *)(unaff_s1 + 0x32) + 0xa0;
        *(short *)(iVar2 + 0x26) = *(short *)(unaff_s1 + 0x36) + unaff_s2;
        func_0x80027058(iVar2,*(undefined4 *)(*(int *)(unaff_s1 + 0xc0) + 0x40),unaff_s0);
      }
    }
    unaff_s1 = 0xc;
    iVar2 = 0;
    iVar6 = 0;
    func_0x80074590();
    *(undefined4 *)(iVar2 + 4) = 0x1f800000;
    *(undefined2 *)(unaff_s1 + 0x2e) = *(undefined2 *)(*(int *)(iVar6 + 0xd8) + 0x2c);
    *(undefined2 *)(unaff_s1 + 0x32) = *(undefined2 *)(*(int *)(iVar6 + 0xd8) + 0x30);
    iVar2 = *(int *)(iVar6 + 0xd8);
  }
  else {
    sVar5 = -0x10;
    if (iVar4 < 0) {
      sVar5 = 0x10;
    }
    sVar5 = *(short *)(iVar2 + 0x36) + sVar5;
    iVar4 = (0xa0 - sVar5) / 2;
    iVar3 = sVar5 * 0x10000 + 0x100;
    *(short *)(unaff_s1 + 0x72) = (short)iVar4;
    *(short *)(unaff_s1 + 0x6a) = sVar5;
    *(int *)(iVar2 + 0x34) = iVar3;
    if ((iVar4 == iVar3) || (iVar4 == 0x11)) {
      *(undefined1 *)(unaff_s1 + 1) = 1;
      iVar2 = func_0x80077ebc();
    }
    else {
      iVar2 = func_0x80077870();
    }
  }
  *(undefined2 *)(unaff_s1 + 0x36) = *(undefined2 *)(iVar2 + 0x34);
  *(short *)(unaff_s1 + 0x2e) =
       *(short *)(unaff_s1 + 0x2e) + (*(short *)(*(int *)(iVar6 + 0xd8) + 0x18) >> 6);
  *(short *)(unaff_s1 + 0x32) =
       *(short *)(unaff_s1 + 0x32) + (*(short *)(*(int *)(iVar6 + 0xd8) + 0x1e) >> 6);
  *(short *)(unaff_s1 + 0x36) =
       *(short *)(unaff_s1 + 0x36) + (*(short *)(*(int *)(iVar6 + 0xd8) + 0x24) >> 6);
  if ((*(char *)(iVar6 + 4) == '\x01') &&
     (cVar1 = *(char *)(iVar6 + 1), *(char *)(unaff_s1 + 1) = cVar1, cVar1 != '\0')) {
    func_0x80077e7c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

