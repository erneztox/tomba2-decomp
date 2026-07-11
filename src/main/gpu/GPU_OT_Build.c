/**
 * @brief GPU OT builder: constructs ordering table entries
 * @note Original: func_8007FDB0 at 0x8007FDB0
 */
// GPU_OT_Build



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
uint * FUN_8007fdb0(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 in_zero;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined2 *puVar8;
  uint *puVar9;
  
  puVar9 = param_1;
  if (param_3 != 0) {
    puVar8 = (undefined2 *)((int)param_1 + 0x22);
    puVar7 = _DAT_800bf544 + 9;
    iVar3 = 0x1f800000;
    do {
      param_3 = param_3 + -1;
      setCopReg(2,in_zero,puVar9->state);
      setCopReg(2,iVar3,puVar9->action_state);
      setCopReg(2,0x800,puVar9->behavior_state);
      setCopReg(2,param_1,puVar9->sub_action);
      setCopReg(2,0x1800,puVar9->behavior_state >> 0x10);
      setCopReg(2,param_2,puVar9->counter1);
      puVar7[-8] = *puVar9;
      copFunction(2,0x280030);
      puVar7[-6] = *(uint *)(puVar8 + -0xd);
      puVar7[-3] = *(uint *)(puVar8 + -0xb);
      uVar5 = *(uint *)(puVar8 + -0xf);
      _DAT_1f800080 = getCopControlWord(2,0xf800);
      if (-1 < _DAT_1f800080) {
        copFunction(2,0x1400006);
        puVar7[-5] = uVar5 & 0xfff0f0f0;
        _DAT_1f800080 = getCopReg(2,0x18);
        if (0 < _DAT_1f800080) {
          uVar2 = getCopReg(2,0xc);
          _DAT_800bf544->kind = uVar2;
          uVar2 = getCopReg(2,0xd);
          _DAT_800bf544->behavior_state = uVar2;
          uVar2 = getCopReg(2,0xe);
          _DAT_800bf544->counter1 = uVar2;
          if (((((ushort)puVar7[-7] < 0x140) || ((ushort)puVar7[-4] < 0x140)) ||
              ((ushort)puVar7[-1] < 0x140)) &&
             (((*(ushort *)((int)puVar7 + -0x1a) < 0xf0 || (*(ushort *)((int)puVar7 + -0xe) < 0xf0))
              || (*(ushort *)((int)puVar7 + -2) < 0xf0)))) {
            puVar7[-2] = (uVar5 & 0xfff0f0f) << 4;
            uVar5 = uVar5 >> 0x18 & 3;
            if (uVar5 == 1) {
              iVar3 = getCopReg(2,0x11);
              iVar6 = getCopReg(2,0x12);
              _DAT_1f800084 = getCopReg(2,0x13);
              if (iVar6 < iVar3) {
                bVar1 = _DAT_1f800084 < iVar3;
                iVar6 = iVar3;
                goto LAB_8007ff5c;
              }
              bVar1 = _DAT_1f800084 < iVar6;
LAB_8007ffbc:
              _DAT_1f800084 = _DAT_1f800084 >> 2;
              if (!bVar1) goto LAB_8007ffdc;
LAB_8007ffc8:
              _DAT_1f800084 = iVar6 >> 2;
            }
            else if (uVar5 == 2) {
              iVar3 = getCopReg(2,0x11);
              iVar6 = getCopReg(2,0x12);
              _DAT_1f800084 = getCopReg(2,0x13);
              if (iVar6 <= iVar3) {
                bVar1 = iVar6 < _DAT_1f800084;
                goto LAB_8007ffbc;
              }
              bVar1 = iVar3 < _DAT_1f800084;
              iVar6 = iVar3;
LAB_8007ff5c:
              _DAT_1f800084 = _DAT_1f800084 >> 2;
              if (bVar1) goto LAB_8007ffc8;
            }
            else {
              copFunction(2,0x158002d);
              _DAT_1f800084 = getCopReg(2,7);
            }
LAB_8007ffdc:
            _DAT_1f800084 =
                 (_DAT_1f800084 >> (_DAT_1f800084 >> 10 & 0x1fU)) + (_DAT_1f800084 >> 10) * 0x200;
            if (0x7fb < _DAT_1f800084 - 4U) {
              _DAT_1f800084 = -1;
            }
            param_1 = (uint *)0x9000000;
            if (-1 < _DAT_1f800084) {
              *(undefined2 *)puVar7 = *puVar8;
              puVar4 = (uint *)(param_2 + _DAT_1f800084 * 4);
              *_DAT_800bf544 = *puVar4 | 0x9000000;
              *puVar4 = (uint)_DAT_800bf544;
              puVar7 = puVar7 + 10;
              _DAT_800bf544 = _DAT_800bf544 + 10;
            }
          }
        }
      }
      puVar8 = puVar8 + 0x12;
      puVar9 = puVar9 + 9;
      iVar3 = param_3;
    } while (param_3 != 0);
  }
  return puVar9;
}
