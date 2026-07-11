// OPN_ChildSpawner (OPN_ChildSpawner) - Child entity spawner: spawns explosion/particle children with SFX

void OPN_ChildSpawner(int param_1,short param_2)

{
  u8 auStack_18->kind;
  s16 local_16;
  s16 local_12;
  s16 local_e;
  
  local_16 = *(s16 *)(*(int *)(param_1 + (param_1->counter1 - 1) * 4 + 0xc0) + 0x2c);
  local_12 = *(s16 *)(*(int *)(param_1 + (param_1->counter1 - 1) * 4 + 0xc0) + 0x30);
  local_e = *(s16 *)(*(int *)(param_1 + (param_1->counter1 - 1) * 4 + 0xc0) + 0x34);
  Entity_SpawnChildSequence(*(s32 *)
                   (*(int *)(param_1 + (param_1->counter1 - 1) * 4 + 0xc0) + 0x40),auStack_18,
                  0x800,(int)param_2);
  Audio_PlaySoundEffect(0xc,0,0);
  return;
}

