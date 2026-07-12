/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_800140AC at 0x800140AC
 */
// Sys_ExecCallback140AC



int Sys_ExecCallback140AC(int param_1)

{
  int iVar1;
  
  if (1 < DAT_80025516) {
    (*DAT_80025510)(&DAT_800102d8,param_1);
  }
  Sys_ExecCallback140AC(param_1 + 0x1c,param_1);
  iVar1 = DAT_8002550c;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0xffffff;
  (**(code **)(iVar1 + 8))(*(undefined4 *)(iVar1 + 0x18),param_1 + 0x1c,0x40,0);
  Sys_ExecCallback140AC(&DAT_80025524,param_1,0x5c);
  return param_1;
}
