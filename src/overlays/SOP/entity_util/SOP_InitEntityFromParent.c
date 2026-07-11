// SOP_InitEntityFromParent (SOP_InitEntityFromParent) - Initializes entity with position from parent entity at offset (+0x14, -0x50)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SOP_InitEntityFromParent(int param_1)

{
  int iVar1;
  
  iVar1 = param_1->parent;
  param_1->sprite_data = _DAT_800ecf80;
  Entity_LoadAnimData(param_1,0x8010d490,0);
  param_1->sprite_flags = 0;
  param_1->draw_y = 0;
  param_1->render_flags = 0x10;
  param_1->target_rot_y = 0;
  param_1->sub_anim_id = 0;
  param_1->counter1 = 0;
  param_1->pos_y = *(s16 *)(iVar1->data_ptr + 0x2c);
  *(short *)(param_1 + 0x32) = *(short *)(iVar1->data_ptr + 0x30) + 0x14;
  param_1->pos_z = *(short *)(iVar1->data_ptr + 0x34) + -0x50;
  return;
}

