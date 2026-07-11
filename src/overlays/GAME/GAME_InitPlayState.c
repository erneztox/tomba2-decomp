// GAME_InitPlayState (GAME_InitPlayState) - Initialize play state: clears flags, sets entity sub-states

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_InitPlayState(void)

{
  int iVar1;
  
  iVar1 = _DAT_1f800138;
  *(undefined2 *)(_DAT_1f800138 + 0x48) = 2;
  *(undefined2 *)(iVar1 + 0x4a) = 1;
  *(undefined2 *)(iVar1 + 0x4c) = 0;
  *(undefined1 *)(iVar1 + 0x69) = 0;
  DAT_1f8001ff = 0xff;
  _DAT_1f800278 = 0;
  func_0x0007b3f4();
  DAT_1f800206 = 0;
  DAT_1f800236 = 0;
  DAT_1f800234 = 0;
  return;
}

