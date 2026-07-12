/**
 * @brief Main hardware boot initialization
 * @note Original: func_800119B4 at 0x800119B4
 */
// Sys_BootConsole



void Sys_BootConsole(void)

{
  int iVar1;
  undefined4 local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_30;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  Sys_BootConsole();
  Sys_BootConsole();
  Sys_BootConsole();
  Sys_BootConsole(0);
  Sys_BootConsole(0);
  Sys_BootConsole(0);
  Sys_BootConsole(0);
  Sys_BootConsole(0);
  Sys_BootConsole();
  Sys_BootConsole(0x1010);
  Sys_BootConsole(0x20000);
  Sys_BootConsole(1);
  Sys_BootConsole(0x8001fb5c);
  Sys_BootConsole(&local_20);
  Sys_BootConsole(local_14,local_10);
  if ((local_20 & 8) != 0) {
    Sys_BootConsole(local_1c,local_18);
  }
  Sys_BootConsole(0);
  func_0x80010d54();
  Sys_BootConsole();
  Sys_BootConsole(0);
  Sys_BootConsole();
  local_48 = 0x2c3;
  local_44 = 0x1fff;
  local_42 = 0x1fff;
  local_38 = 0x7fff;
  local_36 = 0x7fff;
  local_30 = 1;
  Sys_BootConsole(&local_48);
  do {
    iVar1 = Sys_BootConsole();
  } while (iVar1 == 0);
  local_30 = 0;
  Sys_BootConsole(&local_48);
  Sys_BootConsole(0);
  Sys_BootConsole(0xf2000000);
  Sys_BootConsole(0xf2000001);
  Sys_BootConsole(0xf2000002);
  Sys_BootConsole(0xf2000003);
  Sys_BootConsole();
  Sys_BootConsole();
  Sys_BootConsole(0);
  Sys_BootConsole(0);
  Sys_BootConsole();
  Sys_BootConsole();
  Sys_BootConsole(9,0,0);
  Sys_BootConsole(3);
  Sys_BootConsole();
  Sys_BootConsole();
  Sys_BootConsole();
  Sys_BootConsole(&DAT_800253a4,0x80200000,0);
  return;
}
