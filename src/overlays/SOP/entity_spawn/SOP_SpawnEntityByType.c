// SOP_SpawnEntityByType (SOP_SpawnEntityByType) - Spawns entity by type: pool 3, subtype 0x1A, sets behavior to 0x8010B2D4

int SOP_SpawnEntityByType(s32 param_1)

{
  int iVar1;
  
  iVar1 = Entity_SpawnChild(param_1,3,3,0x1a);
  if (iVar1 != 0) {
    *(s32 *)(iVar1 + 0x1c) = 0x8010b2d4;
    iVar1->parent = param_1;
  }
  return iVar1;
}

