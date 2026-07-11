// FUN_08011ad4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08011ad4(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = func_0x0001f40c(param_1,param_2,1);
  if ((-1 < iVar3) &&
     (func_0x0001ff7c(param_1,param_2,iVar3,1), (*(ushort *)(param_1 + 0x17e) & 0x200) == 0)) {
    iVar3 = func_0x00083f50(_DAT_1f80009c);
    sVar1 = *(short *)(param_1 + 0x80);
    sVar2 = *(short *)(param_2 + 0x80);
    iVar4 = func_0x00083e80(_DAT_1f80009c);
    sVar1 = (short)(iVar3 * ((int)sVar1 + (int)sVar2) >> 0xc);
    sVar2 = (short)(iVar4 * ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) >>
                   0xc);
    if (*(char *)(param_2 + 0x5f) == '\0') {
      *(short *)(param_2 + 0x2e) = *(short *)(param_1 + 0x2e) - sVar1;
      *(short *)(param_2 + 0x36) = *(short *)(param_1 + 0x36) + sVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((*param_1 & 4) == 0) {
      *(short *)(param_1 + 0x2e) = *(short *)(param_2 + 0x2e) + sVar1;
      *(short *)(param_1 + 0x36) = *(short *)(param_2 + 0x36) - sVar2;
    }
    param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
    return 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

