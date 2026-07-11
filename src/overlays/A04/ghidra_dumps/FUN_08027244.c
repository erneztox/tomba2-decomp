// FUN_08027244

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08027244(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((_DAT_800bf854 != 0) && (iVar2 = func_0x0007778c(), iVar2 != 0)) {
    func_0x000517f8(param_1);
    uVar1 = 5;
    if (_DAT_800bf850 == *(byte *)((byte)param_1[3] + 0x80141410)) {
      uVar1 = 1;
    }
    *param_1 = uVar1;
  }
  return;
}

