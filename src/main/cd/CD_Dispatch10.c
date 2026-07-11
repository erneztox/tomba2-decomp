/**
 * @brief Dispatches CD driver function at table+0x10
 * @note Original: func_80085C14 at 0x80085C14
 */
// CD_Dispatch10



void FUN_80085c14(void)

{
  (**(code **)(PTR_PTR_800abda0 + 0x10))();
  return;
}
