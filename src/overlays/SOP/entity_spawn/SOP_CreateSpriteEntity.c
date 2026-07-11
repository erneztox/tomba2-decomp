// SOP_CreateSpriteEntity (SOP_CreateSpriteEntity) - Allocates a sprite entity (pool 0, type 6) with draw function 0x8002AB5C

/* WARNING: Control flow encountered bad instruction data */

s32 SOP_CreateSpriteEntity(s32 param_1)

{
  int iVar1;
  
  iVar1 = Entity_AllocByPoolId(0,6,1);
  if (iVar1 != 0) {
    *(s32 *)(iVar1 + 0x1c) = 0x8010ab38;
    iVar1->render_flags = 0x20;
    iVar1->parent = param_1;
    iVar1->script_data = 0x8002ab5c;
    iVar1->alloc_flags = iVar1->alloc_flags | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

