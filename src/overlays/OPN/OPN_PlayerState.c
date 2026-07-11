// OPN_PlayerState (OPN_PlayerState) - Player state machine: checks input (_g_InputPressed), spawns entities, plays SFX

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OPN_PlayerState(int param_1)

{
  u8 bVar1;
  uint uVar2;
  s32 uVar3;
  
  bVar1 = param_1->behavior_state;
  if (bVar1 == 1) {
    uVar3 = Entity_AnimFrame(param_1);
    func_0x0018a300(param_1,uVar3);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (g_FrameCounter != '\0') {
        param_1->flags = 1;
        param_1->direction = 0;
        param_1->rot_y = 0;
        param_1->rot_z = 0;
        param_1->behavior_state = param_1->behavior_state + '\x01';
      }
      if ((_g_InputPressed & 0x1f) != 0) {
        if ((_g_InputPressed & 0xf) != 0) {
          return;
        }
        uVar2 = Math_Random();
        if ((uVar2 & 1) == 0) {
          return;
        }
      }
      Audio_PlaySoundEffect(2,0,0);
    }
  }
  else if (bVar1 == 2) {
    param_1->angle_offset = 0;
    param_1->state_flag145 = 0;
    Entity_ResetState_2(param_1);
    param_1->state = 6;
    param_1->behavior_state = 0;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

