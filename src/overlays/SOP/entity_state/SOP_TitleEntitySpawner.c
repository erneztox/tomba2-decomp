// SOP_TitleEntitySpawner (SOP_TitleEntitySpawner) - Title screen entity spawner: 4-state machine, spawns entity at saved position

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SOP_TitleEntitySpawner(int param_1)

{
  u8 bVar1;
  s32 uVar2;
  int iVar3;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    iVar3 = GTE_ProjectSprite2(param_1);
    if (iVar3 != 0) {
      GTE_ComposeAndProject(param_1);
    }
    Entity_ScriptRun(param_1);
    Entity_SetAnimFlag79(param_1);
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
      Texture_LoadUI(0x800e7e80);
      iVar3 = Entity_AllocFromPool(param_1,0x11,_DAT_800ed014,0x800a3fa8);
      uVar2 = _DAT_800ecf68;
      if (iVar3 != 0) {
        return;
      }
      param_1->sub_anim_id = 0xff;
      param_1->sprite_data = uVar2;
      param_1->state = param_1->state + '\x01';
      Entity_InitFromScript(param_1,0x80017fe8,0x8010ca28);
      Entity_LoadAnimIfChanged(param_1,8,0);
      param_1->anim_check = 2;
      param_1->bounds_min_y = 0x8c;
      func_0x0010ae30();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

