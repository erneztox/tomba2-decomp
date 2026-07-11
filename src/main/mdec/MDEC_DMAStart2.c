/**
 * @brief MDEC DMA start variant 2: configures DMA for decode
 * @note Original: func_80086A80 at 0x80086A80
 */
// MDEC_DMAStart2



#include "tomba.h"
s32 FUN_80086a80(int param_1)

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
  puVar2->anim_timer = 0x88;
  uVar5 = 0x91;
  if (*(s8*)(param_1 + 0xe8) == '\b') {
    uVar5 = 0x50;
  }
  FUN_80089620(uVar5);
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
      (*DAT_800abe58)(*(int *)(param_1 + 0xc) + iVar3 * 0xf0);
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
        iVar3 = FUN_80089640();
      } while (iVar3 == 0);
      *DAT_800abe9c = 1;
      FUN_80089620(2000);
      iVar3 = FUN_8008732c();
      if (iVar3 == 0) {
        return 0;
      }
      FUN_800873bc();
      FUN_80089620(0x1ae);
      do {
        if ((*DAT_800abe98 & 0x80) != 0) {
          *DAT_800abe9c = 0x42;
          FUN_80089620();
          iVar3 = FUN_8008732c();
          if (iVar3 == 0) {
            return 0;
          }
          FUN_800873bc();
          FUN_80089620(0x1ae);
          do {
            if ((*DAT_800abe98 & 0x80) != 0) {
              *DAT_800abe9c = 1;
              FUN_80089620();
              iVar3 = FUN_8008732c();
              if (iVar3 == 0) {
                return 0;
              }
              FUN_800873bc();
              return 0;
            }
            iVar3 = FUN_80089640(0x3c);
          } while (iVar3 == 0);
          return 0;
        }
        iVar3 = FUN_80089640(0x3c);
      } while (iVar3 == 0);
      return 0;
    }
    *DAT_800abe98 = 0xffffff7f;
  }
  if (*(s8*)(param_1 + 0x50) == '\0') {
    return 1;
  }
  if (*(s8*)(param_1 + 0x37) != '\0') {
    return 0;
  }
  return 1;
}
