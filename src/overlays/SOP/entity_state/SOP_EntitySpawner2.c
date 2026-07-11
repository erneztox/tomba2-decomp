// SOP_EntitySpawner2 (SOP_EntitySpawner2) - Entity spawner variant 2: spawns with camera shake, sets position/rotation

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SOP_EntitySpawner2(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    GTE_ProjectSprite2(param_1);
    func_0x0010b588(param_1);
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
      iVar2 = Entity_AllocFromPool(param_1,0xf,_DAT_800ecfa0,0x8010cb08);
      if (iVar2 != 0) {
        return;
      }
      param_1->sprite_data = _DAT_800ecf68;
      Entity_LoadAnimData3(param_1,0x80017fe8,2);
      param_1->bounds_min_y = 0x60;
      param_1->sub_type = 1;
      param_1->state = param_1->state + '\x01';
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x60;
      func_0x0010ae30();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

