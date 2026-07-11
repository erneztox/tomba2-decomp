// A03_EntityGroupSetup - Entity group setup: fields 0x08-0x0d from DAT_800ecfa0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A03_EntityGroupSetup(int param_1)

{
  int iVar1;
  int iVar2;
  s32 *puVar3;
  s32 *puVar4;
  int iVar5;
  s16 *puVar6;
  s16 *puVar7;
  
  puVar7 = (s16 *)&DAT_8011baec;
  param_1->counter1 = 5;
  param_1->counter2 = 5;
  iVar2 = _DAT_800ecfa0;
  puVar6 = (s16 *)&DAT_8011baf8;
  param_1->sprite_flags = 0;
  param_1->render_flags = 0;
  iVar5 = param_1;
  while( true ) {
    iVar1 = Entity_AllocFromFreeList();
    iVar5->sprite_ptr1 = iVar1;
    *(s16 *)(iVar1 + 6) = *puVar7;
    **(s16 **)(iVar5 + 0xc0) = puVar6[-5];
    *(s16 *)(iVar5->sprite_ptr1 + 2) = puVar6[-4];
    *(s16 *)(iVar5->sprite_ptr1 + 4) = puVar6[-3];
    *(s16 *)(iVar5->sprite_ptr1 + 8) = puVar6[-2];
    *(s16 *)(iVar5->sprite_ptr1 + 10) = puVar6[-1];
    *(s16 *)(iVar5->sprite_ptr1 + 0xc) = *puVar6;
    if (iVar5 == param_1) break;
    *(int *)(iVar5->sprite_ptr1 + 0x40) = iVar2 + *(int *)(iVar2 + 8);
    puVar6 = puVar6 + 7;
    iVar5 = iVar5 + 4;
    puVar7 = puVar7 + 7;
    if (param_1 + 0x14 <= iVar5) {
      param_1->rot_x = 0;
      param_1->rot_y = 0;
      param_1->rot_z = 0;
      *(s16 *)(param_1 + 0x8a) = 0;
      *(s32 *)(param_1 + 0x60) = 0x80111b48;
      *(s16 *)(param_1 + 0x6c) = 0x8d0;
      *(u8 *)(param_1 + 0x72) = 1;
      *(s16 *)(param_1 + 100) = 0;
      *(s16 *)(param_1 + 0x66) = 0;
      param_1->target_angle = 0;
      param_1->type_flags = 0;
      *(s16 *)(param_1 + 0x76) = 0;
      param_1->velocity_y = 0;
      if (*(int *)(param_1 + 0x1c) == -0x7fef4c84) {
        _DAT_1f80020c = 0;
        _DAT_1f800208 = param_1;
        iVar2 = Entity_SpawnNoPos(0x402,0xffffffc4);
        if (iVar2 != 0) {
          *(s32 *)(iVar2 + 0x50) = 2;
          *(s32 *)(iVar2 + 0x54) = 0xffffff60;
          iVar2->parent = param_1;
        }
        iVar2 = Entity_SpawnNoPos(0x402,0xffffffc4);
        if (iVar2 != 0) {
          *(s32 *)(iVar2 + 0x50) = 4;
          *(s32 *)(iVar2 + 0x54) = 0xa0;
          iVar2->parent = param_1;
        }
        iVar2 = 0;
        puVar3 = (s32 *)&DAT_8011bcd8;
        puVar4 = (s32 *)&DAT_8011bcdc;
        do {
          *puVar3 = 0;
          *puVar4 = 0;
          puVar4 = puVar4 + 2;
          iVar2 = iVar2 + 1;
          puVar3 = puVar3 + 2;
        } while (iVar2 < 0x80);
        _DAT_8011c0d8 = 0;
        _DAT_8011c0dc = 0;
      }
      param_1->timer2 = 0;
      *(s16 *)(param_1 + 0x78) = 0;
      *(s16 *)(param_1 + 0x7a) = 0;
      *(u8 *)(param_1 + 0x73) = 0;
      return;
    }
  }
  if ((DAT_800bf908 == -1) && (DAT_800bf907 == -1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

