/**
 * @brief Entity sprite drawer variant 2: different projection
 * @note Original: func_8002ECD8 at 0x8002ECD8
 */
// Entity_DrawSprite2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8002ecd8(int param_1)

{
  bool bVar1;
  undefined4 in_zero;
  undefined4 in_at;
  int iVar2;
  short sVar3;
  short sVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar4;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  uVar7 = param_1->normal_x;
  _DAT_1f800090 = *(undefined4 *)(param_1 + 0x58);
  uVar8 = param_1->normal_z;
  if (param_1->sub_type == -0x6f) {
    _DAT_1f80008c = 0x200020;
    _DAT_1f800088 = 0x10000;
    _DAT_1f800080 = 4;
  }
  else {
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopControlWord(2,0x2800,_DAT_1f80010c);
    setCopControlWord(2,0x3000,_DAT_1f800110);
    setCopControlWord(2,0x3800,_DAT_1f800114);
    setCopControlWord(2,0xd800,6);
    setCopControlWord(2,0xe000,0);
    setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
    setCopReg(2,in_at,param_1->pos_y_fixed);
    copFunction(2,0x180001);
    _DAT_1f800080 = getCopControlWord(2,0xf800);
    bVar1 = true;
    if (-1 < _DAT_1f800080) {
      _DAT_1f800080 = getCopReg(2,0x13);
      iVar2 = _DAT_1f800080 >> 2;
      if (_DAT_1f800080 < 1) {
        bVar1 = true;
      }
      else {
        _DAT_1f800080 = iVar2;
        if (iVar2 < 4) {
          _DAT_1f800080 = 4;
        }
        _DAT_1f800080 =
             (_DAT_1f800080 >> (_DAT_1f800080 >> 10 & 0x1fU)) + (_DAT_1f800080 >> 10) * 0x200;
        if (0x7fb < _DAT_1f800080 - 4U) {
          _DAT_1f800080 = -1;
        }
        bVar1 = true;
        if (-1 < _DAT_1f800080) {
          _DAT_1f80008c = getCopReg(2,0xe);
          _DAT_1f800084 = getCopReg(2,0x18);
          bVar1 = false;
        }
      }
    }
    if (bVar1) {
      return;
    }
    _DAT_1f800088 = _DAT_1f800084;
  }
  _DAT_1f800084 = _DAT_1f800088;
  iVar2 = FUN_80083e80((uint)param_1->behavior_state << 6);
  iVar6 = ((iVar2 << 5) >> 0xc) + 0x30;
  iVar2 = FUN_80083f50((uint)param_1->behavior_state << 6);
  iVar4 = iVar6 - (iVar6 * 0x10000 >> 0x11);
  sVar3 = (short)iVar4;
  iVar6 = iVar6 - ((iVar2 << 5) >> 0xc);
  iVar6 = iVar6 - (iVar6 * 0x10000 >> 0x11);
  sVar5 = (short)iVar6;
  if (_DAT_800e7ffe < 0) {
    sVar5 = (short)(iVar6 * 0x10000 >> 0x11);
    sVar3 = (short)(iVar4 * 0x10000 >> 0x11);
  }
  FUN_8002e680((int)sVar5,(int)sVar3,*(int *)(param_1 + 100) >> 1 & 0x7f7f7f,*(int *)(param_1 + 100)
               ,uVar7,uVar8);
  return;
}
