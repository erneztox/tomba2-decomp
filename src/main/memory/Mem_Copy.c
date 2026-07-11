/**
 * @brief Memory copy: u8-by-u8 memcpy, returns destination pointer
 * @note Original: func_8009A3E0 at 0x8009A3E0
 */
// Mem_Copy



u8 * FUN_8009a3e0(u8 *param_1,u8 *param_2,int param_3)

{
  u8 uVar1;
  u8 *puVar2;
  u8 *puVar3;
  
  puVar3 = (u8 *)0x0;
  puVar2 = param_1;
  if (param_1 != (u8 *)0x0) {
    for (; puVar3 = param_1, 0 < param_3; param_3 = param_3 + -1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    }
  }
  return puVar3;
}
