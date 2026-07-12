/**
 * @brief Executes system callback (offset 0x14)
 * @note Original: func_80013FE0 at 0x80013FE0
 */
// Sys_ExecuteCallback3



void Sys_ExecuteCallback3(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 3);
  (**(code **)(DAT_8002550c + 0x3c))(0);
  (**(code **)(DAT_8002550c + 0x14))(param_1 + 4,uVar1);
  return;
}
