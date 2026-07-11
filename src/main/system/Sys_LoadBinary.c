/**
 * @brief Binary segment loader: uses pointer tables at 0x8001005C, computes load address from g_OverlayBase
 * @note Original: func_8001D364 at 0x8001D364
 */
// Sys_LoadBinary



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8001d364(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  void local_28->state;
  void *local_18;
  void *local_14;
  void *local_10;
  void *local_c;
  
  uVar2 = (int)param_1 >> 3 & 7;
  local_28->type = PTR_DAT_8001005c;
  local_28->flags = PTR_DAT_80010060;
  local_28->kind = PTR_DAT_80010064;
  local_28->sub_type = PTR_DAT_80010068;
  local_18 = PTR_DAT_8001006c;
  local_14 = PTR_DAT_80010070;
  local_10 = PTR_DAT_80010074;
  local_c = PTR_DAT_80010078;
  iVar1 = _g_OverlayBase + (uint)*(u16 *)(local_28[uVar2] + (param_1 & 7) * 4) * 8;
  FUN_8001d2a8(uVar2,iVar1,
               iVar1 + (*(u16 *)((int)(local_28[uVar2] + (param_1 & 7) * 4) + 2) - 2) * 8,
               param_2 & 1 | 2);
  return;
}
