/**
 * @brief GPU OT submitter variant 2: different queue handling
 * @note Original: func_8008007C at 0x8008007C
 */
// GPU_OT_Submit2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
uint * FUN_8008007c(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_zero;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  
  if (param_3 != 0) {
    puVar9 = param_1 + 4;
    puVar8 = _DAT_800bf544 + 0xc;
    do {
      param_3 = param_3 + -1;
      setCopReg(2,in_zero,param_1[10]);
      setCopReg(2,0x800,param_1->counter2 >> 0x10);
      uVar6 = puVar9[-3];
      puVar8[-5] = uVar6 & 0xfff0f0f0;
      copFunction(2,0x180001);
      uVar5 = puVar9[-1];
      puVar8[-2] = (uVar6 & 0xfff0f0f) << 4;
      puVar8[-6] = uVar5;
      _DAT_1f800080 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800080) {
        uVar5 = getCopReg(2,0xe);
        _DAT_800bf544->render_flags = uVar5;
        setCopReg(2,in_zero,param_1->behavior_state);
        setCopReg(2,0x800,param_1->action_state);
        setCopReg(2,0x1800,param_1->action_state >> 0x10);
        setCopReg(2,_DAT_800bf544 + 0xb,param_1->sub_action);
        setCopReg(2,uVar6,param_1->counter1);
        setCopReg(2,0x2800,param_1->counter2);
        uVar5 = *param_1;
        puVar8[-0xb] = uVar5 & 0xfff0f0f0;
        copFunction(2,0x280030);
        puVar8[-8] = (uVar5 & 0xfff0f0f) << 4;
        _DAT_1f800080 = getCopControlWord(2,0xf800);
        if (-1 < _DAT_1f800080) {
          copFunction(2,0x1400006);
          puVar8[-9] = puVar9[-2];
          _DAT_1f800080 = getCopReg(2,0x18);
          if (0 < _DAT_1f800080) {
            uVar5 = getCopReg(2,0xc);
            _DAT_800bf544->kind = uVar5;
            uVar5 = getCopReg(2,0xd);
            _DAT_800bf544->behavior_state = uVar5;
            uVar5 = getCopReg(2,0xe);
            _DAT_800bf544->counter1 = uVar5;
            if ((((((ushort)puVar8[-10] < 0x140) || ((ushort)puVar8[-7] < 0x140)) ||
                 ((ushort)puVar8[-4] < 0x140)) || ((ushort)puVar8[-1] < 0x140)) &&
               (((*(ushort *)((int)puVar8 + -0x26) < 0xf0 ||
                 (*(ushort *)((int)puVar8 + -0x1a) < 0xf0)) ||
                ((*(ushort *)((int)puVar8 + -0xe) < 0xf0 || (*(ushort *)((int)puVar8 + -2) < 0xf0)))
                ))) {
              uVar5 = uVar6 >> 0x18 & 3;
              if (uVar5 == 1) {
                iVar2 = getCopReg(2,0x10);
                iVar7 = getCopReg(2,0x11);
                iVar3 = getCopReg(2,0x12);
                _DAT_1f800084 = getCopReg(2,0x13);
                if (iVar7 < iVar2) {
                  iVar7 = iVar2;
                }
                bVar1 = _DAT_1f800084 < iVar7;
                if (_DAT_1f800084 < iVar3) {
                  bVar1 = iVar3 < iVar7;
                  _DAT_1f800084 = iVar3;
                }
LAB_80080314:
                if (bVar1) {
                  _DAT_1f800084 = iVar7;
                }
                _DAT_1f800084 = _DAT_1f800084 >> 2;
              }
              else {
                if (uVar5 == 2) {
                  iVar2 = getCopReg(2,0x10);
                  iVar7 = getCopReg(2,0x11);
                  iVar3 = getCopReg(2,0x12);
                  _DAT_1f800084 = getCopReg(2,0x13);
                  if (iVar2 < iVar7) {
                    iVar7 = iVar2;
                  }
                  bVar1 = iVar7 < _DAT_1f800084;
                  if (iVar3 < _DAT_1f800084) {
                    bVar1 = iVar7 < iVar3;
                    _DAT_1f800084 = iVar3;
                  }
                  goto LAB_80080314;
                }
                copFunction(2,0x168002e);
                _DAT_1f800084 = getCopReg(2,7);
              }
              _DAT_1f800084 =
                   (_DAT_1f800084 >> (_DAT_1f800084 >> 10 & 0x1fU)) + (_DAT_1f800084 >> 10) * 0x200;
              if (0x7fb < _DAT_1f800084 - 4U) {
                _DAT_1f800084 = -1;
              }
              if (-1 < _DAT_1f800084) {
                uVar5 = *puVar9;
                puVar8[-3] = uVar5;
                *puVar8 = uVar5 >> 0x10;
                puVar4 = (uint *)(param_2 + _DAT_1f800084 * 4);
                *_DAT_800bf544 = *puVar4 | 0xc000000;
                *puVar4 = (uint)_DAT_800bf544;
                puVar8 = puVar8 + 0xd;
                _DAT_800bf544 = _DAT_800bf544 + 0xd;
              }
            }
          }
        }
      }
      puVar9 = puVar9 + 0xb;
      param_1 = param_1 + 0xb;
    } while (param_3 != 0);
  }
  return param_1;
}
