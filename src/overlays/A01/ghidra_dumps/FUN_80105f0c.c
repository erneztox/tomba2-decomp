// FUN_80105f0c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8010efb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_80105f0c(undefined4 param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  undefined6 uVar8;
  
  puVar6 = _DAT_1f800158;
  DAT_1f800182 = DAT_1f80015e;
  do {
    while( true ) {
      do {
        if (DAT_1f800182 == '\0') {
          DAT_1f800182 = 0;
          return 0;
        }
        pbVar7 = (byte *)*puVar6;
        DAT_1f800182 = DAT_1f800182 + -1;
        puVar6 = puVar6 + 1;
      } while ((*pbVar7 & 1) == 0);
      if (pbVar7[2] != 1) break;
      if (pbVar7[3] == 0) {
        iVar3 = FUN_8010ed60(param_1,pbVar7);
        if (iVar3 != 2) {
          return 1;
        }
        *pbVar7 = 2;
        pbVar7[4] = 2;
        pbVar7[5] = 2;
        pbVar7[6] = 0;
        uVar5 = 2;
        goto LAB_8010efa8;
      }
    }
    if (pbVar7[2] != 3) {
      uVar2 = FUN_8010ef94();
      return uVar2;
    }
  } while (1 < pbVar7[3] - 3);
  uVar8 = FUN_8010ed60(param_1,pbVar7);
  uVar5 = (undefined2)((uint6)uVar8 >> 0x20);
  if ((int)uVar8 == 0) {
    return 1;
  }
  pbVar7[0x2b] = 1;
LAB_8010efa8:
  *(undefined2 *)(unaff_s2 + 0x42) = uVar5;
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
  return unaff_s4;
}

