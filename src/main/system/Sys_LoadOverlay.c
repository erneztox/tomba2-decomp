/**
 * @brief Loads overlay binary from CD: sets up params, calls CD read + overlay init
 * @note Original: func_8001D2A8 at 0x8001D2A8
 */
// Sys_LoadOverlay



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8001d2a8(u8 param_1,s32 param_2,s32 param_3,int param_4)

{
  s32 local_20->kind;
  
  local_20->type = DAT_80010058;
  FUN_80052010(2);
  DAT_801fe147 = (u8)param_4 & 1;
  DAT_800be0e4 = *(u8 *)((int)local_20 + (param_4 >> 1 & 3U));
  _DAT_801fe134 = param_2;
  _DAT_801fe138 = param_3;
  DAT_801fe146 = param_1;
  FUN_80051f14(2,FUN_8001cfc8);
  return;
}
