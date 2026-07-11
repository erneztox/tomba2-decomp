// FUN_8010b46c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010b46c(byte *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x8001f40c(param_1,param_2,1);
  if (-1 < iVar1) {
    DAT_1f800182 = 0;
    if (((DAT_800bf9e5 == '\x06') && (param_1[0x144] == 1)) && (iVar1 < 2)) {
      func_0x8001fdb4(param_2,0xffff8001,0x10,0x20);
      FUN_80114514();
      return;
    }
    if (((DAT_1f800137 == '\0') && ((*param_1 & 6) == 0)) &&
       ((param_1[0x144] < 2 && (param_1[0x164] == 0)))) {
      if (DAT_800bf9e5 != '\x06') {
        func_0x8004ed94(0x2a,0x41);
      }
      iVar1 = _DAT_1f80009c;
      param_1[4] = 2;
      param_1[5] = 2;
      *param_1 = 3;
      param_1[6] = 0;
      param_1[0x172] = 0x78;
      param_1[0x173] = 0;
      param_1[0x2b] = (byte)(iVar1 >> 4);
    }
  }
  return;
}

