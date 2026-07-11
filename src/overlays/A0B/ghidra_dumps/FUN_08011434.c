// FUN_08011434

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011434(int param_1,char *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar5 = func_0x00022f04();
  if (iVar5 != 0) {
    iVar5 = func_0x00083f50(_DAT_1f80009c);
    sVar1 = *(short *)(param_1 + 0x80);
    sVar2 = *(short *)(param_2 + 0x80);
    iVar6 = func_0x00083e80(_DAT_1f80009c);
    sVar3 = *(short *)(param_2 + 0x80);
    iVar8 = (int)_DAT_1f80009c;
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_2 + 0x2e) + (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
    *(short *)(param_1 + 0x36) =
         *(short *)(param_2 + 0x36) -
         (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
    cVar4 = func_0x00077768(iVar8,(int)*(short *)(param_1 + 0x140),1);
    *(char *)(param_1 + 0x5f) = cVar4 + '\x02';
    *(char *)(param_1 + 0x2b) = (char)((int)_DAT_1f80009c >> 4);
    func_0x00022d08(param_1,param_2,1,0);
    if (*param_2 == '\x01') {
      cVar4 = param_2[0x5e];
      param_2[4] = '\x01';
      param_2[6] = '\0';
      if ((cVar4 != '\0') && (param_2[0x5e] = cVar4 + -1, cVar4 != '\x01')) {
        func_0x00117720(param_2);
        param_2[5] = '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_2[4] = '\x02';
      param_2[5] = '\0';
      *param_2 = '\x02';
      uVar7 = func_0x00077768((int)(((_DAT_1f80009c & 0xffff) + 0x800) * 0x10000) >> 0x10,
                              (int)*(short *)(param_2 + 0x60),1);
      if (uVar7 == (byte)param_2[0xbe]) {
        param_2[0x2b] = '\x01';
        param_2[0x5f] = (char)uVar7 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_2[0x2b] = '\0';
    }
  }
  return;
}

