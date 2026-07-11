// SOP_ParentTrackedEntitySpawner (SOP_ParentTrackedEntitySpawner) - Spawns entity that follows parent at offset, sets up animation

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SOP_ParentTrackedEntitySpawner(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    if (param_1->sub_type != '\0') {
      return;
    }
    func_0x0010baf8(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        Entity_Dealloc(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      param_1->state = 1;
      if (param_1->sub_type != '\0') {
        return;
      }
      iVar2 = param_1->parent;
      param_1->sprite_data = _g_AnimDataPtr;
      Entity_LoadAnimData(param_1,0x8010d490,0);
      param_1->sprite_flags = 0;
      param_1->draw_y = 0;
      param_1->render_flags = 0x10;
      param_1->target_rot_y = 0;
      param_1->sub_anim_id = 0;
      param_1->counter1 = 0;
      param_1->pos_y = *(s16 *)(iVar2->data_ptr + 0x2c);
      *(short *)(param_1 + 0x32) = *(short *)(iVar2->data_ptr + 0x30) + 0x14;
      param_1->pos_z = *(short *)(iVar2->data_ptr + 0x34) + -0x50;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

