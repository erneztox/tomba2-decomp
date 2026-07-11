/**
 * @brief Camera mode 1: init + conditionally calls FUN_8006dc38/FUN_8006df88 + commit
 * @note Original: func_8006E294 at 0x8006E294
 */
// Camera_Mode1



void FUN_8006e294(int param_1,undefined4 param_2)

{
  FUN_8006d934();
  FUN_8006d950(param_1,param_2);
  if (*(char *)(param_1 + 0x76) == '\0') {
    FUN_8006dc38(param_1);
    FUN_8006df88(param_1,1);
  }
  FUN_8006d02c(param_1);
  return;
}
