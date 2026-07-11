/**
 * @brief Collision slope calc variant 2: different scratchpad layout
 * @note Original: func_80048FC4 at 0x80048FC4
 */
// Collision_Slope2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80048fc4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (uint)_DAT_1f8001b2 - (int)(short)_DAT_1f8001bc;
  iVar2 = (uint)_DAT_1f8001b4 - (int)(short)_DAT_1f8001c0;
  iVar5 = (uint)_DAT_1f8001b6 - (int)(short)_DAT_1f8001bc;
  iVar4 = (uint)_DAT_1f8001b8 - (int)(short)_DAT_1f8001c0;
  if (iVar5 * iVar5 + iVar4 * iVar4 < iVar1 * iVar1 + iVar2 * iVar2) {
    if (DAT_1f8001fd == '\0') {
      uVar3 = 0xffffffff;
      _DAT_1f8001bc = _DAT_1f8001b6;
      _DAT_1f8001c0 = _DAT_1f8001b8;
    }
    else {
      if (param_2 == 0) {
        param_1->collision_dir = DAT_1f8001fd;
      }
      FUN_80048ecc(DAT_1f8001fd);
      uVar3 = 1;
    }
  }
  else if (DAT_1f8001fc == '\0') {
    uVar3 = 0xffffffff;
    _DAT_1f8001bc = _DAT_1f8001b2;
    _DAT_1f8001c0 = _DAT_1f8001b4;
  }
  else {
    if (param_2 == 0) {
      param_1->collision_dir = DAT_1f8001fc;
    }
    FUN_80048ecc(DAT_1f8001fc);
    uVar3 = 1;
  }
  return uVar3;
}
