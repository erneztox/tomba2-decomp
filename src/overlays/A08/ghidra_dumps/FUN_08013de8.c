// FUN_08013de8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08013de8(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  if (((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) &&
     (iVar5 = func_0x0001f40c(param_1,param_2,0), -1 < iVar5)) {
    if ((param_1[0x144] == 1) && (iVar5 < 2)) {
      if (((int)*(short *)(param_1 + 0x17e) & 0x8000U) == 0) {
        func_0x0001fdb4(param_2,0xffff8004,0x10,0x1e);
      }
      else {
        func_0x0001f830(param_1,param_2);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((*param_1 & 4) == 0) {
      iVar5 = func_0x00083f50(_DAT_1f80009c);
      sVar1 = *(short *)(param_1 + 0x80);
      sVar2 = *(short *)(param_2 + 0x80);
      iVar6 = func_0x00083e80(_DAT_1f80009c);
      sVar3 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_2 + 0x2e) + (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(param_2 + 0x36) -
           (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
    }
    param_1[0x60] = 1;
    cVar4 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
    param_1[0x5f] = cVar4 + 2;
  }
  return;
}

