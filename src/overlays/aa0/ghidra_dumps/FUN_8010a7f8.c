// FUN_8010a7f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010a7f8(void)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  char in_v0;
  byte *unaff_s0;
  byte *unaff_s1;
  undefined4 *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  while( true ) {
    *(char *)(unaff_s3 + 0x182) = in_v0;
    unaff_s2 = unaff_s2 + 1;
    puVar1 = _DAT_1f80013c;
    cVar3 = DAT_1f800182;
    if (((*unaff_s0 & 1) != 0) && (unaff_s0[2] < 0x30)) break;
    while (cVar2 = DAT_1f800144, _DAT_1f80013c = puVar1, DAT_1f800144 = cVar2, cVar3 == '\0') {
      do {
        unaff_s1 = *(byte **)(unaff_s1 + 0x24);
        if (unaff_s1 == (byte *)0x0) {
          return;
        }
      } while (((*unaff_s1 & 1) == 0) || (unaff_s1[0x2b] != 0));
      *(char *)(unaff_s3 + 0x182) = cVar2;
      unaff_s2 = puVar1;
      puVar1 = _DAT_1f80013c;
      cVar3 = cVar2;
    }
    unaff_s0 = (byte *)*unaff_s2;
    in_v0 = *(char *)(unaff_s3 + 0x182) + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x8010a834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)unaff_s0[2] * 4 + unaff_s4))();
  return;
}

