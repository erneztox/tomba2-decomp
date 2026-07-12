/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_800147D4 at 0x800147D4
 */
// Sys_SetupSpriteBounds



void Sys_SetupSpriteBounds(int param_1,ushort *param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 2;
  uVar1 = Sys_SetupSpriteBounds((int)(short)*param_2,(int)(short)param_2[1]);
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = Sys_SetupSpriteBounds((int)(((uint)*param_2 + (uint)param_2[2] + -1) * 0x10000) >> 0x10,
                       (int)(((uint)param_2[1] + (uint)param_2[3] + -1) * 0x10000) >> 0x10);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}
