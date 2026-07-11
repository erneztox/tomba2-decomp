// FUN_08013fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08013fc0(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = func_0x00022f04();
  if (iVar4 != 0) {
    iVar4 = func_0x00083f50(_DAT_1f80009c);
    sVar1 = *(short *)(param_1 + 0x80);
    sVar2 = *(short *)(param_2 + 0x80);
    iVar5 = func_0x00083e80(_DAT_1f80009c);
    sVar3 = *(short *)(param_2 + 0x80);
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_2 + 0x2e) + (short)(iVar4 * ((int)sVar1 + (int)sVar2) >> 0xc);
    *(short *)(param_1 + 0x36) =
         *(short *)(param_2 + 0x36) -
         (short)(iVar5 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
  }
  return;
}

