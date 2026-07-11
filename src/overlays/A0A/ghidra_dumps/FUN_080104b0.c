// FUN_080104b0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080104b0(int param_1,byte *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = func_0x0001f40c(param_1,param_2,1);
  if (iVar6 < 0) {
    return;
  }
  cVar5 = func_0x00077768((int)(((_DAT_1f80009c & 0xffff) + 0x800) * 0x10000) >> 0x10,
                          (int)*(short *)(param_2 + 0x60),1);
  param_2[0x5f] = cVar5 + 2;
  uVar4 = _DAT_1f80009c;
  if (*(char *)(param_1 + 0x144) == '\x01') {
    if ((((DAT_800bf870 == '\x0e') && (param_2[0xbf] != 0)) || ((*param_2 & 0x18) != 0)) ||
       (1 < iVar6)) {
      if ((*(ushort *)(param_1 + 0x17e) & 0x200) != 0) {
        return;
      }
      iVar6 = func_0x00083f50(_DAT_1f80009c);
      sVar1 = *(short *)(param_1 + 0x80);
      sVar2 = *(short *)(param_2 + 0x80);
      iVar7 = func_0x00083e80(_DAT_1f80009c);
      sVar3 = *(short *)(param_1 + 0x80);
      iVar8 = (int)_DAT_1f80009c >> 4;
      *(short *)(param_2 + 0x2e) =
           *(short *)(param_1 + 0x2e) - (short)(iVar6 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(short *)(param_2 + 0x36) =
           *(short *)(param_1 + 0x36) +
           (short)(iVar7 * ((int)sVar3 + (int)*(short *)(param_2 + 0x80)) >> 0xc);
      *(char *)(param_1 + 0x2b) = (char)iVar8;
      func_0x00022d08(param_1,param_2,1,0);
      return;
    }
    func_0x0001fdb4(param_2,6,3,0x1e);
  }
  else {
    if (*(char *)(param_1 + 0x144) != '\x02') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((*param_2 & 10) == 0) {
      *param_2 = 3;
      param_2[4] = 2;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[0x2b] = (byte)((int)(uVar4 + 0x800) >> 4);
    }
    else {
      if ((*(ushort *)(param_1 + 0x17e) & 0x200) != 0) {
        return;
      }
      iVar6 = func_0x00083f50(_DAT_1f80009c);
      sVar1 = *(short *)(param_1 + 0x80);
      sVar2 = *(short *)(param_2 + 0x80);
      iVar7 = func_0x00083e80(_DAT_1f80009c);
      sVar3 = *(short *)(param_1 + 0x80);
      *(short *)(param_2 + 0x2e) =
           *(short *)(param_1 + 0x2e) - (short)(iVar6 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(short *)(param_2 + 0x36) =
           *(short *)(param_1 + 0x36) +
           (short)(iVar7 * ((int)sVar3 + (int)*(short *)(param_2 + 0x80)) >> 0xc);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

