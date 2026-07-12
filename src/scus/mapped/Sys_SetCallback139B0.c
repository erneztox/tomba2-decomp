/**
 * @brief Registers a system callback and fills memory
 * @note Original: func_800139B0 at 0x800139B0
 */
// Sys_SetCallback139B0



void Sys_SetCallback139B0(int param_1)

{
  undefined4 uVar1;
  
  if (1 < DAT_80025516) {
    (*DAT_80025510)(&DAT_8001020c,param_1);
  }
  if (param_1 == 0) {
    Sys_SetCallback139B0(&DAT_80025580,0xffffffff,0x14);
  }
  uVar1 = 0x3000001;
  if (param_1 != 0) {
    uVar1 = 0x3000000;
  }
  (**(code **)(DAT_8002550c + 0x10))(uVar1);
  return;
}
