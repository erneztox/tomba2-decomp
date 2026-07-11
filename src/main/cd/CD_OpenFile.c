/**
 * @brief Opens file on CD: looks up name, seeks to sector, returns success
 * @note Original: func_8008C1EC at 0x8008C1EC
 */
// CD_OpenFile



#include "tomba.h"
s32 FUN_8008c1ec(s32 param_1,s32 param_2,s32 param_3)

{
  int iVar1;
  u8 auStack_18->counter1;
  
  FUN_8008a00c(param_2,auStack_18);
  FUN_80089bac(2,auStack_18,0);
  FUN_8008c960(param_1,param_3,0x80);
  iVar1 = FUN_8008cafc(0,0);
  return iVar1 == 0;
}
