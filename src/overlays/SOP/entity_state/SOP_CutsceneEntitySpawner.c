// SOP_CutsceneEntitySpawner (SOP_CutsceneEntitySpawner) - Cutscene entity spawner: 4-state machine, sets up animation and camera

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SOP_CutsceneEntitySpawner(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    GTE_ProjectSprite2(param_1);
    bVar1 = param_1->behavior_state;
    if (bVar1 == 1) {
      Entity_ScriptRun(param_1);
      if (param_1->anim_check == -1) {
        param_1->behavior_state = param_1->behavior_state + '\x01';
      }
    }
    else if (((bVar1 < 2) && (bVar1 == 0)) && (iVar2 = func_0x0010b11c(param_1), iVar2 != 0)) {
      param_1->behavior_state = param_1->behavior_state + '\x01';
      Entity_InitFromScript(param_1,0x8001b860,0x8010cab8);
      param_1->anim_check = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    Entity_SetAnimFlag79(param_1);
    GTE_ComposeAndProject(param_1);
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
      iVar2 = Entity_AllocFromPool(param_1,0xc,_DAT_800ecf98,0x800a4bc8);
      if (iVar2 != 0) {
        return;
      }
      param_1->sprite_data = _DAT_800ecf9c;
      Entity_LoadAnimData3(param_1,0x8001b860,0);
      param_1->scale_x = 0;
      param_1->scale_y = 0;
      param_1->scale_z = 0;
      param_1->state = param_1->state + '\x01';
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x8c;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

