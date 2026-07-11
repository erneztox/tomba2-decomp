// FUN_08012758

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012758(int param_1,char *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) {
    if (param_2[0xbf] == '\0') {
      iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) *
                   0x10000) >> 0x10;
      iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) *
                   0x10000) >> 0x10;
      uVar4 = func_0x00084080(iVar6 * iVar6 + iVar5 * iVar5);
      if ((((int)(uVar4 & 0xffff) <=
            (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) &&
          ((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
                 (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
           (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) &&
         (((int)*(short *)(param_1 + 0x17e) & 0x8000U) == 0)) {
        iVar5 = func_0x00085690(-iVar5,iVar6);
        if (((_DAT_1f80018e == 0) && (DAT_1f800137 == '\0')) && (*param_2 == '\x01')) {
          iVar5 = (int)(((iVar5 + 0x800U & 0xfff) - (uint)*(ushort *)(param_1 + 0x56)) * 0x100000)
                  >> 0x10;
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          if ((iVar5 < 0x3001) &&
             ((*(char *)(param_1 + 5) != '\x1f' || (param_2 == *(char **)(param_1 + 0x10))))) {
            _DAT_1f80018e = 0x1000;
            _DAT_1f800272 = 0;
            _DAT_1f800276 = 0;
            DAT_800bf840 = 0x49;
            _DAT_1f800184 = param_2;
          }
        }
      }
    }
    iVar5 = func_0x0002300c(param_1,param_2,(int)*(short *)(param_2 + 0x80));
    if (iVar5 != 0) {
      iVar5 = func_0x00083f50(_DAT_1f80009c + 0x800);
      sVar1 = *(short *)(param_1 + 0x80);
      sVar2 = *(short *)(param_2 + 0x80);
      iVar6 = func_0x00083e80(_DAT_1f80009c + 0x800);
      sVar3 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_2 + 0x2e) + (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(param_2 + 0x36) -
           (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
    }
  }
  return;
}

