/**
 * @brief Audio sequence timer: computes seq time from tick count
 * @note Original: func_80094C10 at 0x80094C10
 */
// Audio_SeqTime



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80094c10(s32 param_1,s16 param_2)

{
  int iVar1;
  uint uVar2;
  u16 uVar3;
  u16 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = (uint)(((int)((int)DAT_80105cfc * (uint)*(u8 *)(_DAT_80105ce4 + 0x18) * 0x3fff) / 0x3f01
                 ) * (int)DAT_80105d02 * (int)DAT_80105d05) / 0x3f01;
  iVar1 = *(int *)(&g_AudioChannels + (_DAT_80105d0c & 0xff) * 4) +
          ((int)((int)(s16)_DAT_80105d0c & 0xff00U) >> 8) * 0xb0;
  uVar6 = uVar5;
  if ((int)(s16)_DAT_80105d0c != 0x21) {
    uVar6 = (uVar5 * iVar1->rot_z) / 0x7f;
    uVar5 = (uVar5 * iVar1->target_rot_y) / 0x7f;
  }
  uVar2 = (uint)DAT_80105d06;
  if (uVar2 < 0x40) {
    uVar5 = (uVar5 * uVar2) / 0x3f;
  }
  else {
    uVar6 = (uVar6 * (0x7f - uVar2)) / 0x3f;
  }
  uVar2 = (uint)DAT_80105d03;
  if (uVar2 < 0x40) {
    uVar5 = (uVar5 * uVar2) / 0x3f;
  }
  else {
    uVar6 = (uVar6 * (0x7f - uVar2)) / 0x3f;
  }
  uVar2 = (uint)DAT_80105cfd;
  if (uVar2 < 0x40) {
    uVar5 = (uVar5 * uVar2) / 0x3f;
  }
  else {
    uVar6 = (uVar6 * (0x7f - uVar2)) / 0x3f;
  }
  uVar2 = uVar5;
  if ((_DAT_80105cd8 == 1) && (uVar2 = uVar6, uVar6 < uVar5)) {
    uVar6 = uVar5;
    uVar2 = uVar5;
  }
  if (_DAT_80105d0c != 0x21) {
    uVar6 = (uVar6 * uVar6) / 0x3fff;
    uVar2 = (uVar2 * uVar2) / 0x3fff;
  }
  iVar1 = ((int)_DAT_80105d10 & 0x1fffU) * 0x10;
  *(s16 *)(&DAT_80105a2c + iVar1) = param_2;
  *(s16 *)(&DAT_80105a28 + iVar1) = (s16)uVar6;
  *(s16 *)(&DAT_80105a2a + iVar1) = (s16)uVar2;
  (&DAT_80105a08)[_DAT_80105d10] = (&DAT_80105a08)[_DAT_80105d10] | 7;
  *(s16 *)(_DAT_80105d10 * 0x38 + -0x7fefab34) = param_2;
  uVar6 = (uint)_DAT_80105d10;
  if ((int)uVar6 < 0x10) {
    uVar4 = (u16)(1 << (uVar6 & 0x1f));
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = (u16)(1 << (uVar6 - 0x10 & 0x1f));
  }
  if ((DAT_80105d0a & 4) == 0) {
    _DAT_801054bc = _DAT_801054bc & ~uVar4;
    _DAT_801054be = _DAT_801054be & ~uVar3;
  }
  else {
    _DAT_801054bc = _DAT_801054bc | uVar4;
    _DAT_801054be = _DAT_801054be | uVar3;
  }
  _DAT_801054c0 = _DAT_801054c0 & ~uVar4;
  _DAT_801054ba = _DAT_801054ba | uVar3;
  _DAT_801054c2 = _DAT_801054c2 & ~uVar3;
  _DAT_801054b8 = _DAT_801054b8 | uVar4;
  _DAT_80105bf0 = _DAT_80105bf0 & ~_DAT_801054b8;
  _DAT_80105bf2 = _DAT_80105bf2 & ~_DAT_801054ba;
  return;
}
