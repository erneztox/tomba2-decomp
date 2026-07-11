/**
 * @brief GPU put draw environment: sends PutDrawEnv cmd, returns ptr
 * @note Original: func_800815D0 at 0x800815D0
 */
// GPU_PutDrawEnv



int FUN_800815d0(int param_1)

{
  undefined *puVar1;
  
  if (1 < DAT_800a59a2) {
    (*(code *)PTR_FUN_800a599c)(s_PutDrawEnv__08x_____8001bf94,param_1);
  }
  FUN_80081fb0(param_1 + 0x1c,param_1);
  puVar1 = PTR_PTR_800a5998;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0xffffff;
  (**(code **)(puVar1 + 8))(*(undefined4 *)(puVar1 + 0x18),param_1 + 0x1c,0x40,0);
  FUN_8009a3e0(&DAT_800a59b0,param_1,0x5c);
  return param_1;
}
