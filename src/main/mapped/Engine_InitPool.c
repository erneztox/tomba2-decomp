/**
 * @brief Engine pool initializer: calls init funcs, clears entity pools
 * @note Original: func_8007B18C at 0x8007B18C
 */
// Engine_InitPool



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007b18c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_8004fb20();
  iVar2 = 0;
  FUN_800798f8();
  iVar3 = -0x7ff0d8c0;
  do {
    FUN_8009a420(iVar3,0,0x44);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x44;
  } while (iVar2 < 0x208);
  iVar2 = -0x7ff04ee4;
  _DAT_800e7e74 = &DAT_800ed8c0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    piVar1 = (int *)(_DAT_800e7e74 + -4);
    _DAT_800e7e74 = _DAT_800e7e74 + -4;
    *piVar1 = iVar2;
    iVar2 = iVar2 + -0x44;
  } while (iVar3 < 0x208);
  _DAT_800ed098 = 0x208;
  FUN_8007acc4();
  FUN_8007a810();
  FUN_8007ac14();
  FUN_8007ac40();
  FUN_8007ac6c();
  FUN_8007ac98();
  FUN_8007ad14();
  FUN_8007ad40();
  return;
}
