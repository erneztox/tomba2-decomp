// OPN_SpawnEntity (OPN_SpawnEntity) - Entity spawner: pool 0, type 3, subtype 0x10, behavior 0x8012DA04

/* WARNING: Control flow encountered bad instruction data */

s32 OPN_SpawnEntity(s32 param_1)

{
  int iVar1;
  
  iVar1 = Entity_SpawnChild(param_1,0,3,0x10);
  if (iVar1 != 0) {
    iVar1->sub_type = 1;
    *(s32 *)(iVar1 + 0x1c) = 0x8012da04;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

