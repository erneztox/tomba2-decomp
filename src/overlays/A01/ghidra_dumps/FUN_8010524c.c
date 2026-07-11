// FUN_8010524c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010524c(byte *param_1,char *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = func_0x8001f40c(param_1,param_2,0);
  if (-1 < iVar4) {
    if (param_2[0x5e] == '\0') {
      func_0x8001ff7c(param_1,param_2,iVar4,2);
      if (*param_2 == '\x02') {
        *param_2 = '\x06';
      }
    }
    else if ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) {
      if ((*param_1 & 4) == 0) {
        iVar4 = func_0x80083f50(_DAT_1f80009c);
        sVar1 = *(short *)(param_1 + 0x80);
        sVar2 = *(short *)(param_2 + 0x80);
        iVar5 = func_0x80083e80(_DAT_1f80009c);
        sVar3 = *(short *)(param_2 + 0x80);
        *(short *)(param_1 + 0x2e) =
             *(short *)(param_2 + 0x2e) + (short)(iVar4 * ((int)sVar1 + (int)sVar2) >> 0xc);
        *(short *)(param_1 + 0x36) =
             *(short *)(param_2 + 0x36) -
             (short)(iVar5 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
      }
      func_0x80058304(param_1,1);
      if (DAT_800bfad6 == '\0') {
        param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
        func_0x80022d08(param_1,param_2,1,0);
        FUN_8010e320();
        return;
      }
    }
  }
  return;
}

