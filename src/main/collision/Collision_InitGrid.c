/**
 * @brief Initializes collision grid pointers from header at 0x1F8001C8
 * @note Original: func_80049968 at 0x80049968
 */
// Collision_InitGrid



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Collision_InitGrid(uint param_1)

{
  int iVar1;
  
  iVar1 = _g_CollisionGrid + (uint)*(u16 *)((param_1 & 0xff) * 2 + _g_CollisionGrid) * 2;
  _DAT_1f8001cc = iVar1 + 0x14;
  _DAT_1f8001d0 = iVar1 + (uint)*(u16 *)(iVar1 + 0xc) * 2;
  _DAT_1f8001d4 = iVar1 + (uint)iVar1->anim_timer * 2;
  _DAT_1f8001d8 = iVar1 + (uint)*(u16 *)(iVar1 + 0x10) * 2;
  _DAT_1f8001dc = iVar1 + (uint)*(u16 *)(iVar1 + 0x12) * 2;
  return;
}
