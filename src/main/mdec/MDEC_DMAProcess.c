/**
 * @brief MDEC DMA processor: sets up DMA for MDEC data transfer
 * @note Original: func_80086EA4 at 0x80086EA4
 */
// MDEC_DMAProcess



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
uint FUN_80086ea4(int param_1,int param_2)

{
  u8 bVar1;
  u16 uVar2;
  u8 bVar3;
  uint *puVar4;
  u8 *pbVar5;
  int iVar6;
  uint uVar7;
  s16 sVar8;
  
  puVar4 = DAT_800abe98;
  bVar3 = (u8)param_2;
  if (param_2 < 0) {
    bVar1 = *DAT_800abe9c;
    *(u8 *)(param_1 + 0x44) = 0xff;
    *(u8 *)(param_1 + 0x45) = 1;
    **(u8 **)(param_1 + 0x40) = ~bVar3;
    uVar2 = *(u16 *)(DAT_800abe9c + 4);
    while ((uVar2 & 1) == 0) {
      uVar2 = *(u16 *)(DAT_800abe9c + 4);
    }
    do {
      iVar6 = FUN_80089640();
    } while (iVar6 == 0);
    *DAT_800abe9c = ~bVar3;
  }
  else {
    sVar8 = 0x88;
    if (((int)(uint)**(u8 **)(param_1 + 0x3c) >> 4 == 8) && (8 < *(u8 *)(param_1 + 0x44))) {
      sVar8 = 0x22;
    }
    _DAT_801026e0 = (uint)_DAT_1f801120;
    uVar2 = *(u16 *)(DAT_800abe9c + 4);
    _DAT_801026e4 = 0x1ae;
    while ((uVar2 & 2) == 0) {
      uVar2 = *(u16 *)(DAT_800abe9c + 4);
    }
    bVar1 = *DAT_800abe9c;
    DAT_800abe9c->anim_timer = sVar8;
    uVar7 = *puVar4;
    while ((uVar7 & 0x80) == 0) {
      iVar6 = FUN_80089640();
      if (iVar6 != 0) {
        return 0xffffffec;
      }
      uVar7 = *DAT_800abe98;
    }
    *DAT_800abe9c = bVar3;
    pbVar5 = DAT_800abe9c;
    if (sVar8 == 0x22) {
      *DAT_800abe98 = 0xffffff7f;
      *(u16 *)(pbVar5 + 10) = *(u16 *)(pbVar5 + 10) | 0x10;
    }
    *(s8*)(param_1 + 0x45) = *(s8*)(param_1 + 0x45) + '\x01';
    *(u8 *)(param_1->sprite_data + (uint)*(u8 *)(param_1 + 0x44)) = bVar1;
    *(s8*)(param_1 + 0x44) = *(s8*)(param_1 + 0x44) + '\x01';
  }
  return (uint)bVar1;
}
