/**
 * @brief Hardware reset sequence
 * @note Original: func_80011A0C at 0x80011A0C
 */
// Sys_ResetHardware



void Sys_ResetHardware(void)

{
  int iVar1;
  undefined4 in_stack_00000018;
  undefined2 in_stack_0000001c;
  undefined2 uStack0000001e;
  undefined2 in_stack_00000028;
  undefined2 uStack0000002a;
  undefined4 in_stack_00000030;
  uint in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  
  Sys_ResetHardware(0x20000);
  Sys_ResetHardware(1);
  Sys_ResetHardware(0x8001fb5c);
  Sys_ResetHardware(&stack0x00000040);
  Sys_ResetHardware(in_stack_0000004c,in_stack_00000050);
  if ((in_stack_00000040 & 8) != 0) {
    Sys_ResetHardware(in_stack_00000044,in_stack_00000048);
  }
  Sys_ResetHardware(0);
  func_0x80010d54();
  Sys_ResetHardware();
  Sys_ResetHardware(0);
  Sys_ResetHardware();
  in_stack_00000018 = 0x2c3;
  in_stack_0000001c = 0x1fff;
  uStack0000001e = 0x1fff;
  in_stack_00000028 = 0x7fff;
  uStack0000002a = 0x7fff;
  in_stack_00000030 = 1;
  Sys_ResetHardware(&stack0x00000018);
  do {
    iVar1 = Sys_ResetHardware();
  } while (iVar1 == 0);
  in_stack_00000030 = 0;
  Sys_ResetHardware(&stack0x00000018);
  Sys_ResetHardware(0);
  Sys_ResetHardware(0xf2000000);
  Sys_ResetHardware(0xf2000001);
  Sys_ResetHardware(0xf2000002);
  Sys_ResetHardware(0xf2000003);
  Sys_ResetHardware();
  Sys_ResetHardware();
  Sys_ResetHardware(0);
  Sys_ResetHardware(0);
  Sys_ResetHardware();
  Sys_ResetHardware();
  Sys_ResetHardware(9,0,0);
  Sys_ResetHardware(3);
  Sys_ResetHardware();
  Sys_ResetHardware();
  Sys_ResetHardware();
  Sys_ResetHardware(&DAT_800253a4,0x80200000,0);
  return;
}
