/**
 * @brief Executes system callback (offset 0x3C)
 * @note Original: func_80013A78 at 0x80013A78
 */
// Sys_ExecuteCallback2



void Sys_ExecuteCallback2(void)

{
  code *in_v0;
  
  (*in_v0)();
  (**(code **)(DAT_8002550c + 0x3c))();
  return;
}
