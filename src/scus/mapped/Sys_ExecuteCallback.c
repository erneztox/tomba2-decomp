/**
 * @brief Executes system callback from table
 * @note Original: func_800137E0 at 0x800137E0
 */
// Sys_ExecuteCallback



void Sys_ExecuteCallback(void)

{
  int in_v0;
  
  if (1 < *(byte *)(in_v0 + 0x5516)) {
    (*DAT_80025510)(&DAT_8001019c);
  }
  (**(code **)(DAT_8002550c + 0x34))(1);
  return;
}
