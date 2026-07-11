/**
 * @brief Collision check main: computes collision flags, checks geometry
 * @note Original: func_80047B5C at 0x80047B5C
 */
// Collision_CheckMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Collision_CheckMain(int param_1,int param_2)

{
  s16 sVar1;
  s32 uVar2;
  s16 *psVar3;
  u8 *pbVar4;
  uint uVar5;
  u16 uVar6;
  
  if (param_2 == 0) {
    uVar6 = 0xfff3;
    uVar5 = (uint)(u8)_DAT_1f8001e4->sub_type;
  }
  else {
    uVar6 = 0xfffd;
    uVar5 = (uint)(_DAT_1f8001e4->sub_type >> 8);
  }
  pbVar4 = (u8 *)(_DAT_1f8001d4 + (uint)_DAT_1f8001e4->flags * 8 + ((int)(uVar5 << 0x10) >> 0xd));
  if (((*_DAT_1f8001e4 & 1) == 0) ||
     (uVar2 = 0,
     (u16)(*(s16 *)(pbVar4 + 4) - (*(s16 *)(param_1 + 0x32) + -0x80)) <=
     *(u16 *)(pbVar4 + 6))) {
    psVar3 = (s16 *)(_g_CollisionGrid + (uint)*(u16 *)((uint)*pbVar4 * 2 + _g_CollisionGrid) * 2);
    sVar1 = Math_Atan2((int)psVar3->sub_type - (int)psVar3->kind,(int)psVar3->flags - (int)*psVar3);
    _g_CollisionNormalX = -sVar1;
    _g_CollisionNormalY = _g_CollisionNormalX;
    if ((*_DAT_1f8001e4 & 0x10) == 0) {
      _g_CollisionNormalY = _g_CollisionNormalX + 0x800 & 0xfff;
    }
    if (param_2 != 0) {
      _g_CollisionNormalY = _g_CollisionNormalY + 0x800 & 0xfff;
    }
    uVar2 = 1;
  }
  else {
    _DAT_1f8001a8 = _DAT_1f8001a8 & uVar6;
  }
  return uVar2;
}
