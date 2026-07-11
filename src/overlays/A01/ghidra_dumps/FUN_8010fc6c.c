// FUN_8010fc6c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8012aeac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010fc6c(void)

{
  char cVar1;
  short in_v0;
  short sVar2;
  int iVar3;
  short in_v1;
  int extraout_v1;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_s0;
  int unaff_s1;
  short unaff_s2;
  int unaff_s3;
  
  *(short *)(unaff_s1 + 0x4e) = in_v1 + in_v0;
  if ((*(ushort *)(unaff_s1 + 0x66) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x80118c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_s1 + 0x60))((int)*(short *)(unaff_s1 + 0x56));
    return;
  }
  iVar3 = func_0x80083e80((int)*(short *)(unaff_s1 + 100) - (*(short *)(unaff_s1 + 0x56) + -0x800));
  *(short *)(unaff_s1 + 0x56) = *(short *)(unaff_s1 + 0x56) + (short)(iVar3 >> 5);
  sVar2 = FUN_80117a00();
  if (sVar2 != 0) {
    *(undefined2 *)(unaff_s1 + 0x42) = 0x1e;
    *(char *)(unaff_s1 + 6) = *(char *)(unaff_s1 + 6) + '\x01';
    *(undefined1 *)(unaff_s1 + 7) = 0;
    if (*(char *)(unaff_s1 + 0x46) != '\n') {
      iVar5 = 10;
      *(undefined1 *)(unaff_s1 + 0x46) = 10;
      iVar6 = 4;
      *(int *)(*(int *)(unaff_s1 + 0xc4) + 0x40) = _DAT_800ecfc4 + *(int *)(_DAT_800ecfc4 + 8);
      func_0x80077cfc();
      iVar4 = (extraout_v1 + -0xa0) * 0x10000 >> 0x10;
      iVar3 = iVar4;
      if (iVar4 < 0) {
        iVar3 = -iVar4;
      }
      if (iVar3 < 0x11) {
        while( true ) {
          unaff_s0 = unaff_s0 + 1;
          unaff_s2 = unaff_s2 + 0x32;
          if ((unaff_s3 <= unaff_s0) || (7 < unaff_s0)) break;
          iVar3 = func_0x8007b26c();
          if (iVar3 != 0) {
            *(undefined1 *)(iVar3 + 1) = 0;
            cVar1 = DAT_1f80017c;
            *(undefined2 *)(iVar3 + 0xc) = 0x2000;
            *(byte *)(iVar3 + 2) = cVar1 + (char)unaff_s0 & 7;
            *(undefined2 *)(iVar3 + 0x1e) = *(undefined2 *)(unaff_s1 + 0x2e);
            *(short *)(iVar3 + 0x22) = *(short *)(unaff_s1 + 0x32) + 0xa0;
            *(short *)(iVar3 + 0x26) = *(short *)(unaff_s1 + 0x36) + unaff_s2;
            func_0x80027058(iVar3,*(undefined4 *)(*(int *)(unaff_s1 + 0xc0) + 0x40),unaff_s0);
          }
        }
        unaff_s1 = 0xc;
        iVar3 = 0;
        iVar5 = 0;
        func_0x80074590();
        *(undefined4 *)(iVar3 + 4) = 0x1f800000;
        *(undefined2 *)(unaff_s1 + 0x2e) = *(undefined2 *)(*(int *)(iVar5 + 0xd8) + 0x2c);
        *(undefined2 *)(unaff_s1 + 0x32) = *(undefined2 *)(*(int *)(iVar5 + 0xd8) + 0x30);
        iVar3 = *(int *)(iVar5 + 0xd8);
      }
      else {
        sVar2 = (short)extraout_v1 + -0x10;
        if (iVar4 < 0) {
          sVar2 = (short)extraout_v1 + 0x10;
        }
        iVar4 = (0xa0 - sVar2) / 2;
        iVar3 = sVar2 * 0x10000 + 0x100;
        *(short *)(unaff_s1 + 0x72) = (short)iVar4;
        *(short *)(unaff_s1 + 0x6a) = sVar2;
        *(int *)(iVar6 + 0x34) = iVar3;
        if ((iVar4 == iVar3) || (iVar4 == 0x11)) {
          *(undefined1 *)(unaff_s1 + 1) = 1;
          iVar3 = func_0x80077ebc();
        }
        else {
          iVar3 = func_0x80077870();
        }
      }
      *(undefined2 *)(unaff_s1 + 0x36) = *(undefined2 *)(iVar3 + 0x34);
      *(short *)(unaff_s1 + 0x2e) =
           *(short *)(unaff_s1 + 0x2e) + (*(short *)(*(int *)(iVar5 + 0xd8) + 0x18) >> 6);
      *(short *)(unaff_s1 + 0x32) =
           *(short *)(unaff_s1 + 0x32) + (*(short *)(*(int *)(iVar5 + 0xd8) + 0x1e) >> 6);
      *(short *)(unaff_s1 + 0x36) =
           *(short *)(unaff_s1 + 0x36) + (*(short *)(*(int *)(iVar5 + 0xd8) + 0x24) >> 6);
      if ((*(char *)(iVar5 + 4) == '\x01') &&
         (cVar1 = *(char *)(iVar5 + 1), *(char *)(unaff_s1 + 1) = cVar1, cVar1 != '\0')) {
        func_0x80077e7c();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
  }
  FUN_80116620();
  func_0x8004766c();
  func_0x80049760();
  *(undefined2 *)(unaff_s1 + 100) = _DAT_1f8001a0;
  iVar3 = func_0x800493e8();
  if ((iVar3 != 0) || (iVar3 = func_0x80049250(), iVar3 != 0)) {
    *(undefined1 *)(unaff_s1 + 5) = 0;
    *(undefined1 *)(unaff_s1 + 6) = 0;
  }
  *(undefined1 *)(unaff_s1 + 0x29) = 0;
  sVar2 = FUN_80117188();
  if (sVar2 != 0) {
    *(char *)(unaff_s1 + 5) = (char)sVar2;
    FUN_801208b4();
    if ((*(char *)(unaff_s1 + 3) == '\0') && (unaff_s1 != -0x60)) {
      *(undefined1 *)(unaff_s1 + 5) = 0;
      *(undefined1 *)(unaff_s1 + 6) = 0;
      *(undefined1 *)(unaff_s1 + 7) = 0;
    }
    return;
  }
  return;
}

