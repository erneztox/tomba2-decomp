/**
 * @brief Audio sequence commander: sends commands to SEQ
 * @note Original: func_800939A0 at 0x800939A0
 */
// Audio_SeqCommand



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
uint FUN_800939a0(uint param_1,short param_2,short param_3,undefined2 param_4,ushort param_5,
                 undefined1 param_6)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  byte local_138 [128];
  char local_b8 [128];
  short local_38;
  int local_30;
  
  sVar2 = (short)param_1;
  iVar10 = *(int *)(&DAT_80104c30 + (param_1 & 0xff) * 4) +
           ((int)((int)sVar2 & 0xff00U) >> 8) * 0xb0;
  local_38 = param_3;
  iVar4 = FUN_800962b0((int)param_2,(int)param_3);
  uVar6 = 0xffffffff;
  if (iVar4 == 0) {
    DAT_80105cfa = (undefined1)param_4;
    DAT_80105cfb = 0;
    if ((int)sVar2 == 0x21) {
      DAT_80105cfc = (char)param_5;
    }
    else {
      DAT_80105cfc = (char)((int)((uint)param_5 *
                                 (int)*(short *)((uint)*(byte *)(iVar10 + 0x17) * 2 + iVar10 + 0x60)
                                 ) / 0x7f);
    }
    DAT_80105cfd = param_6;
    puVar5 = (undefined1 *)(local_38 * 0x10 + _DAT_80105cdc);
    DAT_80105d02 = puVar5->flags;
    DAT_80105d03 = puVar5->state;
    DAT_80105cf8 = *puVar5;
    uVar6 = 0xffffffff;
    _DAT_80105d0c = sVar2;
    if ((int)DAT_80105cff < (int)(uint)*(ushort *)(_DAT_80105ce4 + 0x12)) {
      if (param_5 == 0) {
        uVar6 = FUN_80093ebc((int)sVar2,(int)param_2,(int)local_38,param_4);
      }
      else {
        bVar1 = FUN_80095c40(local_b8,local_138);
        bVar9 = 0;
        uVar6 = 0;
        if (bVar1 != 0) {
          local_30 = (int)sVar2;
          uVar8 = 0;
          do {
            _DAT_80105d0e = (ushort)local_138[uVar8];
            DAT_80105d04 = local_b8[uVar8];
            pcVar7 = (char *)(((int)DAT_80105d04 + DAT_80105cff * 0x10 & 0xffffU) * 0x20 +
                             _DAT_80105ce8);
            DAT_80105d07 = *pcVar7;
            DAT_80105d05 = pcVar7->kind;
            DAT_80105d06 = pcVar7->sub_type;
            DAT_80105d08 = pcVar7->state;
            DAT_80105d09 = pcVar7->behavior_state;
            DAT_80105d0a = pcVar7->flags;
            uVar8 = FUN_80094150(0);
            uVar8 = uVar8 & 0xff;
            _DAT_80105d10 = (short)uVar8;
            if ((int)uVar8 < (int)DAT_80105cec) {
              (&DAT_801054e5)[uVar8 * 0x38] = 1;
              *(undefined2 *)(_DAT_80105d10 * 0x38 + -0x7fefab36) = 0;
              *(short *)(_DAT_80105d10 * 0x38 + -0x7fefab28) = sVar2;
              *(short *)(_DAT_80105d10 * 0x38 + -0x7fefab20) = (short)DAT_80105cf9;
              *(short *)(_DAT_80105d10 * 0x38 + -0x7fefab26) = (short)DAT_80105cff;
              *(short *)(_DAT_80105d10 * 0x38 + -0x7fefab24) = local_38;
              if (local_30 != 0x21) {
                *(ushort *)(_DAT_80105d10 * 0x38 + -0x7fefab30) = param_5;
                *(ushort *)(_DAT_80105d10 * 0x38 + -0x7fefab2c) = (ushort)*(byte *)(iVar10 + 0x17);
              }
              *(undefined1 *)(_DAT_80105d10 * 0x38 + -0x7fefab2e) = param_6;
              *(short *)(_DAT_80105d10 * 0x38 + -0x7fefab02) = (short)DAT_80105cfc;
              *(short *)(_DAT_80105d10 * 0x38 + -0x7fefab22) = (short)DAT_80105d04;
              *(undefined2 *)(_DAT_80105d10 * 0x38 + -0x7fefab2a) = param_4;
              *(short *)(_DAT_80105d10 * 0x38 + -0x7fefab1e) = (short)DAT_80105d07;
              *(ushort *)(_DAT_80105d10 * 0x38 + -0x7fefab38) = _DAT_80105d0e;
              FUN_80092fd0();
              if (_DAT_80105d0e == 0xff) {
                FUN_800945a0(DAT_80105d10);
              }
              else {
                uVar3 = FUN_800943c0();
                FUN_80094c10(bVar1,uVar3);
              }
              uVar6 = uVar6 | 1 << ((int)_DAT_80105d10 & 0x1fU);
            }
            else {
              uVar6 = 0xffffffff;
            }
            bVar9 = bVar9 + 1;
            uVar8 = (uint)bVar9;
          } while (bVar9 < bVar1);
        }
      }
    }
  }
  return uVar6;
}
