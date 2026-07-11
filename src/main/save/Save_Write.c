/**
 * @brief Save data writer: writes save block to memory card
 * @note Original: func_80039BCC at 0x80039BCC
 */
// Save_Write



#include "tomba.h"
void FUN_80039bcc(int param_1)

{
  s16 *psVar1;
  s8 cVar2;
  s8 cVar3;
  u8 bVar4;
  int iVar5;
  uint uVar6;
  s16 sVar7;
  u8 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  u8 local_30;
  u8 local_2f;
  s16 local_2e;
  s16 local_28;
  s16 local_26;
  s32 local_24;
  
  iVar9 = 2;
  cVar2 = *(s8*)(param_1 + 0xf);
  cVar3 = *(s8*)(param_1 + 0x13);
  bVar4 = *(u8 *)(param_1 + 0x17);
  uVar11 = (uint)bVar4;
  puVar8 = &DAT_800a281c;
  local_2e = 0;
  local_24 = 0;
  local_2f = bVar4 + 7;
  local_26 = cVar3 + 0xc;
  do {
    local_30 = *puVar8;
    local_28 = *(s16 *)(puVar8 + 2) + (s16)cVar2;
    iVar9 = iVar9 + 1;
    local_24 = CONCAT22(local_24._2_2_,*(s16 *)(puVar8 + 4));
    psVar1 = (s16 *)(puVar8 + 6);
    puVar8 = puVar8 + 8;
    FUN_8007e1b8(&local_28,(&PTR_DAT_80017334)[*psVar1],*(s32 *)(param_1 + 4),&local_30);
  } while (iVar9 < 6);
  if (param_1->counter1 == '\x03') {
    iVar9 = 0;
    local_2f = bVar4;
    if (param_1->counter2 == '\0') {
      puVar8 = &DAT_800a280c;
      local_26 = cVar3 + 0xc;
      local_24 = 0;
      do {
        local_30 = *puVar8;
        local_28 = *(s16 *)(puVar8 + 2) + (s16)cVar2;
        iVar9 = iVar9 + 1;
        local_24 = CONCAT22(local_24._2_2_,*(s16 *)(puVar8 + 4));
        psVar1 = (s16 *)(puVar8 + 6);
        puVar8 = puVar8 + 8;
        FUN_8007e1b8(&local_28,(&PTR_DAT_80017334)[*psVar1],*(s32 *)(param_1 + 4),&local_30);
      } while (iVar9 < 2);
    }
    else {
      iVar10 = 0x660000;
      local_30 = 0;
      local_24 = 0;
      local_26 = (u16)*(u8 *)(param_1 + 0x1c) * 0x18 + 0x40;
      sVar7 = 0x59;
      do {
        iVar9 = iVar9 + 1;
        local_28 = sVar7;
        FUN_8007e1b8(&local_28,(&PTR_DAT_80017334)[iVar10 >> 0x10],*(s32 *)(param_1 + 4),
                     &local_30);
        iVar10 = iVar10 + 0x10000;
        sVar7 = sVar7 + 0x88;
      } while (iVar9 < 2);
    }
    iVar10 = 0;
    iVar9 = 0x380000;
    do {
      if ((int)(uint)*(u8 *)(param_1 + 0x23) <= iVar10) break;
      iVar5 = FUN_8003990c((uint)*(u8 *)(param_1 + 0x1e) + iVar10);
      iVar10 = iVar10 + 1;
      FUN_80079374(0x18,iVar9 >> 0x10,0,
                   (&PTR_s_Select_the_operation_you_want_to_800a3ac4)[iVar5 + 1],uVar11);
      iVar9 = iVar9 + 0x180000;
    } while (iVar10 < 5);
    uVar6 = 0;
    if (*(s8*)(param_1 + 0x1e) != '\0') {
      FUN_8003393c(param_1,uVar11);
      uVar6 = (uint)*(u8 *)(param_1 + 0x1e);
    }
    if (uVar6 + 5 < (uint)*(u8 *)(param_1 + 0x23)) {
      FUN_800339a4(param_1,uVar11);
    }
    FUN_80033a0c(param_1,&DAT_800a283c,uVar11 + 7);
  }
  return;
}
