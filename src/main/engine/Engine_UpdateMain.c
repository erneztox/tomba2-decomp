/**
 * @brief Engine update main: full frame update pipeline
 * @note Original: func_80038A00 at 0x80038A00
 */
// Engine_UpdateMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80038a00(int param_1)

{
  s16 *psVar1;
  u8 bVar2;
  s32 uVar3;
  void *puVar4;
  u8 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  s16 sVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  u8 local_58;
  u8 local_57;
  s16 local_56;
  s16 local_50;
  s16 local_4e;
  s32 local_4c;
  u8 auStack_48 [16];
  s16 local_38;
  s16 local_30;
  
  iVar7 = 2;
  bVar2 = *(u8 *)(param_1 + 0x15);
  uVar12 = (uint)bVar2;
  puVar5 = &DAT_800a2718;
  local_56 = 0;
  local_4c = 0;
  local_57 = bVar2 + 7;
  local_30 = (s16)param_1->sprite_flags;
  local_38 = (s16)*(s8*)(param_1 + 0x11);
  do {
    local_58 = *puVar5;
    local_50 = *(s16 *)(puVar5 + 2) + local_30;
    local_4e = *(s16 *)(puVar5 + 4) + local_38;
    iVar7 = iVar7 + 1;
    local_4c = CONCAT22(local_4c._2_2_,*(s16 *)(puVar5 + 6));
    psVar1 = (s16 *)(puVar5 + 8);
    puVar5 = puVar5 + 10;
    FUN_8007e1b8(&local_50,(&PTR_DAT_80017334)[*psVar1],*(s32 *)(param_1 + 4),&local_58);
  } while (iVar7 < 6);
  if (param_1->counter1 == '\x01') {
    iVar7 = 0;
    local_57 = bVar2;
    if (param_1->counter2 == '\0') {
      puVar5 = &DAT_800a2704;
      do {
        local_58 = *puVar5;
        local_50 = *(s16 *)(puVar5 + 2) + local_30;
        local_4e = *(s16 *)(puVar5 + 4) + local_38;
        iVar7 = iVar7 + 1;
        local_4c = CONCAT22(local_4c._2_2_,*(s16 *)(puVar5 + 6));
        psVar1 = (s16 *)(puVar5 + 8);
        puVar5 = puVar5 + 10;
        FUN_8007e1b8(&local_50,(&PTR_DAT_80017334)[*psVar1],*(s32 *)(param_1 + 4),&local_58);
      } while (iVar7 < 2);
    }
    else {
      local_50 = 0xe4;
      if (*(s8*)(param_1 + 0x1d) == '\0') {
        local_50 = 0x54;
      }
      local_58 = 0;
      local_56 = 0;
      local_4e = (u16)*(u8 *)(param_1 + 0x1c) * 0x14 + 0x44;
      local_4c = 0;
      FUN_8007e1b8(&local_50,PTR_DAT_800174c8,*(s32 *)(param_1 + 4),&local_58);
    }
    iVar8 = 0;
    iVar11 = 0x400000;
    iVar10 = 0x3c0000;
    sVar9 = 0x3c;
    iVar7 = FUN_80079528(PTR_s_Clear_800a3a8c);
    FUN_80079324((iVar7 * -8 + 0x48) * 0x10000 >> 0x10,0x2c,2,PTR_s_Clear_800a3a8c,uVar12);
    FUN_80079324(0x94,0x2c,2,PTR_s_Occur_800a3a88,uVar12);
    FUN_80079324(0x68,0x2c,0,&DAT_80010684,uVar12);
    iVar7 = FUN_80079634((int)_DAT_800bf8aa,auStack_48);
    FUN_80079324((iVar7 * -8 + 0x68) * 0x10000 >> 0x10,0x2c,2,auStack_48,uVar12);
    iVar7 = FUN_80079634((int)_DAT_800bf8a8,auStack_48);
    FUN_80079324((iVar7 * -8 + 0x8c) * 0x10000 >> 0x10,0x2c,2,auStack_48,uVar12);
    do {
      iVar7 = iVar8 + (uint)*(u8 *)(param_1 + 0x1e);
      if ((int)(uint)*(u8 *)(param_1 + 10) <= iVar7) break;
      uVar6 = (uint)*(u8 *)(iVar7 * 3 + _DAT_800e7e6c + 1);
      if (*(s8*)(uVar6 + 0x800bf8b4) != '\0') {
        if (*(s8*)(uVar6 + 0x800bf8b4) == -1) {
          local_50 = local_30 + 0x1c;
          local_58 = 0;
          local_56 = 0;
          local_4e = sVar9 + local_38 + 8;
          local_4c = 0;
          local_57 = bVar2;
          FUN_8007e6dc(&local_50,PTR_DAT_800174c0,*(s32 *)(param_1 + 4),&local_58);
          uVar3 = 6;
        }
        else {
          uVar3 = 3;
        }
        if ((&DAT_800a33cb)[uVar6 * 0xc] == '\0') {
          puVar4 = (&PTR_DAT_800a33d0)[uVar6 * 3];
          iVar7 = iVar11;
        }
        else {
          puVar4 = (&PTR_DAT_800a33d0)[uVar6 * 3];
          iVar7 = iVar10;
        }
        FUN_80079324(0x28,iVar7 >> 0x10,uVar3,puVar4,uVar12);
      }
      iVar11 = iVar11 + 0x140000;
      iVar10 = iVar10 + 0x140000;
      iVar8 = iVar8 + 1;
      sVar9 = sVar9 + 0x14;
    } while (iVar8 < 6);
    iVar7 = 0;
    iVar10 = 0x400000;
    iVar8 = 0x3c0000;
    sVar9 = 0x3c;
    do {
      iVar11 = iVar7 + (uint)*(u8 *)(param_1 + 0x1e);
      if ((int)(uint)param_1->render_flags <= iVar11) break;
      uVar6 = (uint)*(u8 *)(iVar11 * 3 + _DAT_800bf53c + 1);
      if (*(s8*)(uVar6 + 0x800bf8b4) != '\0') {
        if (*(s8*)(uVar6 + 0x800bf8b4) == -1) {
          local_50 = local_30 + 0xac;
          local_58 = 0;
          local_56 = 0;
          local_4e = sVar9 + local_38 + 8;
          local_4c = 0;
          local_57 = bVar2;
          FUN_8007e1b8(&local_50,PTR_DAT_800174c0,*(s32 *)(param_1 + 4),&local_58);
          uVar3 = 6;
        }
        else {
          uVar3 = 3;
        }
        if ((&DAT_800a33cb)[uVar6 * 0xc] == '\0') {
          puVar4 = (&PTR_DAT_800a33d0)[uVar6 * 3];
          iVar11 = iVar10;
        }
        else {
          puVar4 = (&PTR_DAT_800a33d0)[uVar6 * 3];
          iVar11 = iVar8;
        }
        FUN_80079324(0xb8,iVar11 >> 0x10,uVar3,puVar4,uVar12);
      }
      iVar10 = iVar10 + 0x140000;
      iVar8 = iVar8 + 0x140000;
      iVar7 = iVar7 + 1;
      sVar9 = sVar9 + 0x14;
    } while (iVar7 < 6);
    uVar6 = 0;
    if (*(s8*)(param_1 + 0x1e) != '\0') {
      FUN_8003393c(param_1,uVar12);
      uVar6 = (uint)*(u8 *)(param_1 + 0x1e);
    }
    if (uVar6 + 6 < (uint)*(u8 *)(param_1 + 0x21)) {
      FUN_800339a4(param_1,uVar12);
    }
    FUN_80033a0c(param_1,&DAT_800a2740,uVar12 + 7);
  }
  return;
}
