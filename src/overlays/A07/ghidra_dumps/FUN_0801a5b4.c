// FUN_0801a5b4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801a5b4(int param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 100) == '\x01') {
    func_0x00083f50((int)*(short *)(param_1 + 10));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = func_0x00083f50((int)*(short *)(param_1 + 10));
  iVar4 = (int)_DAT_1f8000ee;
  iVar5 = *(int *)(param_1 + 0x58);
  iVar3 = func_0x00083f50(param_3 & 0xfff);
  iVar4 = (int)(short)((uint)-(iVar2 * (iVar4 + iVar5)) >> 0xc);
  sVar1 = *(short *)(param_2 + 0x2e);
  iVar2 = func_0x00083e80(param_3 & 0xfff);
  _DAT_1f8000da = *(short *)(param_2 + 0x36) - (short)(iVar2 * iVar4 >> 0xc);
  _DAT_1f8000d2 = sVar1 + (short)(iVar3 * iVar4 >> 0xc);
  *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 1;
  return;
}

