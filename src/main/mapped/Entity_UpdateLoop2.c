/**
 * @brief Entity update loop variant 2: iterates inactive list from DAT_800fb168
 * @note Original: func_8007B04C at 0x8007B04C
 */
// Entity_UpdateLoop2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007b04c(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_800fb168;
  while (iVar1 = iVar2, iVar2 = _DAT_800f2624, iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x24);
    *(undefined1 *)(iVar1 + 1) = 0;
    if ((*(byte *)(iVar1 + 0x28) & 0x80) != 0) {
      (**(code **)(iVar1 + 0x1c))();
    }
  }
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x24);
    *(undefined1 *)(iVar1 + 1) = 0;
    if ((*(byte *)(iVar1 + 0x28) & 0x80) != 0) {
      (**(code **)(iVar1 + 0x1c))();
    }
  }
  return;
}
