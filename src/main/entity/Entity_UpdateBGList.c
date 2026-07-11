/**
 * @brief Iterates background entity linked list, calls each entity's update function
 * @note Original: func_80069B28 at 0x80069B28
 */
// Entity_UpdateBGList



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80069b28(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = _DAT_800f2738;
  while (iVar2 != 0) {
    puVar1 = (undefined4 *)(iVar2 + 0x1c);
    iVar2 = *(int *)(iVar2 + 0x24);
    (*(code *)*puVar1)();
  }
  return;
}
