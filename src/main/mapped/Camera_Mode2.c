/**
 * @brief Camera mode 2: init + conditionally calls FUN_8006dad8/FUN_8006def0 + commit
 * @note Original: func_8006E2FC at 0x8006E2FC
 */
// Camera_Mode2



void FUN_8006e2fc(int param_1,undefined4 param_2)

{
  FUN_8006d934();
  FUN_8006d950(param_1,param_2);
  if (*(char *)(param_1 + 0x76) == '\0') {
    FUN_8006dad8(param_1);
    FUN_8006def0(param_1);
  }
  FUN_8006d02c(param_1);
  return;
}
