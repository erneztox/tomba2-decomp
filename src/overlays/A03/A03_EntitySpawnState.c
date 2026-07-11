// A03_EntitySpawnState - Entity spawn state machine (4 states): spawn, animate, dealloc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A03_EntitySpawnState(int param_1)

{
  u8 bVar1;
  int iVar2;
  s32 uVar3;
  s32 uVar4;
  s32 uVar5;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        Entity_Dealloc(param_1);
        return;
      }
      if (param_1->behavior_state == '\0') {
        iVar2 = Entity_SpawnChild(0,3,4,0x26);
        *(s32 *)(iVar2 + 0x1c) = 0x8010e590;
        iVar2->parent = 0x800e7e80;
        _DAT_800e7e90 = iVar2;
        iVar2->pos_y = param_1->pos_y;
        *(s16 *)(iVar2 + 0x32) = *(s16 *)(param_1 + 0x32);
        iVar2->pos_z = param_1->pos_z;
        iVar2->sub_type = param_1->sub_action;
        uVar3 = *(s32 *)(param_1 + 0x9c);
        uVar4 = *(s32 *)(param_1 + 0xa0);
        uVar5 = *(s32 *)(param_1 + 0xa4);
        iVar2->gte_result = param_1->gte_result;
        *(s32 *)(iVar2 + 0x9c) = uVar3;
        *(s32 *)(iVar2 + 0xa0) = uVar4;
        *(s32 *)(iVar2 + 0xa4) = uVar5;
        uVar3 = param_1->projected_x;
        uVar4 = param_1->projected_y;
        uVar5 = param_1->projected_z;
        *(s32 *)(iVar2 + 0xa8) = *(s32 *)(param_1 + 0xa8);
        iVar2->projected_x = uVar3;
        iVar2->projected_y = uVar4;
        iVar2->projected_z = uVar5;
        param_1->flags = 1;
        Sprite_Alloc1(param_1);
        Entity_CheckState2(param_1);
        param_1->behavior_state = param_1->behavior_state + '\x01';
      }
      else if (param_1->behavior_state != '\x01') {
        halt_baddata();
      }
      func_0x0010e160(param_1);
      if (DAT_1f800137 != '\x02') {
        return;
      }
      if (g_GameMode != '\x02') {
        return;
      }
      param_1->state = 3;
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x0010bdec(param_1);
    func_0x0010b738();
    _DAT_8011bae8 = 0xfffffe70;
    param_1->state = 1;
    param_1->behavior_state = 0;
  }
  func_0x0010e160(param_1);
  if (param_1->behavior_state < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0801248c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->behavior_state * 4 + -0x7fef7044))();
    return;
  }
  if ((DAT_1f800137 == '\x02') && (g_SeqComplete2 == '\0')) {
    param_1->state = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

