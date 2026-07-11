// FUN_08015228

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015228(byte *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_2 + 0x5e) == '\0') {
    if ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) {
      if (*(char *)(param_2 + 3) == '\0') {
        iVar4 = func_0x00022f04();
        if (iVar4 != 0) {
          if ((*param_1 & 4) == 0) {
            iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x140));
            sVar1 = *(short *)(param_1 + 0x80);
            sVar2 = *(short *)(param_2 + 0x80);
            iVar5 = func_0x00083e80((int)*(short *)(param_1 + 0x140));
            sVar3 = *(short *)(param_2 + 0x80);
            *(short *)(param_1 + 0x2e) =
                 *(short *)(param_2 + 0x2e) + (short)(iVar4 * ((int)sVar1 + (int)sVar2) >> 0xc);
            *(short *)(param_1 + 0x36) =
                 *(short *)(param_2 + 0x36) -
                 (short)(iVar5 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        iVar4 = func_0x00022f04(param_1,param_2);
        if (iVar4 != 0) {
          param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
          func_0x00022d08(param_1,param_2,1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
  else {
    iVar4 = func_0x0001f40c(param_1,param_2,1);
    if (-1 < iVar4) {
      if (*(char *)(param_2 + 3) == '\0') {
        iVar4 = func_0x0001ff7c(param_1,param_2,iVar4,3);
        if ((iVar4 == 2) && ((*param_1 & 4) == 0)) {
          iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x140));
          sVar1 = *(short *)(param_1 + 0x80);
          sVar2 = *(short *)(param_2 + 0x80);
          iVar5 = func_0x00083e80((int)*(short *)(param_1 + 0x140));
          sVar3 = *(short *)(param_2 + 0x80);
          *(short *)(param_1 + 0x2e) =
               *(short *)(param_2 + 0x2e) + (short)(iVar4 * ((int)sVar1 + (int)sVar2) >> 0xc);
          *(short *)(param_1 + 0x36) =
               *(short *)(param_2 + 0x36) -
               (short)(iVar5 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
          halt_baddata();
        }
      }
      else {
        func_0x0001ff7c(param_1,param_2,iVar4,2);
      }
    }
  }
  return;
}

