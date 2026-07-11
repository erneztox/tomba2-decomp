// OPN_CinematicSequence (OPN_CinematicSequence) - Cinematic sequence: checks frame counter g_FrameCounter, sound, camera zoom

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OPN_CinematicSequence(int param_1)

{
  u8 bVar1;
  short sVar2;
  
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    if (g_FrameCounter < 0x4b) {
      return;
    }
    *(s16 *)(param_1 + 0x76) = 1;
    _DAT_8014a270 = Audio_PlaySoundEffect(0x81,0,0x2a);
    param_1->normal_x = 0x100;
    param_1->sprite_x = 0x100;
    param_1->timer1 = 0;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (g_FrameCounter < 0x46) {
        return;
      }
      *(s16 *)(param_1->sprite_ptr2 + 8) = *(s16 *)(param_1 + 100);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    *(short *)(param_1->sprite_ptr2 + 8) =
         *(short *)(param_1->sprite_ptr2 + 8) +
         (short)(char)((u16)param_1->normal_x >> 8);
    if (*(short *)(param_1 + 0x66) <= *(short *)(param_1->sprite_ptr2 + 8)) {
      *(s16 *)(param_1->sprite_ptr2 + 8) = *(s16 *)(param_1 + 0x66);
      if (param_1->timer1 != 0) {
        param_1->normal_x = 0;
        param_1->sprite_x = 0;
        param_1->action_state = param_1->action_state + '\x01';
        halt_baddata();
      }
      func_0x00074af0(_DAT_8014a270);
      _DAT_8014a270 = 0;
      Audio_PlaySoundEffect(0x82,0,0);
      param_1->normal_x = 0xf600;
      param_1->sprite_x = 0x200;
      *(s16 *)(param_1 + 0x76) = 2;
      param_1->timer1 = 1;
    }
    sVar2 = param_1->normal_x + param_1->sprite_x;
    param_1->normal_x = sVar2;
    if (sVar2 < 0x1601) {
      return;
    }
    param_1->normal_x = 0x1600;
  }
  else if (bVar1 == 3) {
    if (g_PlayerState != '\x02') {
      *(s16 *)(param_1 + 0x76) = 0;
      *(s16 *)(param_1->sprite_ptr2 + 8) = 0xf0;
      func_0x001314b4(param_1);
      func_0x0013892c(param_1);
      param_1->behavior_state = 0;
      param_1->action_state = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

