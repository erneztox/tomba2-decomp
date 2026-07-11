/**
 * @brief Audio voice param variant 2: extended parameter setup
 * @note Original: func_80095D10 at 0x80095D10
 */
// Audio_VoiceParam2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int FUN_80095d10(uint param_1,s16 param_2,s16 param_3,u16 param_4,u16 param_5)

{
  s16 sVar1;
  s16 sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  iVar12 = 0;
  sVar1 = (s16)param_1;
  iVar9 = (int)param_3;
  uVar11 = (uint)param_5;
  iVar10 = *(int *)(&g_AudioChannels + (param_1 & 0xff) * 4) +
           ((int)((int)sVar1 & 0xff00U) >> 8) * 0xb0;
  FUN_800962b0((int)param_2,iVar9);
  if (uVar11 == 0) {
    uVar11 = 1;
  }
  if (param_4 == 0) {
    param_4 = 1;
  }
  iVar8 = 0;
  _DAT_80105d0c = sVar1;
  if ('\0' < DAT_80105cec) {
    iVar3 = 0;
    do {
      if (((((DAT_800ac3f4 & 1 << (iVar3 >> 0x10 & 0x1fU)) == 0) &&
           (iVar3 = (iVar3 >> 0x10) * 0x38, (int)*(s16 *)(iVar3 + -0x7fefab28) == (int)sVar1)) &&
          (*(s16 *)(iVar3 + -0x7fefab24) == iVar9)) &&
         ((int)*(s16 *)(iVar3 + -0x7fefab20) == (int)param_2)) {
        iVar3 = (uint)*(u8 *)(iVar10 + 0x17) * 2 + iVar10;
        uVar4 = (uint)iVar3->draw_x;
        if ((uVar4 != param_4) && (uVar4 == 0)) {
          iVar3->draw_x = 1;
        }
        sVar2 = (s16)iVar8;
        iVar3 = sVar2 * 0x38;
        iVar7 = (*(s16 *)(iVar3 + -0x7fefab26) * 0x10 + (int)*(s16 *)(iVar3 + -0x7fefab22)) *
                0x20 + _DAT_80105ce8;
        uVar6 = (((int)(((int)((int)*(s16 *)(iVar3 + -0x7fefab30) * (uint)param_4) / 0x7f) *
                       (uint)*(u8 *)(_DAT_80105ce4 + 0x18) * 0x3fff) / 0x3f01) *
                 (uint)*(u8 *)(iVar9 * 0x10 + _DAT_80105cdc + 1) * (uint)iVar7->kind) /
                0x3f01;
        uVar4 = (uVar6 * iVar10->rot_z) / 0x7f;
        uVar5 = (uint)iVar7->sub_type;
        uVar6 = (uVar6 * iVar10->target_rot_y) / 0x7f;
        if (uVar5 < 0x40) {
          uVar6 = (uVar6 * uVar5) / 0x3f;
        }
        else {
          uVar4 = (uVar4 * (0x7f - uVar5)) / 0x3f;
        }
        uVar5 = (uint)*(u8 *)(*(s16 *)(sVar2 * 0x38 + -0x7fefab24) * 0x10 + _DAT_80105cdc + 4);
        if (uVar5 < 0x40) {
          uVar6 = (uVar6 * uVar5) / 0x3f;
        }
        else {
          uVar4 = (uVar4 * (0x7f - uVar5)) / 0x3f;
        }
        uVar5 = uVar11 & 0xff;
        if (uVar5 < 0x40) {
          uVar6 = (uVar6 * uVar5) / 0x3f;
        }
        else {
          uVar4 = (uVar4 * (0x7f - uVar5)) / 0x3f;
        }
        uVar5 = uVar4 * uVar4;
        if (_DAT_80105cd8 == 1) {
          if (uVar4 < uVar6) {
            uVar4 = uVar6;
          }
          uVar6 = uVar4;
          uVar5 = uVar6 * uVar6;
        }
        iVar3 = (int)sVar2;
        *(s16 *)(&DAT_80105a28 + iVar3 * 0x10) = (s16)(uVar5 / 0x3fff);
        *(s16 *)(&DAT_80105a2a + iVar3 * 0x10) = (s16)((uVar6 * uVar6) / 0x3fff);
        iVar12 = iVar12 + 1;
        (&DAT_80105a08)[iVar3] = (&DAT_80105a08)[iVar3] | 3;
      }
      iVar8 = iVar8 + 1;
      iVar3 = iVar8 * 0x10000;
    } while (iVar8 * 0x10000 >> 0x10 < (int)DAT_80105cec);
  }
  return iVar12;
}
