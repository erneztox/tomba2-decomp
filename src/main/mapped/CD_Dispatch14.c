/**
 * @brief Dispatches CD driver function at table+0x14 with params
 * @note Original: func_80085BB0 at 0x80085BB0
 */
// CD_Dispatch14



void FUN_80085bb0(undefined4 param_1)

{
  (**(code **)(PTR_PTR_800abda0 + 0x14))(4,param_1);
  return;
}
