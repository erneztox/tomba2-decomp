/**
 * @brief Memory compare: returns 0 if first param_2 bytes match, else difference
 * @note Original: func_8009A340 at 0x8009A340
 */
// Mem_Compare



undefined1 * FUN_8009a340(undefined1 *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)0x0;
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_1;
    if (param_2 < 1) {
      puVar1 = (undefined1 *)0x0;
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
