// FUN_080121cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080121cc(byte *param_1,char *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = func_0x0001f40c(param_1,param_2,0);
  if (((int)uVar5 < 0) || (*param_2 != '\x01')) {
    return;
  }
  if ((param_1[0x144] == 1) && ((int)uVar5 < 2)) {
    if (((int)*(short *)(param_1 + 0x17e) & 0x8000U) == 0) {
      func_0x0001fdb4(param_2,0xffff8001,3,0x1e);
    }
    else {
      func_0x0001f054(param_1,param_2);
    }
  }
  else {
    if ((uVar5 & 1) != 0) {
      if (uVar5 != 1) {
        return;
      }
      if ((param_1[0x145] & 1) != 0) {
        return;
      }
      *(short *)(param_1 + 0x32) =
           *(short *)(param_2 + 0x32) - (*(short *)(param_1 + 0x84) + *(short *)(param_2 + 0x84));
      func_0x00022c78();
      return;
    }
    if ((*param_1 & 4) == 0) {
      iVar6 = func_0x00083f50(_DAT_1f80009c);
      sVar1 = *(short *)(param_1 + 0x80);
      sVar2 = *(short *)(param_2 + 0x80);
      iVar7 = func_0x00083e80(_DAT_1f80009c);
      sVar3 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_2 + 0x2e) + (short)(iVar6 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(param_2 + 0x36) -
           (short)(iVar7 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
    }
    cVar4 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
    param_1[0x5f] = cVar4 + 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

