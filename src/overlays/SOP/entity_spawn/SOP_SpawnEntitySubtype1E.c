// SOP_SpawnEntitySubtype1E (SOP_SpawnEntitySubtype1E) - Spawns entity: pool 0, type 3, subtype 0x1E, sets behavior to 0x8010BC8C

int SOP_SpawnEntitySubtype1E(s32 param_1)

{
  int iVar1;
  
  iVar1 = Entity_SpawnChild(param_1,0,3,0x1e);
  if (iVar1 != 0) {
    *(s32 *)(iVar1 + 0x1c) = 0x8010bc8c;
    iVar1->parent = param_1;
  }
  return iVar1;
}

