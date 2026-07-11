/**
 * @brief Entity trail init: sets _DAT_1f8000c8/cc based on param, plays SFX
 * @note Original: func_8006B020 at 0x8006B020
 */
// Entity_InitTrail



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006b020(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_2 == 1) {
    _DAT_1f8000c8 = 0x96;
    _DAT_1f8000cc = 0;
  }
  else {
    if (param_2 < 2) {
      if (param_2 != 0) goto LAB_8006b0c0;
      bVar1 = param_1->kind == '\x06';
      _DAT_1f8000cc = 0xfff0;
    }
    else {
      if (param_2 != 2) goto LAB_8006b0c0;
      _DAT_1f8000cc = 0xffc0;
    }
    _DAT_1f8000c8 = 0;
  }
  _DAT_1f8000ca = 0;
LAB_8006b0c0:
  FUN_80051614(param_1,&DAT_1f8000c8,7,bVar1);
  return;
}
