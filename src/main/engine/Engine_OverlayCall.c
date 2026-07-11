/**
 * @brief Engine overlay call: switch on _DAT_1f800138[0x50], calls overlay funcs
 * @note Original: func_8007BE18 at 0x8007BE18
 */
// Engine_OverlayCall



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007be18(undefined1 param_1)

{
  undefined1 uVar1;
  
  switch(_DAT_1f800138->angle_offset) {
  case 0:
    func_0x8018fa88(param_1);
    break;
  case 1:
    func_0x8018fbcc();
    break;
  case 2:
    FUN_80074590(0x14,0xfffffff7,0);
    *(undefined1 *)(_DAT_1f800138 + 0x6b) = 1;
    DAT_800bf808 = 1;
    DAT_1f800136 = 1;
    _DAT_1f800138->angle_offset = 0;
    break;
  case 3:
    FUN_80074590(0x11,0,0);
    uVar1 = 2;
    goto LAB_8007bf00;
  case 4:
    uVar1 = 7;
    goto LAB_8007bf00;
  case 5:
    FUN_80074590(0x11,0,0);
    uVar1 = 9;
LAB_8007bf00:
    *(undefined1 *)(_DAT_1f800138 + 0x6b) = uVar1;
    _DAT_1f800138->angle_offset = 0;
  }
  return;
}
