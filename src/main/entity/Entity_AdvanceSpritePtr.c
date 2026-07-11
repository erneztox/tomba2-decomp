/**
 * @brief Advances entity[0x3C] sprite data pointer by 1 u8, checks bit 0x80 terminator
 * @note Original: func_800286CC at 0x800286CC
 */
// Entity_AdvanceSpritePtr



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_AdvanceSpritePtr(int param_1)

{
  s32 bVar1;
  s32 in_zero;
  s32 in_at;
  u8 *pbVar2;
  uint uVar3;
  
  pbVar2 = *(u8 **)(param_1 + 0x3c);
  if (pbVar2 != (u8 *)0x0) {
    uVar3 = (uint)*pbVar2;
    if ((*pbVar2 & 0x80) == 0) {
      *(u8 **)(param_1 + 0x40) = pbVar2 + 1;
    }
    else {
      *(s32 *)(param_1 + 0x40) = 0;
      uVar3 = uVar3 & 0x7f;
    }
    setCopControlWord(2,0,_g_GTE_WorkF8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopControlWord(2,0x2800,_g_GTE_Work10C);
    setCopControlWord(2,0x3000,_g_GTE_Work110);
    setCopControlWord(2,0x3800,_g_GTE_Work114);
    setCopControlWord(2,0xd800,6);
    setCopControlWord(2,0xe000,0);
    setCopReg(2,in_zero,*(s32 *)(param_1 + 0x2c));
    setCopReg(2,in_at,param_1->pos_y_fixed);
    copFunction(2,0x180001);
    _g_GTE_Result[0] = getCopControlWord(2,0xf800);
    bVar1 = true;
    if (-1 < _g_GTE_Result[0]) {
      _g_GTE_Result[0] = getCopReg(2,0x13);
      if (0 < _g_GTE_Result[0]) {
        _g_GTE_Result[0] = (_g_GTE_Result[0] >> 2) + (int)*(s16 *)(param_1 + 0x32);
        if (_g_GTE_Result[0] < 4) {
          _g_GTE_Result[0] = 4;
        }
        _g_GTE_Result[0] =
             (_g_GTE_Result[0] >> (_g_GTE_Result[0] >> 10 & 0x1fU)) + (_g_GTE_Result[0] >> 10) * 0x200;
        if (0x7fb < _g_GTE_Result[0] - 4U) {
          _g_GTE_Result[0] = -1;
        }
        bVar1 = true;
        if (-1 < _g_GTE_Result[0]) {
          _g_GTE_Work8C = getCopReg(2,0xe);
          _g_GTE_Work84 = getCopReg(2,0x18);
          bVar1 = false;
        }
      }
    }
    if (!bVar1) {
      _DAT_1f800090 = 0;
      _DAT_1f800088 = _g_GTE_Work84 * (param_1->scale_y >> 0x10) >> 8;
      _g_GTE_Work84 = _g_GTE_Work84 * (param_1->scale_y & 0xffff) >> 8;
      GTE_ProjectEntity2(*(s32 *)(uVar3 * 4 + *(int *)(param_1 + 0x50)),0,0);
    }
  }
  return;
}
