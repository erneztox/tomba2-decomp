/**
 * @brief Dispatches CD driver function at table+0x08
 * @note Original: func_80085B50 at 0x80085B50
 */
// CD_Dispatch08



void CD_Dispatch08(void)

{
  (**(code **)(PTR_PTR_800abda0 + 8))();
  return;
}
