/**
 * @brief Engine overlay call: switch on _g_CurrentEntity[0x50], calls overlay funcs
 * @note Original: func_8007BE18 at 0x8007BE18
 */
// Engine_OverlayCall



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8007be18(u8 param_1)

{
  u8 uVar1;
  
  switch(_g_CurrentEntity->angle_offset) {
  case 0:
    func_0x8018fa88(param_1);
    break;
  case 1:
    func_0x8018fbcc();
    break;
  case 2:
    FUN_80074590(0x14,0xfffffff7,0);
    *(u8 *)(_g_CurrentEntity + 0x6b) = 1;
    DAT_800bf808 = 1;
    DAT_1f800136 = 1;
    _g_CurrentEntity->angle_offset = 0;
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
    *(u8 *)(_g_CurrentEntity + 0x6b) = uVar1;
    _g_CurrentEntity->angle_offset = 0;
  }
  return;
}
