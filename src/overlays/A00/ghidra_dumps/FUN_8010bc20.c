// FUN_8010bc20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010bc20(undefined1 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_80111620(param_1,param_2,*(undefined4 *)(param_2 + 0xc0),param_1[2] == '\x03');
  if (iVar1 != 0) {
    if ((param_1[2] == '\x03') && (*(char *)(param_2 + 0x5f) == '\x01')) {
      *param_1 = 3;
      iVar1 = _DAT_1f80009c;
      param_1[4] = 2;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[0x2b] = (char)(iVar1 >> 4);
    }
    DAT_1f800182 = 0;
  }
  return;
}

