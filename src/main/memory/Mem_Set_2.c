/**
 * @brief PsyQ SDK memset - initializes memory block
 * @note Original address: 0x8009A420
 */
// Mem_Set

u8 * Mem_Set(u8 *param_1,u8 param_2,int param_3)

{
  u8 *puVar1;
  u8 *puVar2;
  
  puVar1 = (u8 *)0x0;
  if (param_1 != (u8 *)0x0) {
    puVar2 = param_1;
    if (param_3 < 1) {
      puVar1 = (u8 *)0x0;
    }
    else {
      do {
        *puVar2 = param_2;
        param_3 = param_3 + -1;
        puVar2 = puVar2 + 1;
        puVar1 = param_1;
      } while (0 < param_3);
    }
  }
  return puVar1;
}

