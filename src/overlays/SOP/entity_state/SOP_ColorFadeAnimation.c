// SOP_ColorFadeAnimation (SOP_ColorFadeAnimation) - Color fade animation: increments RGB channels, uses sin/cos for position offset

/* WARNING: Control flow encountered bad instruction data */

s32 SOP_ColorFadeAnimation(int param_1)

{
  u8 bVar1;
  s16 uVar2;
  int iVar3;
  short sVar4;
  
  bVar1 = param_1->action_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        param_1->action_state = 0;
        Entity_LoadAnimData3(param_1,0x8001b860,2);
        halt_baddata();
      }
      goto LAB_00002230;
    }
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1->action_state = 1;
    param_1->sprite_x = 0;
    param_1->move_speed = param_1->pos_y;
    param_1->gte_offset_y = *(s16 *)(param_1 + 0x32);
    param_1->gte_offset_z = param_1->pos_z;
  }
  param_1->scale_x = param_1->scale_x + 0x80;
  param_1->scale_y = param_1->scale_y + 0x80;
  param_1->scale_z = param_1->scale_z + 0x80;
  if (0xfff < param_1->scale_x) {
    param_1->action_state = param_1->action_state + '\x01';
  }
LAB_00002230:
  param_1->pos_y = param_1->move_speed;
  *(s16 *)(param_1 + 0x32) = param_1->gte_offset_y;
  param_1->pos_z = param_1->gte_offset_z;
  iVar3 = Math_CosGTE((int)param_1->sprite_x);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar3 * 0xa00;
  iVar3 = Math_Cos((int)param_1->sprite_x);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -2;
  param_1->scale_y = param_1->scale_y + iVar3 * 0xa00;
  sVar4 = param_1->gte_offset_z + -1;
  param_1->gte_offset_z = sVar4;
  param_1->pos_z = param_1->pos_z + -1;
  uVar2 = Math_Atan2((int)param_1->pos_z - (int)sVar4,
                          (int)param_1->move_speed - (int)param_1->pos_y);
  param_1->rot_y = uVar2;
  sVar4 = param_1->sprite_x + 0x80;
  param_1->sprite_x = sVar4;
  if (0x1bff < sVar4) {
    param_1->action_state = param_1->action_state + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

