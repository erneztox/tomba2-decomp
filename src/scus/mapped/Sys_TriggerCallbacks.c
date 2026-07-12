/**
 * @brief Trigger system callbacks
 * @note Original: func_80011904 at 0x80011904
 */
// Sys_TriggerCallbacks



void Sys_TriggerCallbacks(undefined4 param_1,undefined4 param_2)

{
  int unaff_s6;
  undefined2 in_stack_0000007c;
  undefined2 uStack0000007e;
  undefined2 in_stack_00000080;
  undefined1 in_stack_00000084;
  undefined2 in_stack_0000013c;
  undefined2 uStack0000013e;
  undefined2 in_stack_00000140;
  undefined1 in_stack_00000144;
  
  Sys_TriggerCallbacks(param_1,param_2,0x100,0x140);
  Sys_TriggerCallbacks(&stack0x00000074,0,0x100,0x140);
  Sys_TriggerCallbacks(&stack0x00000134,0,0,0x140);
  in_stack_0000007c = 0;
  uStack0000007e = 8;
  in_stack_00000080 = 0x100;
  in_stack_0000013c = 0;
  uStack0000013e = 8;
  in_stack_00000140 = 0x100;
  in_stack_00000144 = 0;
  in_stack_00000084 = 0;
  Sys_TriggerCallbacks(unaff_s6 + 0x5c);
  Sys_TriggerCallbacks();
  return;
}
