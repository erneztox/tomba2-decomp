// GAME_ResetToTitle (GAME_ResetToTitle) - Reset to title screen: resets entity state, calls pool init

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_ResetToTitle(void)

{
  int iVar1;
  
  iVar1 = _DAT_1f800138;
  *(undefined2 *)(_DAT_1f800138 + 0x48) = 2;
  *(undefined2 *)(iVar1 + 0x4a) = 0;
  *(undefined2 *)(iVar1 + 0x4c) = 0;
  *(undefined1 *)(iVar1 + 0x69) = 0;
  func_0x0007a8e0();
  func_0x0007b38c();
  return;
}

