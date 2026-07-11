/**
 * @brief Entity draw main variant 3: extended draw pipeline
 * @note Original: func_80037E44 at 0x80037E44
 */
// Entity_DrawMain3



#include "tomba.h"
void FUN_80037e44(int param_1)

{
  s16 *psVar1;
  s8 cVar2;
  s8 cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  s32 uVar7;
  uint uVar8;
  u8 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  u8 local_48;
  s8 local_47;
  s16 local_46;
  s16 local_40;
  s16 local_3e;
  s32 local_3c;
  u16 local_38;
  int local_30;
  
  iVar11 = 2;
  cVar2 = *(s8*)(param_1 + 0xc);
  cVar3 = *(s8*)(param_1 + 0x10);
  puVar9 = &DAT_800a2658;
  local_46 = 0;
  local_3c = 0;
  local_47 = *(u8 *)(param_1 + 0x14) + 7;
  local_38 = (u16)*(u8 *)(param_1 + 0x14);
  do {
    local_48 = *puVar9;
    local_40 = *(s16 *)(puVar9 + 2) + (s16)cVar2;
    local_3e = *(s16 *)(puVar9 + 4) + (s16)cVar3;
    iVar11 = iVar11 + 1;
    local_3c = CONCAT22(local_3c._2_2_,*(s16 *)(puVar9 + 6));
    psVar1 = (s16 *)(puVar9 + 8);
    puVar9 = puVar9 + 10;
    FUN_8007e1b8(&local_40,(&PTR_DAT_80017334)[*psVar1],*(s32 *)(param_1 + 4),&local_48);
  } while (iVar11 < 6);
  if (param_1->counter1 == '\0') {
    iVar11 = 0;
    if (param_1->counter2 == '\0') {
      puVar9 = &DAT_800a2644;
      local_47 = (u8)local_38;
      do {
        local_48 = *puVar9;
        local_40 = *(s16 *)(puVar9 + 2) + (s16)cVar2;
        local_3e = *(s16 *)(puVar9 + 4) + (s16)cVar3;
        iVar11 = iVar11 + 1;
        local_3c = CONCAT22(local_3c._2_2_,*(s16 *)(puVar9 + 6));
        psVar1 = (s16 *)(puVar9 + 8);
        puVar9 = puVar9 + 10;
        FUN_8007e1b8(&local_40,(&PTR_DAT_80017334)[*psVar1],*(s32 *)(param_1 + 4),&local_48);
      } while (iVar11 < 2);
    }
    else {
      iVar11 = FUN_800368d0(param_1,*(u8 *)(param_1 + 0x1f),*(u8 *)(param_1 + 0x1d))
      ;
      if ((iVar11 == 999) || ((&DAT_800a2be8)[iVar11 * 0xc] != '\0')) {
        local_3e = (u16)*(u8 *)(param_1 + 0x1c) * 0x14 + 0x39;
      }
      else {
        local_3e = (u16)*(u8 *)(param_1 + 0x1c) * 0x14 + 0x35;
      }
      local_40 = 0xe4;
      if (*(s8*)(param_1 + 0x1d) == '\0') {
        local_40 = 0x54;
      }
      local_48 = 0;
      local_46 = 0;
      local_47 = (u8)local_38;
      local_3c = 0;
      FUN_8007e1b8(&local_40,PTR_DAT_800174c8,*(s32 *)(param_1 + 4),&local_48);
    }
    if (*(s8*)(param_1 + 0x27) != '\0') {
      FUN_8003791c(param_1,0x14);
    }
    if (*(s8*)(param_1 + 0x27) == '\x02') {
      FUN_80037b6c(param_1,0x14);
    }
    iVar11 = 0x30;
    iVar12 = 0;
    uVar8 = (uint)local_38;
    local_30 = (int)(*(u8 *)(param_1 + 0x24) + 1) >> 1;
    do {
      if ((int)(local_30 - (uint)*(u8 *)(param_1 + 0x1e)) <= iVar12) break;
      iVar10 = 0;
      do {
        uVar4 = FUN_800368d0(param_1,iVar12 + (uint)*(u8 *)(param_1 + 0x1e),iVar10);
        if (((int)uVar4 < 0) || (uVar4 == 999)) break;
        if ((&DAT_800a2be8)[uVar4 * 0xc] == '\0') {
          iVar5 = FUN_800349a4(param_1,uVar4,1);
          uVar7 = 8;
          if (iVar5 == 0) {
            uVar7 = 4;
          }
          FUN_800376ec(param_1,(int)(s16)uVar4,(int)(s16)iVar10,(int)(s16)iVar11,uVar7,
                       uVar8 + 3);
          uVar7 = 0xab;
          if (iVar10 == 0) {
            uVar7 = 0x1b;
          }
          FUN_8007e938(*(s32 *)(param_1 + 4),uVar7,iVar11 + 4,uVar8 + 4,
                       (int)*(s16 *)(&DAT_800a24f4 + uVar4 * 2));
          cVar2 = (&DAT_800a2be9)[uVar4 * 0xc];
          if ((((cVar2 == '\0') && (uVar4 == g_SpriteParam1)) ||
              ((cVar2 == '\x01' && (uVar4 == g_SpriteParam2 + 10)))) ||
             ((cVar2 == '\x02' && (uVar4 == g_SpriteParam4)))) {
            uVar7 = 0xb4;
            if (iVar10 == 0) {
              uVar7 = 0x24;
            }
            FUN_800342ec(param_1,uVar7,iVar11,uVar8 + 3);
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < 2);
      iVar12 = iVar12 + 1;
      iVar11 = iVar11 + 0x14;
    } while (iVar12 < 7);
    if ((local_30 < (int)(*(u8 *)(param_1 + 0x1e) + 7)) &&
       ((uint)*(u8 *)(param_1 + 0x1e) <= (uint)((int)(*(u8 *)(param_1 + 0x24) + 1) >> 1))) {
      FUN_80037894(param_1,(iVar11 + -4) * 0x10000 >> 0x10,local_38);
    }
    iVar11 = iVar11 + 4;
    if (iVar12 < 7) {
      uVar8 = (uint)local_38;
      iVar10 = iVar11 * 0x10000;
      do {
        if ((int)(uint)*(u8 *)(param_1 + 0x22) <= iVar12) break;
        iVar5 = 0;
        do {
          uVar4 = FUN_800368d0(param_1,iVar12 + (uint)*(u8 *)(param_1 + 0x1e),iVar5);
          if ((int)uVar4 < 0) break;
          if (uVar4 == 999) {
            uVar7 = 0xbc;
            if (iVar5 == 0) {
              uVar7 = 0x2c;
            }
            FUN_80079324(uVar7,iVar10 >> 0x10,1,PTR_s_<__Sort__>_800a3a78,uVar8);
            break;
          }
          if ((&DAT_800a2be8)[uVar4 * 0xc] == '\x01') {
            iVar6 = FUN_80035fac(param_1,uVar4,1);
            uVar7 = 5;
            if (iVar6 == 0) {
              uVar7 = 2;
            }
          }
          else {
            uVar7 = 3;
          }
          FUN_800376ec(param_1,(int)(s16)uVar4,(int)(s16)iVar5,iVar10 >> 0x10,uVar7,uVar8 + 3);
          uVar7 = 0xab;
          if (iVar5 == 0) {
            uVar7 = 0x1b;
          }
          FUN_8007e938(*(s32 *)(param_1 + 4),uVar7,iVar11 + 4,uVar8 + 4,
                       (int)*(s16 *)(&DAT_800a24f4 + uVar4 * 2));
          if ((((&DAT_800a2be9)[uVar4 * 0xc] == '\x03') && (uVar4 == g_SpriteParam3)) ||
             ((uVar4 == 0x58 && (DAT_800bfe55 != '\0')))) {
            uVar7 = 0xb4;
            if (iVar5 == 0) {
              uVar7 = 0x24;
            }
            FUN_800342ec(param_1,uVar7,iVar11,uVar8 + 3);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 2);
        iVar10 = iVar10 + 0x140000;
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + 0x14;
      } while (iVar12 < 7);
    }
    uVar8 = 0;
    if (*(s8*)(param_1 + 0x1e) != '\0') {
      FUN_8003393c(param_1,local_38);
      uVar8 = (uint)*(u8 *)(param_1 + 0x1e);
    }
    if (uVar8 + 6 < (uint)*(u8 *)(param_1 + 0x22)) {
      FUN_800339a4(param_1,local_38);
    }
    FUN_80033a0c(param_1,&DAT_800a2680,local_38 + 7);
  }
  return;
}
