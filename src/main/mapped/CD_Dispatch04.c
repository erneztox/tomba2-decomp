/**
 * @brief Dispatches CD driver function at table+0x04
 * @note Original: func_80085B80 at 0x80085B80
 */
// CD_Dispatch04



void FUN_80085b80(void)

{
  (**(code **)(PTR_PTR_800abda0 + 4))();
  return;
}
