/**
 * @brief Dust trail particles: random velocity/position with 5-segment history buffer
 * @note Original: func_8002BAFC at 0x8002BAFC
 */
// Entity_Behavior_DustTrail



void FUN_8002bafc(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      goto LAB_8002bc68;
    }
    psVar9 = param_1->angle_offset;
    if (bVar1 != 0) {
      return;
    }
    iVar7 = 0;
    puVar6 = param_1->rot_y;
    sVar2 = param_1->pos_x;
    sVar3 = param_1->pos_y;
    sVar4 = *(short *)(param_1 + 0x30);
    param_1->sprite_x = 7;
    param_1->state = 1;
    do {
      iVar7 = iVar7 + 1;
      iVar5 = FUN_8009a450();
      *psVar9 = sVar2 + (short)((uint)(iVar5 + -0x4000) >> 8);
      iVar5 = FUN_8009a450();
      puVar6[-2] = sVar3 + (short)((uint)(iVar5 + -0x4000) >> 8);
      iVar5 = FUN_8009a450();
      puVar6[-1] = sVar4 + (short)((uint)(iVar5 + -0x4000) >> 8);
      *puVar6 = 0x100;
      puVar6 = puVar6 + 4;
      psVar9 = psVar9 + 4;
    } while (iVar7 < 7);
  }
  param_1->scale_y = param_1->anim_data;
  if (param_1->anim_data != 0) {
    psVar8 = param_1->angle_offset;
    iVar7 = 0;
    psVar9 = param_1->sprite_y;
    do {
      iVar7 = iVar7 + 1;
      iVar5 = FUN_8009a450();
      *psVar8 = *psVar8 + (short)(iVar5 + -0x4000 >> 0xb);
      iVar5 = FUN_8009a450();
      psVar8 = psVar8 + 4;
      psVar9->flags = psVar9->flags + (short)(iVar5 + -0x4000 >> 0xb);
      *psVar9 = *psVar9 + -0x12;
      psVar9 = psVar9 + 4;
    } while (iVar7 < 7);
    iVar7 = FUN_8002b278(param_1);
    if (iVar7 != 0) {
      return;
    }
    FUN_80031780(param_1);
    return;
  }
LAB_8002bc68:
  FUN_8007a624(param_1);
  return;
}
