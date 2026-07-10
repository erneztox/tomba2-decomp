/**
 * @brief Iterates all active and inactive entities, calls their update functions
 * @note Original: func_8007A904 at 0x8007A904
 */
// Entity_UpdateAll



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007a904(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_800fb168;
  while (iVar1 = _DAT_800f2624, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x24);
    *(undefined1 *)(iVar2 + 1) = 0;
    (**(code **)(iVar2 + 0x1c))();
    iVar2 = iVar1;
  }
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x24);
    *(undefined1 *)(iVar1 + 1) = 0;
    (**(code **)(iVar1 + 0x1c))();
    iVar1 = iVar2;
  }
  return;
}
