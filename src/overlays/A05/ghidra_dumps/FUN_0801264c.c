// FUN_0801264c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801264c(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  if ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) {
    if ((*(ushort *)(param_1 + 0x17e) & 0x8000) != 0) {
      func_0x0001f054();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar5 = func_0x0001f40c(param_1,param_2,0);
    if (-1 < iVar5) {
      if ((*(char *)(param_1 + 0x144) == '\x01') && (iVar5 < 2)) {
        func_0x0001fdb4(param_2,0xffff8004,0x10,0x1e);
        halt_baddata();
      }
      iVar5 = func_0x00083f50(_DAT_1f80009c);
      sVar1 = *(short *)(param_1 + 0x80);
      sVar2 = *(short *)(param_2 + 0x80);
      iVar6 = func_0x00083e80(_DAT_1f80009c);
      sVar3 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_2 + 0x2e) + (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
      sVar1 = *(short *)(param_2 + 0x36);
      *(undefined1 *)(param_1 + 0x60) = 1;
      iVar5 = (int)_DAT_1f80009c;
      *(short *)(param_1 + 0x36) =
           sVar1 - (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
      cVar4 = func_0x00077768(iVar5,(int)*(short *)(param_1 + 0x140));
      *(char *)(param_1 + 0x5f) = cVar4 + '\x02';
    }
  }
  return;
}

