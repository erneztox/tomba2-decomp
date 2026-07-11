// A09_EntityStateHandler - Entity state handler: position, anim, parent

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_EntityStateHandler(int param_1)

{
  u8 bVar1;
  int iVar2;
  s16 *puVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    param_1->flags = 1;
    Entity_UpdateMatrix(param_1);
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
      param_1->counter1 = *(u8 *)((uint)param_1->sub_type * 2 + -0x7fef1ea4)
      ;
      if (_g_CollectibleCount < (short)(u16)param_1->counter1) {
        param_1->state = 3;
      }
      else {
        param_1->counter2 = param_1->counter1;
        param_1->sprite_flags = 0;
        param_1->render_flags = 0;
        param_1->state = param_1->state + '\x01';
        puVar3 = *(s16 **)((uint)param_1->sub_type * 4 + -0x7fef1ea8);
        iVar6 = 0;
        iVar5 = param_1;
        if (param_1->counter1 == '\0') {
          return;
        }
        do {
          iVar6 = iVar6 + 1;
          iVar2 = Entity_AllocFromFreeList();
          iVar5->sprite_ptr1 = iVar2;
          *(s16 *)(iVar2 + 6) = *puVar3;
          **(s16 **)(iVar5 + 0xc0) = puVar3->flags;
          *(s16 *)(iVar5->sprite_ptr1 + 2) = puVar3->kind;
          *(s16 *)(iVar5->sprite_ptr1 + 4) = puVar3->sub_type;
          *(s16 *)(iVar5->sprite_ptr1 + 8) = puVar3->state;
          *(s16 *)(iVar5->sprite_ptr1 + 10) = puVar3->behavior_state;
          psVar4 = puVar3 + 7;
          *(s16 *)(iVar5->sprite_ptr1 + 0xc) = puVar3->action_state;
          puVar3 = puVar3 + 8;
          Entity_SetSubEntityData(iVar5->sprite_ptr1,0xc,(int)*psVar4);
          iVar5 = iVar5 + 4;
        } while (iVar6 < (int)(uint)param_1->counter1);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

