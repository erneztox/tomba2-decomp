// SOP_GameStateTransition (SOP_GameStateTransition) - Game state transition handler: sets g_GameState=2, initializes camera and sprite

/* WARNING: Control flow encountered bad instruction data */

void SOP_GameStateTransition(int param_1)

{
  u8 bVar1;
  
  bVar1 = param_1->sub_state;
  if (bVar1 == 1) {
    param_1->pos_y = 0x104b;
    param_1->pos_z = 0x4ab5;
    param_1->rot_y = 0x400;
    func_0x0010bdb8(param_1);
    param_1->sub_state = param_1->sub_state + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      g_GameSubState = 2;
      Camera_SetTarget(&DAT_800e8008,0x8010c968);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    g_SOP_Complete = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

