// FUN_080163c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080163c0(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  
  iVar1 = func_0x0001f40c(param_1,param_2,1);
  if (-1 < iVar1) {
    param_2[0x2b] = (char)(_DAT_1f80009c + 0x800 >> 4);
    iVar1 = func_0x0001ff7c(param_1,param_2,iVar1,1);
    if (iVar1 != 1) {
      *param_2 = 2;
      param_2[4] = 2;
      param_2[5] = 2;
      param_2[6] = 0;
    }
  }
  return;
}

