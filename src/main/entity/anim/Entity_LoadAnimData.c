/**
 * @brief Loads animation data from table: sets entity[0x38] pointer and entity[0xE] flags
 * @note Original: func_80077B38 at 0x80077B38
 */
// Entity_LoadAnimData



void FUN_80077b38(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 * 4 + param_2);
  uVar1 = *(ushort *)(iVar2 + 2);
  param_1->anim_data = iVar2;
  param_1->anim_timer = uVar1 & 0x3fff;
  return;
}
