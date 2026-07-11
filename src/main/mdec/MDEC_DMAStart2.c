/**
 * @brief MDEC DMA start variant 2: configures DMA for decode
 * @note Original: func_80086A80 at 0x80086A80
 */
// MDEC_DMAStart2



#include "tomba.h"
s32 MDEC_DMAStart2(int param_1)

{
  code *pcVar1;
  u8 *puVar2;
  int iVar3;
  s16 uVar4;
  s32 uVar5;
  
  puVar2 = DAT_800abe9c;
  *(s16 *)(DAT_800abe9c + 10) = 0x40;
  *(s16 *)(puVar2 + 10) = 0;
  *(s16 *)(puVar2 + 8) = 0xd;
  puVar2->state = 0x88;
  uVar5 = 0x91;
  if (param_1->state == '\b') {
    uVar5 = 0x50;
  }
  MDEC_SetParam(uVar5);
  uVar4 = 0x1003;
  if (DAT_800abe78 != 0) {
    uVar4 = 0x3003;
  }
  iVar3 = DAT_800abe78 * 4;
  *(s16 *)(DAT_800abe9c + 10) = uVar4;
  iVar3 = *(int *)(&DAT_800abe90 + iVar3);
  pcVar1 = DAT_800abe58;
  if (-1 < iVar3) {
    while (DAT_800abe58 = pcVar1, 0 < iVar3) {
      iVar3 = *(int *)(&DAT_800abe90 + DAT_800abe78 * 4) + -1;
      *(int *)(&DAT_800abe90 + DAT_800abe78 * 4) = iVar3;
      (*DAT_800abe58)(param_1->state + iVar3 * 0xf0);
      pcVar1 = DAT_800abe58;
      iVar3 = *(int *)(&DAT_800abe90 + DAT_800abe78 * 4);
    }
    if (*(int *)(&DAT_800abe90 + DAT_800abe78 * 4) == 0) {
      *(int *)(&DAT_800abe90 + DAT_800abe78 * 4) = -1;
      (*pcVar1)(param_1);
      (*DAT_800abe5c)(param_1);
    }
  }
  puVar2 = DAT_800abe9c;
  if ((*(u16 *)(DAT_800abe9c + 4) & 0x200) != 0) {
    *(u16 *)(DAT_800abe9c + 10) = *(u16 *)(DAT_800abe9c + 10) | 0x10;
    if ((*(u16 *)(puVar2 + 4) & 0x200) != 0) {
      do {
        iVar3 = MDEC_WaitVSync();
      } while (iVar3 == 0);
      *DAT_800abe9c = 1;
      MDEC_SetParam(2000);
      iVar3 = MDEC_WaitDMA();
      if (iVar3 == 0) {
        return 0;
      }
      MDEC_WaitReady();
      MDEC_SetParam(0x1ae);
      do {
        if ((*DAT_800abe98 & 0x80) != 0) {
          *DAT_800abe9c = 0x42;
          MDEC_SetParam();
          iVar3 = MDEC_WaitDMA();
          if (iVar3 == 0) {
            return 0;
          }
          MDEC_WaitReady();
          MDEC_SetParam(0x1ae);
          do {
            if ((*DAT_800abe98 & 0x80) != 0) {
              *DAT_800abe9c = 1;
              MDEC_SetParam();
              iVar3 = MDEC_WaitDMA();
              if (iVar3 == 0) {
                return 0;
              }
              MDEC_WaitReady();
              return 0;
            }
            iVar3 = MDEC_WaitVSync(0x3c);
          } while (iVar3 == 0);
          return 0;
        }
        iVar3 = MDEC_WaitVSync(0x3c);
      } while (iVar3 == 0);
      return 0;
    }
    *DAT_800abe98 = 0xffffff7f;
  }
  if (*(s8*)(param_1 + 0x50) == '\0') {
    return 1;
  }
  if (param_1->state != '\0') {
    return 0;
  }
  return 1;
}
