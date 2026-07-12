/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_800180EC at 0x800180EC
 */
// GPU_ExecSetup



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GPU_ExecSetup(undefined4 param_1)

{
  _DAT_80039e18 = 0xffffffff;
  _DAT_80039e28 = param_1;
  GPU_ExecSetup();
  GPU_ExecSetup(0x20000001,&DAT_80039e18);
  GPU_ExecSetup(0);
  return;
}
