// FUN_08019fe8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08019fe8(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x10);
  *(undefined1 *)(param_2 + 0x29) = 2;
  func_0x000635d4(param_1,3);
  func_0x00076d68(param_1);
  if ((*(char *)(param_1 + 0x169) == '\0') && ((_DAT_800ecf54 & (_DAT_1f800172 | 0x50)) != 0)) {
    iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
    sVar1 = *(short *)(param_1 + 0x152);
    sVar2 = *(short *)(param_1 + 0x80);
    iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x2e) =
         *(short *)(iVar6 + 0x2c) - (short)(iVar3 * ((int)sVar1 + (int)sVar2 + 0x10) >> 0xc);
    *(short *)(param_1 + 0x36) =
         *(short *)(iVar6 + 0x34) +
         (short)(iVar4 * ((int)*(short *)(param_1 + 0x152) + (int)*(short *)(param_1 + 0x80) + 0x10)
                >> 0xc);
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 100) + *(short *)(iVar6 + 0x30) + *(short *)(param_1 + 0x156) + 0x14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  sVar1 = *(short *)(param_1 + 0x152);
  iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  *(short *)(param_1 + 0x2e) = *(short *)(iVar6 + 0x2c) - (short)(iVar3 * sVar1 >> 0xc);
  *(short *)(param_1 + 0x36) =
       *(short *)(iVar6 + 0x34) + (short)(iVar4 * *(short *)(param_1 + 0x152) >> 0xc);
  iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x58));
  sVar1 = *(short *)(param_1 + 100);
  iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  iVar5 = (int)(short)(iVar3 * sVar1 >> 0xc);
  iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) - (short)(iVar4 * iVar5 >> 0xc);
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + (short)(iVar3 * iVar5 >> 0xc);
  *(short *)(param_1 + 0x32) = *(short *)(iVar6 + 0x30) + *(short *)(param_1 + 0x156);
  iVar6 = func_0x00083f50((int)*(short *)(param_1 + 0x58));
  *(short *)(param_1 + 0x32) =
       *(short *)(param_1 + 0x32) + (short)(iVar6 * *(short *)(param_1 + 100) >> 0xc);
  return 0;
}

