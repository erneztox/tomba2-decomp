// FUN_8010bff8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010bff8(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_2 + 0x29) = 0;
  if (*(char *)(param_1 + 0x16b) == '\0') {
    iVar1 = FUN_80111e18(param_1,param_2,*(undefined4 *)(param_2 + 200));
    if (iVar1 == 0) {
      if ((((*(ushort *)(param_2 + 0x60) & 2) != 0) &&
          (iVar1 = FUN_80111e18(param_1,param_2,*(undefined4 *)(param_2 + 0xcc)), iVar1 == 2)) &&
         (*(undefined1 *)(param_2 + 0x29) = 0x81, _DAT_1f80018e != 0)) {
        _DAT_1f80018e = 0x20;
      }
    }
    else if (iVar1 == 2) {
      *(undefined1 *)(param_2 + 0x29) = 1;
      iVar1 = 0x10;
      if (_DAT_1f80018e != 0) {
        _DAT_1f80018e = 0x10;
        goto code_r0x80115074;
      }
    }
  }
  else if (_DAT_1f800184 == param_2) {
    iVar1 = FUN_80111b34(param_1,param_2,*(undefined4 *)(param_2 + 0xc4));
code_r0x80115074:
    if (iVar1 != 0) {
      func_0x80074590(0x95,0,0);
      return;
    }
    func_0x8009a450(0x95);
    return;
  }
  return;
}

