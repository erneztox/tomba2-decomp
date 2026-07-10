// FUN_8004f058

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8004f058(undefined4 param_1,ushort *param_2,short param_3)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  
  while( true ) {
    if (param_3 == 0) {
      uVar1 = *param_2;
      uVar3 = param_1;
      while (1 < (uVar1 + 2 & 0xffff)) {
        if ((uVar1 & 0x8000) == 0) {
          uVar3 = FUN_8004ead0(uVar3,&DAT_800a2be8 + (uint)*param_2 * 0xc);
        }
        else {
          uVar3 = FUN_8004ef54(uVar3,_DAT_800bf800 +
                                     (uint)*(ushort *)((uVar1 & 0xfff) * 2 + _DAT_800bf7fc));
        }
        param_2 = param_2 + 1;
        uVar1 = *param_2;
      }
      sVar2 = FUN_8004ea4c(param_1,0);
      return (int)sVar2;
    }
    if (*param_2 == 0xfffe) break;
    if (*param_2 == 0xffff) {
      param_3 = param_3 + -1;
    }
    param_2 = param_2 + 1;
  }
  return 0;
}

