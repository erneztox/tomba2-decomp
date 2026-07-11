/**
 * @brief GTE projection + animation frame processing without entity->action_state scale factor
 * @note Original: func_80027CB4 at 0x80027CB4
 */
// Entity_ProcessProjCmdNoScale



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void FUN_80027cb4(int param_1)

{
  s32 bVar1;
  s32 in_zero;
  s32 in_at;
  s32 uVar2;
  
  if (param_1->scale_y != 0) {
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
    if (bVar1) {
      FUN_80031780(param_1);
    }
    else {
      _DAT_1f800090 = 0;
      _DAT_1f800088 = _g_GTE_Work84;
      uVar2 = FUN_80027a4c(param_1->scale_y,*(s32 *)(param_1 + 0x44));
      param_1->anim_data = uVar2;
    }
  }
  return;
}
