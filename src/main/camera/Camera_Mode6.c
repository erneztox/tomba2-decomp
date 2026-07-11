/**
 * @brief Camera mode 6: full sequence init + pos + calc + smoothY + commit
 * @note Original: func_8006E0F0 at 0x8006E0F0
 */
// Camera_Mode6



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006e0f0(int param_1)

{
  FUN_8006d2ac();
  FUN_8006d960(param_1,param_1 + 8);
  FUN_8006d654(param_1);
  FUN_8006da54(param_1,param_1 + 8);
  FUN_8006c80c(param_1);
  if ((param_1->camera_mode == '\0') && (DAT_800e7ffa == '\0')) {
    FUN_8006dcf4(param_1);
  }
  FUN_8006d02c(param_1);
  if (*(char *)(param_1 + 0x77) == '\0') {
    FUN_8006e010(param_1);
  }
  _DAT_1f800114 = _DAT_1f800114 - (*(int *)(param_1 + 0x28) + param_1->scale_y);
  return;
}
