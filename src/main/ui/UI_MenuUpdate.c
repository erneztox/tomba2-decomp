/**
 * @brief UI menu updater: processes menu state, draws elements
 * @note Original: func_8004F6D0 at 0x8004F6D0
 */
// UI_MenuUpdate



#include "tomba.h"
void FUN_8004f6d0(int param_1)

{
  s16 sVar1;
  u8 bVar2;
  u8 uVar3;
  int iVar4;
  u8 *puVar5;
  s16 *psVar6;
  s16 *puVar7;
  int iVar8;
  s16 *psVar9;
  int iVar10;
  int iVar11;
  
  iVar8 = 0;
  psVar9 = (s16 *)(param_1 + 0xc);
  iVar10 = 0;
  iVar4 = (int)*(s16 *)(param_1 + 8);
  iVar11 = 0;
  if (0 < iVar4) {
    puVar7 = (s16 *)(param_1 + 0x10);
    do {
      if (2 < puVar7->kind) {
        iVar11 = iVar11 + 1;
      }
      bVar2 = puVar7->sub_type;
      if (bVar2 == 1) {
        bVar2 = *(s8*)((int)puVar7 + 7) + 2;
        *(u8 *)((int)puVar7 + 7) = bVar2;
        psVar6 = psVar9 + 8;
        if (7 < bVar2) {
          puVar5 = (u8 *)((int)psVar9 + 0x3d);
          iVar4 = 0;
          do {
            uVar3 = *puVar5;
            puVar5 = puVar5 + 1;
            iVar4 = iVar4 + 1;
            *(u8 *)psVar6 = uVar3;
            psVar6 = (s16 *)((int)psVar6 + 1);
          } while (iVar4 < 0x2d);
          iVar8 = iVar8 + 1;
          *(u8 *)((int)puVar7 + 0x39) = 0xff;
          *(u8 *)((int)puVar7 + 7) = 0;
          puVar7->sub_type = 0;
        }
      }
      else if (bVar2 < 2) {
        if (bVar2 == 0) {
          iVar8 = iVar8 + 1;
        }
      }
      else if (bVar2 == 2) {
        sVar1 = puVar7->behavior_state;
        puVar7->behavior_state = sVar1 - 0x100U;
        if ((int)((uint)(u16)(sVar1 - 0x100U) << 0x10) < 0) {
          iVar8 = iVar8 + 1;
          puVar7->behavior_state = 0;
          puVar7->sub_type = 0;
        }
        iVar4 = FUN_80083e80((int)(s16)puVar7->behavior_state);
        iVar4 = iVar4 * (s16)puVar7->state;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xfff;
        }
        *puVar7 = (s16)(iVar4 >> 0xc);
        iVar4 = (iVar4 >> 0xc) << 0x10;
        *psVar9 = 0xa0 - (s16)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
      }
      iVar10 = iVar10 + 1;
      puVar7 = puVar7 + 0x46;
      psVar9 = psVar9 + 0x46;
    } while (iVar10 < *(s16 *)(param_1 + 8));
    iVar4 = (int)*(s16 *)(param_1 + 8);
  }
  if (iVar8 == iVar4) {
    if (iVar11 != 0) {
      FUN_8004ee88(param_1);
      iVar4 = (int)*(s16 *)(param_1 + 8);
    }
    if (iVar4 == 0) {
      param_1->flags = 0;
    }
    else {
      uVar3 = 2;
      if (*(s16 *)(param_1 + 10) != 0) {
        FUN_8004f378(param_1);
        uVar3 = 1;
      }
      *(s16 *)(param_1 + 4) = 0;
      param_1->flags = uVar3;
    }
  }
  return;
}
