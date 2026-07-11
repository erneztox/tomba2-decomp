// A0G_TimerStateHandler2 - Timer state handler variant 2

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 A0G_TimerStateHandler2(int param_1)

{
  u8 bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1->behavior_state;
  if (bVar1 == 1) {
    sVar2 = param_1->timer1 + -1;
    param_1->timer1 = sVar2;
    if (sVar2 == -1) {
      param_1->behavior_state = param_1->behavior_state + '\x01';
      DAT_1f800137 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return 0;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1->timer1 = 0xf;
      param_1->behavior_state = 1;
      param_1->angle_offset = 0x400;
      Entity_CalcAngleDelta(param_1);
      DAT_800bf81f = 0;
      g_PlayerAction = 4;
      DAT_800e7e85 = 0x24;
      DAT_800e7e86 = 0;
      DAT_800e7eaa = param_1->collision_dir;
      _g_CameraPosX = param_1->pos_y;
      _g_CameraPosY =
           (param_1->bounds_min_y +
           *(short *)(param_1 + 0x32) + *(short *)((uint)param_1->sub_type * 0xc + -0x7fef2d2a)
           ) - _DAT_800e7f04;
      _g_CameraPosZ = param_1->pos_z;
      halt_baddata();
    }
  }
  else {
    if (bVar1 == 2) {
      iVar3 = Entity_RotateLimb(param_1);
      if (iVar3 != 0) {
        param_1->behavior_state = param_1->behavior_state + '\x01';
        halt_baddata();
      }
      return 0;
    }
    if (bVar1 == 3) {
      if (g_SeqComplete2 != '\0') {
        return 0;
      }
      param_1->behavior_state = 0;
      _DAT_800bf850 = 0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

