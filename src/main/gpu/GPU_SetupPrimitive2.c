/**
 * @brief GPU primitive setup 2: sets type=2, encodes draw mode from param_2
 * @note Original: func_80083DB0 at 0x80083DB0
 */
// GPU_SetupPrimitive2



#include "tomba.h"
void FUN_80083db0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  param_1->sub_type = 2;
  if (param_2 == 0) {
    uVar1 = 0xe6000000;
  }
  else {
    uVar1 = 0xe6000001;
  }
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}
