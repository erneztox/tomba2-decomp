// FUN_080198c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080198c8(int param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = func_0x0002300c(param_1,param_2,(int)*(short *)(param_2 + 0x80));
  if ((((iVar1 != 0) && (((int)*(short *)(param_1 + 0x17e) & 0x8200U) == 0)) && (_DAT_1f80018e == 0)
      ) && ((DAT_1f800137 == '\0' && ((*param_2 & 2) == 0)))) {
    iVar1 = (int)(((_DAT_1f80009c & 0xfff) - (uint)*(ushort *)(param_1 + 0x56)) * 0x100000) >> 0x10;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if ((iVar1 < 0x2001) &&
       ((*(char *)(param_1 + 5) != '\x1f' || (param_2 == *(byte **)(param_1 + 0x10))))) {
      _DAT_1f80018e = 0x1200;
      DAT_800bf840 = 0x4b;
      _DAT_1f800184 = param_2;
    }
  }
  return;
}

