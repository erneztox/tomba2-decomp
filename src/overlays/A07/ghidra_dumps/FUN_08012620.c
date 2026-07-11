// FUN_08012620

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08012620(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  
  puVar6 = _DAT_1f800140;
  DAT_1f800182 = DAT_1f800146;
  do {
    if (DAT_1f800182 == '\0') {
      return 0;
    }
    pbVar7 = (byte *)*puVar6;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar6 = puVar6 + 1;
  } while (((pbVar7[0xc] != 9) || ((*pbVar7 & 1) == 0)) ||
          (iVar4 = func_0x00022f04(param_1,pbVar7), iVar4 == 0));
  iVar4 = func_0x00083f50(_DAT_1f80009c);
  sVar1 = *(short *)(param_1 + 0x80);
  sVar2 = *(short *)(pbVar7 + 0x80);
  iVar5 = func_0x00083e80(_DAT_1f80009c);
  sVar3 = *(short *)(pbVar7 + 0x80);
  *(short *)(param_1 + 0x2e) =
       *(short *)(pbVar7 + 0x2e) + (short)(iVar4 * ((int)sVar1 + (int)sVar2) >> 0xc);
  *(short *)(param_1 + 0x36) =
       *(short *)(pbVar7 + 0x36) -
       (short)(iVar5 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

