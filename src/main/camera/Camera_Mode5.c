/**
 * @brief Camera mode 5: inits, conditionally sets entity->camera_flags bit 1, commits
 * @note Original: func_8006E3F4 at 0x8006E3F4
 */
// Camera_Mode5



void FUN_8006e3f4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_8006d960();
  if (iVar1 != 0) {
    param_1->camera_flags = param_1->camera_flags | 1;
  }
  iVar1 = FUN_8006da54(param_1,param_2);
  if (iVar1 != 0) {
    param_1->camera_flags = param_1->camera_flags | 2;
  }
  FUN_8006d02c(param_1);
  return;
}
