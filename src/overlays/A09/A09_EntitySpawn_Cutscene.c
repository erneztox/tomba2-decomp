// A09_EntitySpawn_Cutscene - Cutscene entity spawn: Audio_Play, camera target

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 A09_EntitySpawn_Cutscene(int param_1)

{
  short sVar1;
  
  if (param_1->sub_state == '\0') {
    param_1->sub_state = 1;
    DAT_800e807e = 1;
    _DAT_800bf864->state = 3;
    _DAT_800bf864 = Entity_SpawnWithPos(0xa01,param_1 + 0x2c,0);
    Audio_PlaySoundEffect(0x37,0xffffffec,0);
    param_1->timer1 = 0x5a;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1->sub_state == '\x01') {
    sVar1 = param_1->timer1 + -1;
    param_1->timer1 = sVar1;
    if (sVar1 != -1) {
      return 0;
    }
    DAT_800e807e = 0;
    _DAT_800bf864->state = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

