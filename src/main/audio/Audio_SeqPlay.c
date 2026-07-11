/**
 * @brief Audio sequence player: checks g_EngineState, plays SEQ
 * @note Original: func_80075824 at 0x80075824
 */
// Audio_SeqPlay



#include "tomba.h"
void Audio_SeqPlay(uint *param_1)

{
  s32 bVar1;
  s8 cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  s16 uVar6;
  
  cVar2 = g_PadFlag;
  if (g_EngineState != '\x02') {
    uVar6 = (s16)((s16)param_1[10] * 0x47ff >> 0xf);
    goto LAB_800759fc;
  }
  if (g_CurrentOverlay == '\x01') {
    uVar6 = 0x7fff;
    if ((DAT_800be0e4 & 2) == 0) {
      if ((DAT_800be0e4 & 8) == 0) {
        uVar6 = (s16)((s16)param_1[10] * 0x7fff >> 0xf);
      }
      else {
        uVar6 = (s16)(((uint)DAT_800fb165 * 0x7fff) / 9);
      }
    }
    *param_1 = *param_1 | 3;
    goto LAB_800759fc;
  }
  iVar3 = (int)(s16)param_1->flags;
  iVar4 = (int)*(s16 *)((int)param_1 + 0x2a);
  iVar5 = 0x100;
  if (g_CurrentOverlay == '\x02') {
    iVar5 = 0x400;
  }
  if (iVar3 < iVar4) {
    iVar3 = iVar3 + iVar5;
    bVar1 = iVar4 < iVar3;
LAB_80075934:
    if (bVar1) {
      iVar3 = iVar4;
    }
  }
  else if (iVar4 < iVar3) {
    iVar3 = iVar3 - iVar5;
    bVar1 = iVar3 < iVar4;
    goto LAB_80075934;
  }
  *(s16 *)(param_1 + 0xb) = (s16)iVar3;
  iVar3 = (s16)param_1[10] * iVar3 >> 0xf;
  if ((cVar2 != '\0') && (iVar3 = iVar3 * 5 >> 2, 0x7ffe < iVar3)) {
    iVar3 = 0x7fff;
  }
  if (((iVar3 < 0x11) && (*(s8*)((int)param_1 + 0x33) != '\0')) && (g_ActionMode == '\0')) {
    Audio_ClampVolume(0x47ff);
    Sys_OverlayDispatch(DAT_1f80023b,1);
    *(u8 *)((int)param_1 + 0x33) = 0;
  }
  iVar4 = (uint)(u16)param_1[0xc] +
          ((int)*(s16 *)((int)param_1 + 0x2e) - (int)(s16)param_1[0xc] >> 3);
  *(s16 *)(param_1 + 0xc) = (s16)iVar4;
  uVar6 = (s16)(iVar3 * (iVar4 * 0x10000 >> 0x10) >> 0xd);
LAB_800759fc:
  *(s16 *)((int)param_1 + 0x12) = uVar6;
  *(s16 *)(param_1 + 4) = uVar6;
  *(s16 *)((int)param_1 + 6) = 0x3fff;
  *(s16 *)(param_1 + 1) = 0x3fff;
  *param_1 = *param_1 | 0xc0;
  return;
}
