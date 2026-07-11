// A03_LevelInit_SpawnEntities - Level init: spawns entities from DAT_8011ba48 table, DAT_800bf9f8 bitfield

/* WARNING: Control flow encountered bad instruction data */

void A03_LevelInit_SpawnEntities(void)

{
  s32 uVar1;
  int iVar2;
  s32 *puVar3;
  uint uVar4;
  u8 auStack_20->kind;
  short local_1e;
  short local_1a;
  short local_16;
  
  uVar4 = 0;
  puVar3 = (s32 *)&DAT_8011ba48;
  do {
    iVar2 = puVar3->flags * 0x30;
    if (((int)(uint)DAT_800bf9f8 >> (uVar4 & 0x1f) & 1U) == 0) {
      local_1e = *(short *)(iVar2 + -0x7feee4b8) +
                 (short)((int)*(short *)(iVar2 + -0x7feee4a8) puVar3->state >> 0xc) +
                 (short)((int)*(short *)(iVar2 + -0x7feee4a6) puVar3->behavior_state >> 0xc) +
                 (short)((int)*(short *)(iVar2 + -0x7feee4a4) puVar3->action_state >> 0xc);
      local_1a = *(short *)(iVar2 + -0x7feee4b6) +
                 (short)((int)*(short *)(iVar2 + -0x7feee4a2) puVar3->state >> 0xc) +
                 (short)((int)*(short *)(iVar2 + -0x7feee4a0) puVar3->behavior_state >> 0xc) +
                 (short)((int)*(short *)(iVar2 + -0x7feee49e) puVar3->action_state >> 0xc);
      local_16 = *(short *)(iVar2 + -0x7feee4b4) +
                 (short)((int)*(short *)(iVar2 + -0x7feee49c) puVar3->state >> 0xc) +
                 (short)((int)*(short *)(iVar2 + -0x7feee49a) puVar3->behavior_state >> 0xc) +
                 (short)((int)*(short *)(iVar2 + -0x7feee498) puVar3->action_state >> 0xc);
      uVar1 = Entity_SpawnWithPos(0x401,auStack_20,0);
      *puVar3 = uVar1;
      puVar3->sub_action = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *puVar3 = 0;
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 8;
  } while ((int)uVar4 < 5);
  return;
}

