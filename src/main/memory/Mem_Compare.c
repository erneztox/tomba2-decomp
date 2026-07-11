/**
 * @brief Memory compare: returns 0 if first param_2 bytes match, else difference
 * @note Original: func_8009A340 at 0x8009A340
 */
// Mem_Compare



u8 * Mem_Compare(u8 *param_1,int param_2)

{
  u8 *puVar1;
  u8 *puVar2;
  
  puVar1 = (u8 *)0x0;
  if (param_1 != (u8 *)0x0) {
    puVar2 = param_1;
    if (param_2 < 1) {
      puVar1 = (u8 *)0x0;
    }
    else {
      do {
        *puVar2 = 0;
        param_2 = param_2 + -1;
        puVar2 = puVar2 + 1;
        puVar1 = param_1;
      } while (0 < param_2);
    }
  }
  return puVar1;
}
