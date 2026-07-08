
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80041ac0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8004766c();
  FUN_80049760(param_1);
  *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
  return uVar1;
}

