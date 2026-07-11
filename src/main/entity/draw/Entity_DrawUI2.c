/**
 * @brief Entity UI drawer variant 2: renders UI sprites
 * @note Original: func_80037B6C at 0x80037B6C
 */
// Entity_DrawUI2



#include "tomba.h"
void FUN_80037b6c(int param_1,u8 param_2)

{
  s16 *psVar1;
  s16 sVar2;
  s16 sVar3;
  uint uVar4;
  int iVar5;
  s32 uVar6;
  void *puVar7;
  int iVar8;
  void **ppuVar9;
  s16 *psVar10;
  int iVar11;
  u8 local_40;
  u8 local_3f;
  s16 local_3e;
  s16 local_38;
  s16 local_36;
  s32 local_34;
  int local_30->kind;
  
  FUN_80036560((int)*(s16 *)(&DAT_800d1e6a + (uint)*(u8 *)(param_1 + 0x2d) * 0xc),local_30);
  sVar2 = *(s16 *)(&DAT_800d1e6c + (uint)*(u8 *)(param_1 + 0x2d) * 0xc);
  local_38 = 0xe4;
  local_40 = 0;
  local_3e = 0;
  iVar8 = (uint)*(u8 *)(param_1 + 0x2d) * 0x14;
  sVar3 = (s16)iVar8;
  local_36 = (u16)*(u8 *)(param_1 + 0x2e) * 0x14 + sVar3 + 0x49;
  local_34 = 0;
  local_3f = param_2;
  FUN_8007e1b8(&local_38,PTR_DAT_800174c8,*(s32 *)(param_1 + 4),&local_40);
  psVar10 = &DAT_800a2698;
  do {
    if (psVar10->behavior_state == 0) {
      local_38 = *psVar10 + 0x8e;
      local_36 = psVar10->flags + sVar3;
      local_34 = *(s32 *)(psVar10 + 2);
    }
    else if (psVar10->behavior_state == 1) {
      local_38 = *psVar10 + 0x8e;
      local_36 = psVar10->flags + sVar2 * 0x14 + sVar3;
      local_34 = *(s32 *)(psVar10 + 2);
    }
    else {
      local_38 = *psVar10 + 0x8e;
      local_36 = psVar10->flags + sVar3;
      local_34 = CONCAT22(psVar10->sub_type + sVar2 * 0x14,psVar10->kind);
    }
    psVar1 = psVar10 + 4;
    psVar10 = psVar10 + 6;
    FUN_8007e1b8(&local_38,(&PTR_DAT_80017334)[*psVar1],*(s32 *)(param_1 + 4),&local_40);
  } while ((int)psVar10 < -0x7ff5d8fc);
  iVar11 = 0;
  if (0 < sVar2) {
    iVar8 = iVar8 + 0x40;
    iVar5 = 0;
    do {
      iVar5 = local_30->type + *(s16 *)(iVar5 + (uint)*(u8 *)(param_1 + 0x2d) * 0xc + -0x7ff2e192);
      ppuVar9 = &PTR_s_Town_of_the_Fishermen_800a2b84 + iVar5;
      uVar4 = FUN_80073750(*ppuVar9);
      iVar5 = FUN_80036dc4(iVar5);
      if (iVar5 == 0) {
        puVar7 = *ppuVar9;
        uVar6 = 0;
      }
      else {
        puVar7 = *ppuVar9;
        uVar6 = 8;
      }
      iVar5 = iVar8 + ((int)~uVar4 >> 0x1f & 4U);
      iVar8 = iVar8 + 0x14;
      FUN_80079324(0xb0,iVar5 * 0x10000 >> 0x10,uVar6,puVar7,0);
      iVar11 = iVar11 + 1;
      iVar5 = iVar11 * 2;
    } while (iVar11 < sVar2);
  }
  return;
}
