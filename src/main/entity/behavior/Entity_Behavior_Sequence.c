/**
 * @brief Entity sequence behavior: runs scripted action seq
 * @note Original: func_8007091C at 0x8007091C
 */
// Entity_Behavior_Sequence



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8007091c(int param_1,short param_2,int param_3,char param_4)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    sVar5 = *(short *)(param_1 + 100) + 0xaa;
    *(short *)(param_1 + 100) = sVar5;
    if (0x1fff < sVar5) {
      *(undefined2 *)(param_1 + 100) = 0x2000;
    }
    iVar7 = (uint)*(ushort *)(param_1 + 100) << 0x10;
    iVar10 = (iVar7 >> 0x10) - (iVar7 >> 0x1f) >> 1;
    iVar7 = iVar10 * *(short *)(param_3 + 2);
    uVar4 = *(ushort *)(param_1 + 100) + *(short *)(param_1 + 0x66) & 0xfff;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xfff;
    }
    iVar9 = FUN_80083f50(uVar4);
    iVar7 = (int)(short)(iVar7 >> 0xc);
    iVar9 = iVar9 * iVar7;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xfff;
    }
    param_1->pos_y = _DAT_1f800160 + (short)(iVar9 >> 0xc);
    iVar9 = iVar10 * *(short *)(param_3 + 6);
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xfff;
    }
    *(short *)(param_1 + 0x32) = (_DAT_1f800162 - (short)(iVar9 >> 0xc)) + -0x46;
    iVar9 = FUN_80083f50(uVar4 + 0x400);
    sVar5 = _DAT_1f800164;
    iVar9 = iVar9 * iVar7;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xfff;
    }
    iVar10 = iVar10 * 0xc00;
    param_1->pos_z = _DAT_1f800164 + (short)(iVar9 >> 0xc);
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xfff;
    }
    uVar6 = (undefined2)(iVar10 >> 0xc);
    param_1->scale_z = uVar6;
    param_1->scale_y = uVar6;
    param_1->scale_x = uVar6;
    uVar6 = FUN_80085690((int)param_1->pos_z - (int)sVar5,
                         (int)_DAT_1f800160 - (int)param_1->pos_y);
    param_1->rot_y = uVar6;
    if (*(short *)(param_1 + 100) != 0x2000) {
      return;
    }
    if (param_4 != '\0') {
      param_1->action_state = param_1->action_state + '\x01';
      return;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      param_1->anim_id = 0;
      FUN_80077c40(param_1,&PTR_DAT_8001b860,0);
      sVar3 = _DAT_1f800164;
      sVar2 = _DAT_1f800162;
      sVar5 = _DAT_1f800160;
      *(undefined2 *)(param_1 + 100) = 0;
      param_1->pos_y = sVar5;
      *(short *)(param_1 + 0x32) = sVar2;
      param_1->pos_z = sVar3;
      iVar7 = FUN_80083e80((int)-param_2);
      uVar8 = FUN_80083f50((int)-param_2);
      uVar4 = FUN_80085690(-iVar7,uVar8);
      *(ushort *)(param_1 + 0x66) = uVar4 & 0xfff;
      *(ushort *)(param_1 + 0x66) = (uVar4 & 0xfff) + *(short *)(param_3 + 10);
      param_1->action_state = param_1->action_state + '\x01';
      return;
    }
    if (bVar1 != 2) {
      return;
    }
    iVar7 = FUN_80041438(param_1,(int)_DAT_800e7ed6,0x180);
    if (iVar7 == 0) {
      return;
    }
  }
  FUN_800708cc(param_1);
  return;
}
