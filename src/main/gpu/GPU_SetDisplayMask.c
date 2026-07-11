/**
 * @brief GPU display mask setter: sends SetDispMask cmd, calls GPU via ptr table
 * @note Original: func_80080ED4 at 0x80080ED4
 */
// GPU_SetDisplayMask



#include "tomba.h"
void FUN_80080ed4(int param_1)

{
  undefined4 uVar1;
  
  if (1 < DAT_800a59a2) {
    (*(code *)PTR_FUN_800a599c)(s_SetDispMask__d_____8001bec8,param_1);
  }
  if (param_1 == 0) {
    FUN_80083af8(&DAT_800a5a0c,0xffffffff,0x14);
  }
  uVar1 = 0x3000001;
  if (param_1 != 0) {
    uVar1 = 0x3000000;
  }
  (*PTR_PTR_800a5998->parent)(uVar1);
  return;
}
