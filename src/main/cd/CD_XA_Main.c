/**
 * @brief CD XA audio main: XA-ADPCM decode pipeline
 * @note Original: func_80099970 at 0x80099970
 */
// CD_XA_Main



#include "tomba.h"
void FUN_80099970(uint *param_1)

{
  s32 bVar1;
  s16 uVar2;
  uint uVar3;
  int iVar4;
  u16 uVar5;
  u16 uVar6;
  uint uVar7;
  uint uVar8;
  u16 *puVar9;
  int local_28;
  
  uVar8 = 0;
  uVar7 = param_1->flags;
  puVar9 = &DAT_800ac5c0;
  bVar1 = uVar7 == 0;
  do {
    if ((*param_1 & 1 << (uVar8 & 0x1f)) != 0) {
      if ((bVar1) || ((uVar7 & 0x10) != 0)) {
        *(s16 *)(uVar8 * 0x10 + g_SPU_Regs + 4) = (s16)param_1->behavior_state;
      }
      if ((bVar1) || ((uVar7 & 0x40) != 0)) {
        *puVar9 = (u16)param_1->action_state;
      }
      if ((bVar1) || ((uVar7 & 0x20) != 0)) {
        uVar2 = FUN_80099f70(*puVar9 >> 8,*puVar9 & 0xff,*(u16 *)((int)param_1 + 0x16) >> 8,
                             *(u16 *)((int)param_1 + 0x16) & 0xff);
        *(s16 *)(uVar8 * 0x10 + g_SPU_Regs + 4) = uVar2;
      }
      if ((bVar1) || ((uVar7 & 1) != 0)) {
        uVar6 = 0;
        uVar5 = (u16)param_1->kind & 0x7fff;
        if ((bVar1) || ((uVar7 & 4) != 0)) {
          switch((int)(((u16)param_1->sub_type - 1) * 0x10000) >> 0x10) {
          case 0:
            uVar6 = 0x8000;
            break;
          case 1:
            uVar6 = 0x9000;
            break;
          case 2:
            uVar6 = 0xa000;
            break;
          case 3:
            uVar6 = 0xb000;
            break;
          case 4:
            uVar6 = 0xc000;
            break;
          case 5:
            uVar6 = 0xd000;
            break;
          case 6:
            uVar6 = 0xe000;
          }
        }
        if (uVar6 != 0) {
          if ((s16)param_1->kind < 0x80) {
            if ((s16)param_1->kind < 0) {
              uVar5 = 0;
            }
          }
          else {
            uVar5 = 0x7f;
          }
        }
        *(u16 *)(uVar8 * 0x10 + g_SPU_Regs) = uVar5 | uVar6;
      }
      if ((bVar1) || ((uVar7 & 2) != 0)) {
        uVar6 = 0;
        uVar5 = *(u16 *)((int)param_1 + 10) & 0x7fff;
        if ((bVar1) || ((uVar7 & 8) != 0)) {
          switch((int)((*(u16 *)((int)param_1 + 0xe) - 1) * 0x10000) >> 0x10) {
          case 0:
            uVar6 = 0x8000;
            break;
          case 1:
            uVar6 = 0x9000;
            break;
          case 2:
            uVar6 = 0xa000;
            break;
          case 3:
            uVar6 = 0xb000;
            break;
          case 4:
            uVar6 = 0xc000;
            break;
          case 5:
            uVar6 = 0xd000;
            break;
          case 6:
            uVar6 = 0xe000;
          }
        }
        if (uVar6 != 0) {
          if (*(s16 *)((int)param_1 + 10) < 0x80) {
            if (*(s16 *)((int)param_1 + 10) < 0) {
              uVar5 = 0;
            }
          }
          else {
            uVar5 = 0x7f;
          }
        }
        *(u16 *)(uVar8 * 0x10 + g_SPU_Regs + 2) = uVar5 | uVar6;
      }
      if ((bVar1) || ((uVar7 & 0x80) != 0)) {
        FUN_80097540(uVar8 << 3 | 3,param_1->sub_action);
      }
      if ((bVar1) || ((uVar7 & 0x10000) != 0)) {
        FUN_80097540(uVar8 << 3 | 7,param_1->counter1);
      }
      if ((bVar1) || ((uVar7 & 0x20000) != 0)) {
        *(s16 *)(uVar8 * 0x10 + g_SPU_Regs + 8) = *(s16 *)((int)param_1 + 0x3a);
      }
      if ((bVar1) || ((uVar7 & 0x40000) != 0)) {
        *(s16 *)(uVar8 * 0x10 + g_SPU_Regs + 10) = (s16)param_1[0xf];
      }
      if ((bVar1) || ((uVar7 & 0x800) != 0)) {
        uVar6 = (u16)param_1[0xc];
        if (0x7f < uVar6) {
          uVar6 = 0x7f;
        }
        uVar5 = 0;
        if (((bVar1) || ((uVar7 & 0x100) != 0)) && (param_1->counter2 == 5)) {
          uVar5 = 0x80;
        }
        iVar4 = uVar8 * 0x10 + g_SPU_Regs;
        *(u16 *)(iVar4 + 8) = *(u16 *)(iVar4 + 8) & 0xff | (uVar6 | uVar5) << 8;
      }
      if ((bVar1) || ((uVar7 & 0x1000) != 0)) {
        uVar6 = *(u16 *)((int)param_1 + 0x32);
        if (0xf < uVar6) {
          uVar6 = 0xf;
        }
        iVar4 = uVar8 * 0x10 + g_SPU_Regs;
        *(u16 *)(iVar4 + 8) = *(u16 *)(iVar4 + 8) & 0xff0f | uVar6 << 4;
      }
      if ((bVar1) || ((uVar7 & 0x2000) != 0)) {
        uVar6 = (u16)param_1->sprite_flags;
        if (0x7f < uVar6) {
          uVar6 = 0x7f;
        }
        uVar5 = 0x100;
        if ((bVar1) || ((uVar7 & 0x200) != 0)) {
          uVar3 = param_1[10];
          if (uVar3 == 5) {
            uVar5 = 0x200;
          }
          else if ((int)uVar3 < 6) {
            if (uVar3 == 1) {
              uVar5 = 0;
            }
          }
          else if (uVar3 == 7) {
            uVar5 = 0x300;
          }
        }
        iVar4 = uVar8 * 0x10 + g_SPU_Regs;
        *(u16 *)(iVar4 + 10) = *(u16 *)(iVar4 + 10) & 0x3f | (uVar6 | uVar5) << 6;
      }
      if ((bVar1) || ((uVar7 & 0x4000) != 0)) {
        uVar6 = *(u16 *)((int)param_1 + 0x36);
        if (0x1f < uVar6) {
          uVar6 = 0x1f;
        }
        uVar5 = 0;
        if ((((bVar1) || ((uVar7 & 0x400) != 0)) && (param_1->render_flags != 3)) && (param_1->render_flags == 7)) {
          uVar5 = 0x20;
        }
        iVar4 = uVar8 * 0x10 + g_SPU_Regs;
        *(u16 *)(iVar4 + 10) = *(u16 *)(iVar4 + 10) & 0xffc0 | uVar6 | uVar5;
      }
      if ((bVar1) || ((uVar7 & 0x8000) != 0)) {
        uVar6 = (u16)param_1[0xe];
        if (0xf < uVar6) {
          uVar6 = 0xf;
        }
        iVar4 = uVar8 * 0x10 + g_SPU_Regs;
        *(u16 *)(iVar4 + 8) = *(u16 *)(iVar4 + 8) & 0xfff0 | uVar6;
      }
    }
    uVar8 = uVar8 + 1;
    puVar9 = puVar9 + 1;
  } while ((int)uVar8 < 0x18);
  for (local_28 = 0; local_28 < 2; local_28 = local_28 + 1) {
  }
  return;
}
