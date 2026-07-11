// FUN_08012360

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012360(int param_1,char *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  if ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) {
    if ((*(ushort *)(param_1 + 0x17e) & 0x8000) == 0) {
      iVar4 = func_0x0001f40c(param_1,param_2,1);
      if (-1 < iVar4) {
        if ((*(char *)(param_1 + 0x144) == '\x01') && (iVar4 < 2)) {
          func_0x0001fdb4(param_2,2,0x10,0x1e);
          DAT_1f800137 = 2;
          halt_baddata();
        }
        if ((param_3 != 0) && (*param_2 == '\x05')) {
          *param_2 = '\x01';
          param_2[4] = '\x02';
          param_2[5] = '\0';
          param_2[6] = '\0';
        }
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
    }
    else if (*param_2 == '\x01') {
      func_0x0001f830();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

