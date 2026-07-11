/**
 * @brief GPU draw primitive: reads type from struct+3, dispatches via function ptr table
 * @note Original: func_80081504 at 0x80081504
 */
// GPU_DrawPrimitive



void FUN_80081504(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 3);
  (**(code **)(PTR_PTR_800a5998 + 0x3c))(0);
  (**(code **)(PTR_PTR_800a5998 + 0x14))(param_1 + 4,uVar1);
  return;
}
