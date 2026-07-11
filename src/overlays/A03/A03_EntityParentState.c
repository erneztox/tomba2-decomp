// A03_EntityParentState - Entity state with parent tracking and velocity

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A03_EntityParentState(int param_1)

{
  u8 bVar1;
  s16 uVar2;
  s16 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1->parent;
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1->state = 1;
    uVar3 = _DAT_8011bc2a;
    uVar2 = _DAT_8011bc28;
    param_1->anim_data = 0;
    param_1->anim_counter = uVar2;
    *(s16 *)(param_1 + 0x46) = uVar3;
  }
  if (iVar5->state < 2) {
    param_1->scale_y = param_1->anim_data;
    if (param_1->anim_data == 0) {
      param_1->anim_data = 0x8011bc2c;
      param_1->scale_y = 0x8011bc2c;
    }
    if (((uint)*(u8 *)(iVar5 + 0x72) & *(uint *)(param_1 + 0x50)) == 0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x54);
    param_1->pos_x = iVar5->pos_y;
    param_1->pos_y = *(s16 *)(iVar5 + 0x32);
    *(s16 *)(param_1 + 0x30) = iVar5->pos_z;
    param_1->pos_x =
         param_1->pos_x + (short)(*(short *)(iVar5 + 0x9c) * iVar4 >> 0xc);
    param_1->pos_y =
         param_1->pos_y + (short)(*(short *)(iVar5 + 0xa2) * iVar4 >> 0xc);
    *(short *)(param_1 + 0x30) =
         *(short *)(param_1 + 0x30) + (short)(*(short *)(iVar5 + 0xa8) * iVar4 >> 0xc);
    param_1->pos_x =
         param_1->pos_x + (short)(*(short *)(iVar5 + 0x98) * -0x6e >> 0xc);
    param_1->pos_y =
         param_1->pos_y + (short)(*(short *)(iVar5 + 0x9e) * -0x6e >> 0xc);
    *(short *)(param_1 + 0x30) =
         *(short *)(param_1 + 0x30) + (short)(*(short *)(iVar5 + 0xa4) * -0x6e >> 0xc);
    param_1->pos_x =
         param_1->pos_x + (short)(*(short *)(iVar5 + 0x9a) * 3 >> 6);
    param_1->pos_y =
         param_1->pos_y + (short)(*(short *)(iVar5 + 0xa0) * 3 >> 6);
    *(short *)(param_1 + 0x30) =
         *(short *)(param_1 + 0x30) + (short)(*(short *)(iVar5 + 0xa6) * 3 >> 6);
    param_1->flags = 1;
  }
  else {
    param_1->state = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

