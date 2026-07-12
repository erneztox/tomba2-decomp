/**
 * @brief Memory initialization
 * @note Original: func_80011A78 at 0x80011A78
 */
// Sys_InitMemory



void Sys_InitMemory(void)

{
  int iVar1;
  undefined4 in_stack_00000018;
  undefined2 in_stack_0000001c;
  undefined2 uStack0000001e;
  undefined2 in_stack_00000028;
  undefined2 uStack0000002a;
  undefined4 in_stack_00000030;
  
  Sys_InitMemory(0);
  Sys_InitMemory();
  in_stack_00000018 = 0x2c3;
  in_stack_0000001c = 0x1fff;
  uStack0000001e = 0x1fff;
  in_stack_00000028 = 0x7fff;
  uStack0000002a = 0x7fff;
  in_stack_00000030 = 1;
  Sys_InitMemory(&stack0x00000018);
  do {
    iVar1 = Sys_InitMemory();
  } while (iVar1 == 0);
  in_stack_00000030 = 0;
  Sys_InitMemory(&stack0x00000018);
  Sys_InitMemory(0);
  Sys_InitMemory(0xf2000000);
  Sys_InitMemory(0xf2000001);
  Sys_InitMemory(0xf2000002);
  Sys_InitMemory(0xf2000003);
  Sys_InitMemory();
  Sys_InitMemory();
  Sys_InitMemory(0);
  Sys_InitMemory(0);
  Sys_InitMemory();
  Sys_InitMemory();
  Sys_InitMemory(9,0,0);
  Sys_InitMemory(3);
  Sys_InitMemory();
  Sys_InitMemory();
  Sys_InitMemory();
  Sys_InitMemory(&DAT_800253a4,0x80200000,0);
  return;
}
