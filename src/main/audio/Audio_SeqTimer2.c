/**
 * @brief Audio sequence timer variant 2: tick computation
 * @note Original: func_800945A0 at 0x800945A0
 */
// Audio_SeqTimer2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800945a0(uint param_1)

{
  u8 bVar1;
  s8 cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = (uint)(((int)((int)DAT_80105cfc * (uint)_DAT_80105ce4->flags * 0x3fff) / 0x3f01
                 ) * (int)DAT_80105d02 * (int)DAT_80105d05) / 0x3f01;
  iVar4 = *(int *)(&g_AudioChannels + (_DAT_80105d0c & 0xff) * 4) +
          ((int)((int)(s16)_DAT_80105d0c & 0xff00U) >> 8) * 0xb0;
  uVar7 = uVar6;
  if ((int)(s16)_DAT_80105d0c != 0x21) {
    uVar7 = (uVar6 iVar4->flags) / 0x7f;
    uVar6 = (uVar6 iVar4->flags) / 0x7f;
  }
  uVar5 = (uint)DAT_80105d06;
  if (uVar5 < 0x40) {
    uVar6 = (uVar6 * uVar5) / 0x3f;
  }
  else {
    uVar7 = (uVar7 * (0x7f - uVar5)) / 0x3f;
  }
  uVar5 = (uint)DAT_80105d03;
  if (uVar5 < 0x40) {
    uVar6 = (uVar6 * uVar5) / 0x3f;
  }
  else {
    uVar7 = (uVar7 * (0x7f - uVar5)) / 0x3f;
  }
  uVar5 = (uint)DAT_80105cfd;
  if (uVar5 < 0x40) {
    uVar6 = (uVar5 * uVar6) / 0x3f;
  }
  else {
    uVar7 = (uVar7 * (0x7f - uVar5)) / 0x3f;
  }
  uVar5 = uVar6;
  if ((_DAT_80105cd8 == 1) && (uVar5 = uVar7, uVar7 < uVar6)) {
    uVar5 = uVar6;
    uVar7 = uVar6;
  }
  if (_DAT_80105d0c != 0x21) {
    uVar7 = (uVar7 * uVar7) / 0x3fff;
    uVar5 = (uVar5 * uVar5) / 0x3fff;
  }
  FUN_80098100((int)DAT_80105cfa - (int)DAT_80105d08 & 0x3f);
  uVar6 = param_1 & 0xff;
  *(s16 *)(&DAT_80105a2a + uVar6 * 0x10) = (s16)uVar5;
  bVar1 = (&DAT_80105a08)[uVar6];
  *(s16 *)(&DAT_80105a28 + uVar6 * 0x10) = (s16)uVar7;
  (&DAT_80105a08)[uVar6] = bVar1 | 3;
  cVar2 = DAT_80105cec;
  if (uVar6 < 0x10) {
    _DAT_801054c0 = (u16)(1 << (param_1 & 0x1f));
    _DAT_801054c2 = 0;
  }
  else {
    _DAT_801054c0 = 0;
    _DAT_801054c2 = (u16)(1 << (uVar6 - 0x10 & 0x1f));
  }
  *(s16 *)((param_1 & 0xff) * 0x38 + -0x7fefab34) = 10;
  iVar4 = 0;
  if ('\0' < cVar2) {
    iVar3 = 0;
    do {
      if ((DAT_800ac3f4 & 1 << (iVar3 >> 0x10 & 0x1fU)) == 0) {
        iVar3 = (iVar3 >> 0x10) * 0x38;
        (&DAT_801054e5)[iVar3] = (&DAT_801054e5)[iVar3] & 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar4 * 0x10000;
    } while (iVar4 * 0x10000 >> 0x10 < (int)DAT_80105cec);
  }
  (&DAT_801054e5)[(param_1 & 0xff) * 0x38] = 2;
  _DAT_801054b8 = _DAT_801054b8 | _DAT_801054c0;
  _DAT_801054ba = _DAT_801054ba | _DAT_801054c2;
  _DAT_80105bf0 = _DAT_80105bf0 & ~_DAT_801054b8;
  _DAT_80105bf2 = _DAT_80105bf2 & ~_DAT_801054ba;
  if ((DAT_80105d0a & 4) == 0) {
    _DAT_801054bc = _DAT_801054bc & ~_DAT_801054c0;
    _DAT_801054be = _DAT_801054be & ~_DAT_801054c2;
  }
  else {
    _DAT_801054bc = _DAT_801054bc | _DAT_801054c0;
    _DAT_801054be = _DAT_801054be | _DAT_801054c2;
  }
  return;
}
