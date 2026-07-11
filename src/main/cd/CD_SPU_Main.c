/**
 * @brief CD SPU main: SPU RAM transfer controller
 * @note Original: func_80099490 at 0x80099490
 */
// CD_SPU_Main



#include "tomba.h"
void CD_SPU_Main(uint *param_1)

{
  s32 bVar1;
  u16 uVar2;
  u16 uVar3;
  u16 uVar4;
  uint uVar5;
  
  uVar3 = 0;
  uVar5 = *param_1;
  bVar1 = uVar5 == 0;
  uVar4 = 0;
  if (bVar1) {
LAB_800994bc:
    switch((s16)param_1->kind) {
    default:
switchD_800994e0_caseD_0:
      uVar3 = (u16)param_1->flags;
      uVar2 = 0;
      break;
    case 1:
      uVar2 = 0x8000;
      break;
    case 2:
      uVar2 = 0x9000;
      break;
    case 3:
      uVar2 = 0xa000;
      break;
    case 4:
      uVar2 = 0xb000;
      break;
    case 5:
      uVar2 = 0xc000;
      break;
    case 6:
      uVar2 = 0xd000;
      break;
    case 7:
      uVar2 = 0xe000;
    }
    if (uVar2 != 0) {
      uVar3 = 0x7f;
      if (((s16)param_1->flags < 0x80) && (uVar3 = 0, -1 < (s16)param_1->flags)) {
        uVar3 = (u16)param_1->flags;
      }
    }
    *(u16 *)(g_SPU_Regs + 0x180) = uVar3 & 0x7fff | uVar2;
  }
  else if ((uVar5 & 1) != 0) {
    if ((uVar5 & 4) != 0) goto LAB_800994bc;
    goto switchD_800994e0_caseD_0;
  }
  if (bVar1) {
LAB_8009957c:
    switch(*(s16 *)((int)param_1 + 10)) {
    default:
      goto switchD_800995a0_caseD_0;
    case 1:
      uVar3 = 0x8000;
      break;
    case 2:
      uVar3 = 0x9000;
      break;
    case 3:
      uVar3 = 0xa000;
      break;
    case 4:
      uVar3 = 0xb000;
      break;
    case 5:
      uVar3 = 0xc000;
      break;
    case 6:
      uVar3 = 0xd000;
      break;
    case 7:
      uVar3 = 0xe000;
    }
  }
  else {
    if ((uVar5 & 2) == 0) goto LAB_80099624;
    if ((uVar5 & 8) != 0) goto LAB_8009957c;
switchD_800995a0_caseD_0:
    uVar4 = *(u16 *)((int)param_1 + 6);
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    uVar4 = 0x7f;
    if ((*(s16 *)((int)param_1 + 6) < 0x80) && (uVar4 = 0, -1 < *(s16 *)((int)param_1 + 6))) {
      uVar4 = *(u16 *)((int)param_1 + 6);
    }
  }
  *(u16 *)(g_SPU_Regs + 0x182) = uVar4 & 0x7fff | uVar3;
LAB_80099624:
  if ((bVar1) || ((uVar5 & 0x40) != 0)) {
    *(s16 *)(g_SPU_Regs + 0x1b0) = (s16)param_1->state;
  }
  if ((bVar1) || ((uVar5 & 0x80) != 0)) {
    *(s16 *)(g_SPU_Regs + 0x1b2) = *(s16 *)((int)param_1 + 0x12);
  }
  if ((bVar1) || ((uVar5 & 0x400) != 0)) {
    *(s16 *)(g_SPU_Regs + 0x1b4) = (s16)param_1->sub_action;
  }
  if ((bVar1) || ((uVar5 & 0x800) != 0)) {
    *(s16 *)(g_SPU_Regs + 0x1b6) = *(s16 *)((int)param_1 + 0x1e);
  }
  if ((bVar1) || ((uVar5 & 0x100) != 0)) {
    if (param_1->behavior_state == 0) {
      uVar3 = *(u16 *)(g_SPU_Regs + 0x1aa) & 0xfffb;
    }
    else {
      uVar3 = *(u16 *)(g_SPU_Regs + 0x1aa) | 4;
    }
    *(u16 *)(g_SPU_Regs + 0x1aa) = uVar3;
  }
  if ((bVar1) || ((uVar5 & 0x200) != 0)) {
    if (param_1->action_state == 0) {
      uVar3 = *(u16 *)(g_SPU_Regs + 0x1aa) & 0xfffe;
    }
    else {
      uVar3 = *(u16 *)(g_SPU_Regs + 0x1aa) | 1;
    }
    *(u16 *)(g_SPU_Regs + 0x1aa) = uVar3;
  }
  if ((bVar1) || ((uVar5 & 0x1000) != 0)) {
    if (param_1->counter1 == 0) {
      uVar3 = *(u16 *)(g_SPU_Regs + 0x1aa) & 0xfff7;
    }
    else {
      uVar3 = *(u16 *)(g_SPU_Regs + 0x1aa) | 8;
    }
    *(u16 *)(g_SPU_Regs + 0x1aa) = uVar3;
  }
  if ((bVar1) || ((uVar5 & 0x2000) != 0)) {
    if (param_1->counter2 == 0) {
      uVar3 = *(u16 *)(g_SPU_Regs + 0x1aa) & 0xfffd;
    }
    else {
      uVar3 = *(u16 *)(g_SPU_Regs + 0x1aa) | 2;
    }
    *(u16 *)(g_SPU_Regs + 0x1aa) = uVar3;
  }
  return;
}
