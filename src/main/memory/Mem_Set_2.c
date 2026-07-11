/**
 * @brief PsyQ SDK memset - initializes memory block
 * @note Original address: 0x8009A420
 */
// Mem_Set

undefined1 * Mem_Set(undefined1 *param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)0x0;
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_1;
    if (param_3 < 1) {
      puVar1 = (undefined1 *)0x0;
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

