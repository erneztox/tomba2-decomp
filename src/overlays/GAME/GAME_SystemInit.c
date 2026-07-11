// GAME_SystemInit (GAME_SystemInit) - System init (without game-specific): pool init, entity init, render init

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_SystemInit(void)

{
  int iVar1;
  
  func_0x0007b18c();
  func_0x000796dc();
  func_0x000263e8();
  func_0x00072a78();
  func_0x00075240();
  func_0x000783dc();
  func_0x00078610();
  iVar1 = _DAT_1f800138;
  *(undefined2 *)(_DAT_1f800138 + 0x4e) = 1;
  *(undefined1 *)(iVar1 + 0x6b) = 0;
  return;
}

