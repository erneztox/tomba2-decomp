/**
 * @brief Collision grid walker: walks grid from _g_CollisionGrid ptr
 * @note Original: func_800490E4 at 0x800490E4
 */
// Collision_GridWalk



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Collision_GridWalk(int param_1)

{
  u16 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  u16 *puVar5;
  u16 uVar6;
  
  uVar6 = 1;
  puVar1 = _g_CollisionGrid;
  if (*_g_CollisionGrid != 0) {
    do {
      puVar5 = _g_CollisionGrid + puVar1->flags;
      iVar4 = (int)(s16)*puVar5;
      iVar2 = (int)(s16)puVar5->flags;
      iVar3 = iVar4;
      if (iVar4 == iVar2) {
        iVar2 = iVar2 + 0x40;
      }
      else if (iVar2 < iVar4) {
        iVar3 = iVar2;
        iVar2 = iVar4;
      }
      if ((int)((uint)_DAT_1f8001bc - (iVar3 + -0x80) & 0xffff) <=
          ((iVar2 + 0x80) - (iVar3 + -0x80)) * 0x10000 >> 0x10) {
        iVar4 = (int)(s16)puVar5->kind;
        iVar2 = (int)(s16)puVar5->sub_type;
        iVar3 = iVar4;
        if (iVar4 == iVar2) {
          iVar2 = iVar2 + 0x40;
        }
        else if (iVar2 < iVar4) {
          iVar3 = iVar2;
          iVar2 = iVar4;
        }
        if ((int)((uint)_DAT_1f8001c0 - (iVar3 + -0x80) & 0xffff) <=
            ((iVar2 + 0x80) - (iVar3 + -0x80)) * 0x10000 >> 0x10) {
          param_1->collision_dir = (char)uVar6;
          Collision_GridLookup(uVar6 & 0xff);
          return;
        }
      }
      uVar6 = uVar6 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar6 <= *_g_CollisionGrid);
  }
  param_1->collision_dir = 1;
  Collision_GridLookup();
  _DAT_1f8001c0 = _DAT_1f8001b4;
  _DAT_1f8001bc = _DAT_1f8001b2;
  return;
}
