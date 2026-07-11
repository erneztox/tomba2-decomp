// FUN_80131c98

undefined4 FUN_80131c98(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x8007a980(2,4,0);
  if (iVar1 != 0) {
    *(undefined **)(iVar1 + 0x1c) = &DAT_8013a900;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined1 *)(iVar1 + 2) = 0x11;
    *(undefined1 *)(iVar1 + 3) = param_2;
    uVar2 = FUN_8013ac84();
    return uVar2;
  }
  return 0;
}

