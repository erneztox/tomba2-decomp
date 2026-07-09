// FUN_8010dea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010dea0(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x5e);
  if (bVar1 == 1) {
    FUN_80116cc4(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_801168c4(param_1);
    }
  }
  else if (bVar1 == 2) {
    *(undefined2 *)(param_1 + 0x54) = 0x800;
    if ((DAT_800e7fc5 == '\0') || (DAT_800e7fc6 != '\0')) {
      _DAT_1f8000c0 = 6;
      _DAT_1f8000c2 = 10;
      FUN_80116f10(param_1,param_2,3);
      return;
    }
    _DAT_1f8000c0 = 0x3c;
    _DAT_1f8000c2 = 8;
    _DAT_1f8000c4 = 0x48;
    if (DAT_800bf9e5 != '\a') {
      func_0x80051614(param_1,&DAT_1f8000c0,4,0);
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x80077efc(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 4) = 3;
  }
  FUN_8011ff18();
  return;
}

