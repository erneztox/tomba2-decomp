// FUN_801099ac

undefined4 FUN_801099ac(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x80072ddc(param_1,0,5,3);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 0x80112100;
    uVar2 = FUN_80112980();
    return uVar2;
  }
  return 0;
}

