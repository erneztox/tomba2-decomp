// SOP_GameStateTransition (SOP_GameStateTransition) - Game state transition handler: sets g_GameState=2, initializes camera and sprite

/* WARNING: Control flow encountered bad instruction data */

void SOP_GameStateTransition(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    *(undefined2 *)(param_1 + 0x2e) = 0x104b;
    *(undefined2 *)(param_1 + 0x36) = 0x4ab5;
    *(undefined2 *)(param_1 + 0x56) = 0x400;
    func_0x0010bdb8(param_1);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      DAT_800bf9b4 = 2;
      func_0x0006cbd0(&DAT_800e8008,0x8010c968);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    DAT_800bf80f = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

