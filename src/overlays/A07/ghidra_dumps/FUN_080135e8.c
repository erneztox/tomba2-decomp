// FUN_080135e8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080135e8(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  
  puVar7 = _DAT_1f80013c;
  DAT_1f800182 = DAT_1f800144;
  while( true ) {
    do {
      if (DAT_1f800182 == '\0') {
        return;
      }
      pbVar6 = (byte *)*puVar7;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar7 = puVar7 + 1;
    } while ((*pbVar6 & 1) == 0);
    if (pbVar6[0xc] == 9) break;
    if (pbVar6[2] == 8) {
      func_0x0010bad0(param_1,pbVar6);
    }
    else if ((pbVar6[2] == 0x54) && (iVar4 = func_0x00022f04(param_1,pbVar6), iVar4 != 0)) {
      iVar4 = func_0x00083f50(_DAT_1f80009c);
      sVar1 = *(short *)(param_1 + 0x80);
      sVar2 = *(short *)(pbVar6 + 0x80);
      iVar5 = func_0x00083e80(_DAT_1f80009c);
      sVar3 = *(short *)(pbVar6 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(pbVar6 + 0x2e) + (short)(iVar4 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(pbVar6 + 0x36) -
           (short)(iVar5 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x0010c1c8(param_1,pbVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

