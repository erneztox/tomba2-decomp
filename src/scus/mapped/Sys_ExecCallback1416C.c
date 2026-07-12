/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_8001416C at 0x8001416C
 */
// Sys_ExecCallback1416C



void Sys_ExecCallback1416C(uint param_1,int param_2)

{
  int iVar1;
  
  if (1 < DAT_80025516) {
    (*DAT_80025510)(&DAT_800102f0,param_1,param_2);
  }
  Sys_ExecCallback1416C(param_2 + 0x1c,param_2);
  iVar1 = DAT_8002550c;
  *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & 0xff000000 | param_1 & 0xffffff;
  (**(code **)(iVar1 + 8))(*(undefined4 *)(iVar1 + 0x18),param_2 + 0x1c,0x40,0);
  Sys_ExecCallback1416C(&DAT_80025524,param_2,0x5c);
  return;
}
