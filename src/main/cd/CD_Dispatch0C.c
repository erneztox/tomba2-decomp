/**
 * @brief Dispatches CD driver function at table+0x0C
 * @note Original: func_80085B20 at 0x80085B20
 */
// CD_Dispatch0C



void FUN_80085b20(void)

{
  (**(code **)(PTR_PTR_800abda0 + 0xc))();
  return;
}
