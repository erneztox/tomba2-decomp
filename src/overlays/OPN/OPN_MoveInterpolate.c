// OPN_MoveInterpolate (OPN_MoveInterpolate) - Movement interpolation: interpolates entity to target in 20 frames with gravity

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00002660) */
/* WARNING: Removing unreachable block (ram,0x00002670) */
/* WARNING: Removing unreachable block (ram,0x00002678) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OPN_MoveInterpolate(int param_1)

{
  u8 bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  bVar1 = param_1->behavior_state;
  iVar9 = param_1->parent;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1->behavior_state = 3;
        iVar8 = (int)_g_CameraPosX;
        iVar7 = (int)_g_CameraPosY;
        iVar6 = (int)_g_CameraPosZ;
        param_1->timer1 = 0x14;
        iVar4 = (int)param_1->timer1;
        iVar7 = (iVar7 - *(short *)(param_1 + 0x32)) * 0x100;
        if (iVar4 == 0) {
          trap(0x1c00);
        }
        if ((iVar4 == -1) && (iVar7 == -0x80000000)) {
          trap(0x1800);
        }
        iVar5 = (int)param_1->timer1;
        iVar6 = (iVar6 - param_1->pos_z) * 0x100;
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && (iVar6 == -0x80000000)) {
          trap(0x1800);
        }
        param_1->angle_offset = 0xf100;
        param_1->sprite_y = 0x180;
        param_1->normal_x = (short)(((iVar8 - param_1->pos_y) * 0x100) / 0x14);
        param_1->velocity_y = (short)(iVar7 / iVar4);
        param_1->normal_z = (short)(iVar6 / iVar5);
      }
      else if (bVar1 != 3) {
        halt_baddata();
      }
      sVar2 = param_1->angle_offset;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_1->normal_x * 0x100;
      param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
      param_1->scale_y = param_1->scale_y + param_1->normal_z * 0x100;
      sVar3 = param_1->timer1;
      param_1->angle_offset = param_1->angle_offset + param_1->sprite_y;
      param_1->timer1 = sVar3 + -1;
      param_1->pos_y_fixed = param_1->pos_y_fixed + sVar2 * 0x100;
      if (sVar3 == 1) {
        param_1->state = 3;
        UI_DrawElement(0x2c,0x42);
        Entity_SpawnScorePopup(param_1);
      }
      param_1->flags = iVar9->flags;
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1->behavior_state = 1;
    param_1->sprite_data = _g_AnimDataPtr;
    Entity_LoadAnimData(param_1,0x8014c808,0x10);
    param_1->draw_x = 0x20;
    param_1->angle_delta = 0xffd0;
    *(s16 *)(param_1 + 100) = 0;
    param_1->counter1 = param_1->counter1 + -8;
  }
  Entity_SetPosition(param_1,1,*(s32 *)(iVar9 + 0xe4),0,param_1 + 0x60);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

