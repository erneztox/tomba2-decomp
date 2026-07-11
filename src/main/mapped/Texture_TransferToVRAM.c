/**
 * @brief Sets up VRAM texture transfer: callback setup, address calc, event trigger
 * @note Original: func_80044CD4 at 0x80044CD4
 */
// Texture_TransferToVRAM



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80044cd4(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  DAT_1f80019b = 0;
  FUN_80052010(2);
  uVar1 = 0;
  if (_DAT_801fe070 == 0) {
    _DAT_1f8001f4 = param_3 + 3;
    _DAT_1f8001f0 = DAT_800be100 + param_2;
    if (_DAT_1f8001f4 < 0) {
      _DAT_1f8001f4 = param_3 + 6;
    }
    _DAT_1f8001f4 = _DAT_1f8001f4 >> 2;
    DAT_801fe0dc = 1;
    _DAT_1f8001f8 = param_1;
    FUN_80051f14(1,FUN_8001db38);
    uVar1 = 1;
  }
  return uVar1;
}
