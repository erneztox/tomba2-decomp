/**
 * @brief Audio sequence controller: manages SEQ playback state
 * @note Original: func_80092660 at 0x80092660
 */
// Audio_SeqControl



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int Audio_SeqControl(u16 param_1,s16 param_2,u16 param_3,s8 param_4,s16 param_5,
                s16 param_6,s16 param_7,s16 param_8)

{
  s8 cVar1;
  s16 uVar2;
  int iVar3;
  u8 *puVar4;
  int iVar5;
  
  if (_DAT_80104c24 != 1) {
    _DAT_80104c24 = 1;
    if ((param_1 < 0x18) && (iVar3 = CD_CheckSlot((int)param_2,(int)(s16)param_3), iVar3 == 0)) {
      _DAT_80105d0c = 0x21;
      iVar3 = (int)param_7;
      iVar5 = (int)param_8;
      DAT_80105cfa = (u8)param_5;
      DAT_80105cfb = (u8)param_6;
      DAT_80105cfc = (char)param_7;
      if (iVar3 == iVar5) {
        DAT_80105cfd = '@';
      }
      else if (iVar5 < iVar3) {
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && (iVar5 << 6 == -0x80000000)) {
          trap(0x1800);
        }
        DAT_80105cfd = (char)((iVar5 << 6) / iVar3);
      }
      else {
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && (iVar3 << 6 == -0x80000000)) {
          trap(0x1800);
        }
        DAT_80105cfc = (char)param_8;
        DAT_80105cfd = '\x7f' - (char)((iVar3 << 6) / iVar5);
      }
      puVar4 = (u8 *)(((int)((uint)param_3 << 0x10) >> 0xc) + _DAT_80105cdc);
      DAT_80105d02 = puVar4->flags;
      DAT_80105d03 = puVar4->flags;
      DAT_80105cf8 = *puVar4;
      puVar4 = (u8 *)
               ((((int)param_4 + DAT_80105cff * 0x10) * 0x10000 >> 0xb) + _DAT_80105ce8);
      DAT_80105d07 = *puVar4;
      _DAT_80105d0e = *(s16 *)(puVar4 + 0x16);
      DAT_80105d05 = puVar4->flags;
      DAT_80105d06 = puVar4->flags;
      DAT_80105d08 = puVar4->flags;
      DAT_80105d09 = puVar4->flags;
      DAT_80105d0a = puVar4->flags;
      DAT_80105d04 = param_4;
      if (_DAT_80105d0e != 0) {
        iVar3 = (s16)param_1 * 0x38;
        _DAT_80105d10 = param_1;
        *(s16 *)(iVar3 + -0x7fefab28) = 0x21;
        *(s16 *)(iVar3 + -0x7fefab20) = param_2;
        cVar1 = DAT_80105cff;
        *(u16 *)(iVar3 + -0x7fefab24) = param_3;
        *(s16 *)(iVar3 + -0x7fefab26) = (s16)cVar1;
        *(s16 *)(iVar3 + -0x7fefab38) = _DAT_80105d0e;
        cVar1 = DAT_80105d04;
        *(s16 *)(iVar3 + -0x7fefab2a) = param_5;
        (&DAT_801054e5)[iVar3] = 1;
        *(s16 *)(iVar3 + -0x7fefab36) = 0;
        *(s16 *)(iVar3 + -0x7fefab22) = (s16)cVar1;
        *(s16 *)(iVar3 + -0x7fefab02) = (s16)DAT_80105cfc;
        Audio_VoiceUpdate();
        if (_DAT_80105d0e == 0xff) {
          Audio_SeqTimer2(param_1 & 0xff);
        }
        else {
          uVar2 = Audio_CalcValue(param_5,param_6);
          Audio_SeqTime(1,uVar2);
        }
        _DAT_80104c24 = 0;
        return (int)(s16)param_1;
      }
    }
    _DAT_80104c24 = 0;
  }
  return -1;
}
