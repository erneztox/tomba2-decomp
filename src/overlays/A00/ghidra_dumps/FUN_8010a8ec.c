// FUN_8010a8ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010a8ec(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  byte *unaff_s1;
  undefined4 *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  *(char *)(param_2 + 0x46) = (char)(*(ushort *)(unaff_s1 + 0x56) >> 4);
  func_0x8001e860();
  *(undefined1 *)(unaff_s3 + 0x182) = 0;
  puVar1 = _DAT_1f80013c;
  cVar3 = DAT_1f800182;
  do {
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
    pbVar5 = (byte *)*unaff_s2;
    *(char *)(unaff_s3 + 0x182) = *(char *)(unaff_s3 + 0x182) + -1;
    unaff_s2 = unaff_s2 + 1;
    puVar1 = _DAT_1f80013c;
    cVar3 = DAT_1f800182;
  } while (((*pbVar5 & 1) == 0) || (uVar4 = (uint)pbVar5[2], 0x2f < uVar4));
                    /* WARNING: Could not recover jumptable at 0x8010a834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar4 * 4 + unaff_s4))();
  return;
}

